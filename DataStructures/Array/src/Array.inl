#include <iostream>
#include <stdexcept>

#include "Array.hpp"

using namespace std;

template <typename T, std::size_t Size>
void Array<T, Size>::swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}
template <typename T, std::size_t Size>
Array<T, Size>::Array() : data{} {}

template <typename T, std::size_t Size>
Array<T, Size>::Array(const initializer_list<T> list) {
  if (list.size() > Size) throw out_of_range{"Initializer list too long!"};
  size_t i = 0;
  for (const auto& element : list) {
    data[i++] = element;
  }
}

template <typename T, std::size_t Size>
Array<T, Size>::Array(const Array& source) {
  for (size_t i = 0; i < Size; i++) {
    data[i] = source.data[i];
  }
}

template <typename T, std::size_t Size>
Array<T, Size>& Array<T, Size>::operator=(const Array& other) {
  if (this != &other) {
    for (size_t i = 0; i < Size; i++) {
      data[i] = other.data[i];
    }
  }
  return *this;
}

template <typename T, std::size_t Size>
T& Array<T, Size>::operator[](int index) {
  if (index < 0 || index >= static_cast<int>(Size)) {
    throw out_of_range{"Index out of range!"};
  }
  return data[index];
}

template <typename T, size_t Size>
const T& Array<T, Size>::operator[](int index) const {
  if (index < 0 || index >= static_cast<int>(Size)) {
    throw out_of_range{"Index out of range!"};
  }
  return data[index];
}

template <typename T, size_t Size>
void Array<T, Size>::printArray() const {
  for (size_t i = 0; i < Size; i++) {
    cout << data[i] << " ";
  }
  cout << endl;
}

template <typename T, size_t Size>
T Array<T, Size>::getFirst() const {
  if (Size == 0) throw underflow_error{"Array is empty!"};
  return data[0];
}

template <typename T, size_t Size>
T Array<T, Size>::getLast() const {
  if (Size == 0) throw underflow_error{"Array is empty!"};
  return data[Size - 1];
}

template <typename T, size_t Size>
void Array<T, Size>::set(const size_t index, const T& value) {
  if (index < 0 || index >= static_cast<int>(Size))
    throw out_of_range{"Index out of range!"};
  data[index] = value;
}

template <typename T, size_t Size>
size_t Array<T, Size>::getSize() const {
  return Size;
}

template <typename T, std::size_t Size>
T* Array<T, Size>::begin() {
  return data;
}

template <typename T, std::size_t Size>
const T* Array<T, Size>::begin() const {
  return data;
}

template <typename T, std::size_t Size>
T* Array<T, Size>::end() {
  return data + Size;
}

template <typename T, std::size_t Size>
const T* Array<T, Size>::end() const {
  return data + Size;
}

template <typename T, std::size_t Size>
void Array<T, Size>::sort() {
  for (size_t i = Size - 1; i > 0; --i) {
    for (size_t j = 0; j < i; j++) {
      if (data[j] > data[j + 1]) {
        swap(data[j], data[j + 1]);
      }
    }
  }
}

template <typename T, std::size_t Size>
bool Array<T, Size>::isSorted() const {
  for (size_t i = 0; i < Size; i++) {
    if (data[i] > data[i + 1]) return false;
  }
  return true;
}

template <typename T, std::size_t Size>
void Array<T, Size>::reverse() {
  size_t leftIndex = 0;
  size_t rightIndex = Size - 1;
  while (leftIndex < rightIndex) {
    swap(data[leftIndex], data[rightIndex]);
    ++leftIndex;
    --rightIndex;
  }
}

template <typename T, std::size_t Size>
size_t Array<T, Size>::find(const T& target) const {
  for (size_t i = 0; i < Size; i++) {
    if (target == data[i]) return i;
  }
  return -1;
}
