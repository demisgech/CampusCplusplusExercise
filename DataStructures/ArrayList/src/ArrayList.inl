#include <iostream>
#include <stdexcept>

#include "ArrayList.hpp"

using namespace std;

template <typename T>
void ArrayList<T>::resize(size_t newCapacity) {
  T* newData = new T[newCapacity];
  for (size_t i = 0; i < size; ++i) {
    newData[i] = data[i];
  }
  delete[] data;
  data = newData;
  capacity = newCapacity;
}

template <typename T>
void ArrayList<T>::swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
ArrayList<T>::ArrayList() : data{new T[1]}, capacity{1}, size{0} {}

template <typename T>
ArrayList<T>::ArrayList(initializer_list<T> list)
    : data{new T[list.size() > 0 ? list.size() : 1]},
      capacity{list.size() > 0 ? list.size() : 1},
      size{list.size()} {
  size_t i = 0;
  for (const auto& element : list) {
    data[i] = element;
    i++;
  }
}

template <typename T>
ArrayList<T>::ArrayList(const ArrayList& source)
    : data{new T[source.capacity]},
      capacity{source.capacity},
      size{source.size} {
  for (size_t i = 0; i < size; i++) {
    data[i] = source.data[i];
  }
}

template <typename T>
ArrayList<T>::~ArrayList() {
  delete[] data;
}

template <typename T>
ArrayList<T>& ArrayList<T>::operator=(const ArrayList& other) {
  if (this != &other) {
    T* newData = new T[other.capacity];
    for (size_t i = 0; i < other.size; i++) {
      newData[i] = other.data[i];
    }
    delete[] data;
    data = newData;
    capacity = other.capacity;
    size = other.size;
  }
  return *this;
}

template <typename T>
T& ArrayList<T>::operator[](size_t index) {
  if (index < 0 || index >= size) {
    throw out_of_range{"Index out of range!"};
  }
  return data[index];
}
template <typename T>
const T& ArrayList<T>::operator[](size_t index) const {
  if (index < 0 || index >= size) {
    throw out_of_range{"Index out of range!"};
  }
  return data[index];
}

template <typename T>
void ArrayList<T>::printArrayList() const {
  for (size_t i = 0; i < size; i++) {
    cout << data[i] << " ";
  }
  cout << endl;
}

template <typename T>
void ArrayList<T>::append(const T& value) {
  if (size == capacity) {
    resize(capacity * 2);
  }
  data[size] = value;
  ++size;
}

template <typename T>
void ArrayList<T>::prepend(const T& value) {
  //   insert(0, value);
  // Another option
  if (size == capacity) {
    capacity *= 2;
    T* newData = new T[capacity];
    newData[0] = value;
    for (size_t i = 0; i < size; ++i) {
      newData[i + 1] = data[i];
    }
    delete[] data;
    data = newData;
  } else {
    for (size_t i = size; i > 0; --i) {
      data[i] = data[i - 1];
    }
    data[0] = value;
  }
  ++size;
}

template <typename T>
void ArrayList<T>::insert(size_t index, const T& value) {
  if (index < 0 || index >= size + 1) {
    throw out_of_range{"Index out of range!"};
  }
  // optional
  //   if (index == 0) {
  //     prepend(value);
  //     return;
  //   }

  //   if (index == size) {
  //     append(value);
  //     return;
  //   }

  if (size == capacity) {
    resize(capacity * 2);
  }

  for (size_t i = size; i > index; --i) {
    data[i] = data[i - 1];
  }
  data[index] = value;
  ++size;
}

template <typename T>
void ArrayList<T>::deleteAt(size_t index) {
  if (index < 0 || index >= size) {
    throw out_of_range{"Index out of range!"};
  }
  for (size_t i = index; i < size - 1; i++) {
    data[i] = data[i + 1];
  }
  --size;
  if (size < capacity / 4 && capacity > 1) {
    resize(capacity / 2);
  }
}

template <typename T>
T ArrayList<T>::get(size_t index) {
  if (index < 0 || index >= size) {
    throw out_of_range{"Index out of range!"};
  }
  return data[index];
}

template <typename T>
void ArrayList<T>::set(size_t index, const T& value) {
  if (index < 0 || index >= size) {
    throw out_of_range{"Index out of range!"};
  }
  data[index] = value;
}

template <typename T>
void ArrayList<T>::reverse() {
  size_t leftIndex = 0;
  size_t rightIndex = size - 1;
  while (leftIndex < rightIndex) {
    swap(data[leftIndex], data[rightIndex]);
    --leftIndex;
    ++rightIndex;
  }
}

template <typename T>
void ArrayList<T>::sort() {
  for (size_t i = 0; i < size - 1; i++) {
    size_t minIndex = i;
    for (size_t j = i + 1; j < size; ++j) {
      if (data[minIndex] > data[j]) minIndex = j;
    }
    if (minIndex != i) {
      swap(data[i], data[minIndex]);
    }
  }
}

template <typename T>
size_t ArrayList<T>::find(const T& target) {
  for (size_t i = 0; i < size; i++) {
    if (target == data[i]) return i;
  }
  return -1;
}

template <typename T>
inline size_t ArrayList<T>::getSize() const {
  return size;
}

template <typename T>
inline bool ArrayList<T>::isEmpty() const {
  return size == 0;
}

template <typename T>
inline void ArrayList<T>::clear() {
  size = 0;
  resize(1);
}
