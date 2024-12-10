#include "QueueException.hpp"

QueueException::QueueException(const char* message) : message{message} {}

const char* QueueException::what() const noexcept { return message; }
