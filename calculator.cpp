#include "calculator.h"

// Реализуйте здесь методы класса.
void Calculator::Set(Number n) {
    result_ = n;
}

Number Calculator::GetNumber() const {
    return result_;
}

void Calculator::Add(Number n) {
    result_ += n;
}

void Calculator::Sub(Number n) {
    result_ -= n;
}

void Calculator::Div(Number n) {
    if (n != 0) {
        result_ /= n;
    } else {
        result_ = 0;
    }
}

void Calculator::Mul(Number n) {
    result_ *= n;
}

void Calculator::Pow(Number n) {
    if (n == 0) {
        result_ = 1;
    } else if (n > 0) {
        Number original = result_;
        for (int i = 1; i < n; ++i) {
            result_ *= original;
        }
    }
}
void Calculator::Save() {
    memory_ = result_;
    has_memory_ = true;
}
void Calculator::Load() {
    if (has_memory_) {
        result_ = memory_;
    }
}
bool Calculator::HasMem() const {
    return has_memory_;
}
std::string Calculator::GetNumberRepr() const {
    return std::to_string(result_);
}
