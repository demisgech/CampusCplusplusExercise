#include "Array.hpp"

template <typename T, std::size_t Size>
Array<T, Size>::Array(T elements[Size]) {
  this->size = Size;
  this->elements = elements;
}

template <typename T, std::size_t Size>
T& Array<T, Size>::operator[](int index) {
  return elements[index];
}

template <typename T, std::size_t Size>
Array<T, Size>::Array(const Array& source) {
  elements = source.elements;
  size = source.size;
}

template <typename T, std::size_t Size>
Array<T, Size>& Array<T, Size>::operator=(const Array& other) {
  elements = other.elements;
  size = other.size;
  return *this;
}

template <typename T, std::size_t Size>
T Array<T, Size>::getFirst() {
  return elements[0];
}
