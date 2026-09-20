#pragma once

#include <string>
#include <optional>
#include "rational.h"
#include "pow.h"

using Error = std::string;

template <typename Number>
class Calculator {

public:



    inline void Set(Number n) {
        result_ = n;
    }


    inline Number GetNumber() const {
        return result_;
    }


    inline std::optional<Error> Add(Number n) {
        result_ += n;
        return std::nullopt;
    }


    inline std::optional<Error> Sub(Number n) {
        result_ -= n;
        return std::nullopt;
    }


    inline std::optional<Error> Mul(Number n) {
        result_ *= n;
        return std::nullopt;
    }


    inline std::optional<Error> Div(Number n) {
        if constexpr (std::is_integral_v<Number>) {
            if(n == Number{}) {
                return Error{"Division by zero"};
            }
            result_ /= n;
        } else if constexpr(std::is_same_v<Number, Rational>) {
            if(n == Rational{}) {
                return Error{"Division by zero"};
            }
            result_ /= n;
        } else {
            result_ /= n;
        }
        return std::nullopt;
    }


    inline std::optional<Error> Pow(Number n) {
        if constexpr (std::is_integral_v<Number>) {
            if (result_ == Number{} && n == Number{}) {
                return Error{"Zero power to zero"};
            }
            if (n < Number{}) {
                return Error{"Integer negative power"};
            }
            result_ = ::Pow(result_, n);
            return std::nullopt;
        } else if constexpr (std::is_same_v<Number, Rational>) {
            if (n.GetDenominator() != 1) {
                return Error{"Fractional power is not supported"};
            }
            if (result_ == Rational{} && n == Rational{}) {
                return Error{"Zero power to zero"};
            }
            result_ = ::Pow(result_, n);
            return std::nullopt;
        } else {
            result_ = ::Pow(result_, n);
            return std::nullopt;
        }
    }

    inline void Save() {
        memory_ = result_;
    }


    inline void Load() {
        if(memory_.has_value()){
            result_ = memory_.value();
        }
    }


    inline bool GetHasMem() const {
        return memory_.has_value();
    }


    inline std::string GetNumberRepr() const {
        return std::to_string(result_);
    }


private:

    Number result_ {};
    std::optional<Number> memory_ {};
};