#pragma once
#include <stdexcept>
#include <numeric>
#include <iostream>
#include <compare>


class Rational {
public:


    Rational(int numerator, int denominator) :
        numerator_(numerator),
        denominator_(denominator) {
        if(denominator_ == 0) {
            throw std::invalid_argument("denominator can not be 0");
        }
        Reduction();
    }


    Rational(int numerator) :
        numerator_(numerator),
        denominator_(1) {}


    Rational() :
        numerator_(0),
        denominator_(1) {}


    Rational(const Rational& num) {
        numerator_ = num.numerator_;
        denominator_ = num.denominator_;
        Reduction();
    }


    inline int GetNumerator() const {
        return numerator_;
    }


    inline int GetDenominator() const {
        return denominator_;
    }


    inline Rational Inv() const {
        return Rational{denominator_, numerator_};
    }


    inline void Reduction() {
        if (denominator_ < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }
        const int divisor = std::gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    }


    friend inline Rational operator+(Rational lhs, const Rational& rhs) {
        lhs += rhs;
        return lhs;
    }


    friend inline Rational operator-(Rational lhs, const Rational& rhs) {
        lhs -= rhs;
        return lhs;
    }


    friend inline Rational operator*(Rational lhs, const Rational& rhs) {
        lhs *= rhs;
        return lhs;
    }


    friend inline Rational operator/(Rational lhs, const Rational& rhs) {
        lhs /= rhs;
        return lhs;
    }


    inline Rational operator+() const {
        return *this;
    }


    inline Rational operator-() const {
        return {-numerator_, denominator_};
    }


    inline Rational& operator=(const Rational& other) {
        numerator_ = other.numerator_;
        denominator_ = other.denominator_;
        return *this;
    }


    inline Rational& operator+=(Rational r){
        numerator_ = numerator_ * r.denominator_ + denominator_ * r.numerator_;
        denominator_ = denominator_ * r.denominator_;
        Reduction();
        return *this;
    }


    inline Rational& operator-=(Rational r){
        numerator_ = numerator_ * r.denominator_ - denominator_ * r.numerator_;
        denominator_ = denominator_ * r.denominator_;
        Reduction();
        return *this;
    }


    inline Rational& operator*=(Rational r){
        numerator_ = numerator_ * r.numerator_;
        denominator_ = denominator_ * r.denominator_;
        Reduction();
        return *this;
    }


    inline Rational& operator/=(Rational r){
        numerator_ = numerator_ * r.denominator_ ;
        denominator_ = denominator_ *r.numerator_;
        Reduction();
        return *this;
    }


    friend inline std::ostream& operator<<(std::ostream& os, const Rational& r) {
        os << r.numerator_;
        if (r.denominator_ != 1) {
            os << ' ' << '/' << ' ' << r.denominator_;
        }
        return os;
    }


    friend inline std::istream& operator>>(std::istream& is, Rational& r) {
        int num = 0;
        if (!(is >> num)) {
            return is;
        }

        char slash = 0;
        if (!(is >> slash)) {
            is.clear();
            r = Rational{num};
            return is;
        }

        if (slash != '/') {
            is.unget();
            r = Rational{num};
            return is;
        }

        int den = 1;
        if (!(is >> den) || den == 0) {
            is.setstate(std::ios::failbit);
            return is;
        }

        r = Rational{num, den};  
        return is;
    }


    friend inline bool operator==(const Rational& lhs, const Rational& rhs) {
        return static_cast<long long>(lhs.GetNumerator()) * rhs.GetDenominator()
        ==
            static_cast<long long>(rhs.GetNumerator()) * lhs.GetDenominator();
    }


    friend inline std::strong_ordering operator<=>(const Rational& lhs, const Rational& rhs) {
        return static_cast<long long>(lhs.GetNumerator()) * rhs.GetDenominator()
        <=>
            static_cast<long long>(rhs.GetNumerator()) * lhs.GetDenominator();
    }


private:
    int numerator_ {};
    int denominator_ = 1;

};

