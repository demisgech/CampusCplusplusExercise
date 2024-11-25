#include "CircularLinkedListException.hpp"

CircularLinkedListException::CircularLinkedListException(const char* message)
    : message{message} {}

const char* CircularLinkedListException::what() const noexcept {
  return message;
}
