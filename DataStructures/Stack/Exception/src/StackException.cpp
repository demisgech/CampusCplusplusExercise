#include "StackException.hpp"

StackException::StackException(const char* message) : message{message} {}

const char* StackException::what() const noexcept { return message; }