#include "Array.hpp"

template <typename T, std::size_t Size>
Array<T, Size>::Array(T elements[]) {
  this->size = size;
}

template <typename T, std::size_t Size>
T& Array<T, Size>::operator[](int index) {
  return elements[index];
}

template <typename T, std::size_t Size>
Array<T, Size>::Array(const Array& source) {
  source.elements = elements;
  source.size = size;
}

template <typename T, std::size_t Size>
Array<T, Size>& Array<T, Size>::operator=(const Array& other) {
  other.elements = elements;
  other.size = size;
  return *this;
}

template <typename T, std::size_t Size>
T Array<T, Size>::getFirst() {
  return elements[0];
}
