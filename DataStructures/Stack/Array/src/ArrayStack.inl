#include <iostream>

#include "ArrayStack.hpp"
#include "StackException.hpp"

using std::cout;
using std::endl;
using std::size_t;

template <typename T, size_t Size>
Stack<T, Size>::Stack() : data{}, initialSize{0} {}

template <typename T, size_t Size>
Stack<T, Size>::Stack(const initializer_list<T>& list)
    : initialSize{list.size() - 1} {
  if (list.size() > Size) {
    throw StackException{"Initializer list too long!"};
  }
  size_t i = 0;
  for (const auto item : list) {
    data[i++] = item;
    initialSize++;
  }
}

template <typename T, size_t Size>
Stack<T, Size>::Stack(const Stack& source) {
  for (size_t i = 0; i < Size; ++i) {
    data[i] = source.data[i];
  }
}

template <typename T, size_t Size>
T Stack<T, Size>::operator[](size_t index) {
  if (index >= Size || index < 0) {
    throw StackException{"Index out of range!"};
  }
  return data[index];
}

template <typename T, size_t Size>
const T Stack<T, Size>::operator[](size_t index) const {
  if (index >= Size || index < 0) {
    throw StackException{"Index out of range!"};
  }
  return data[index];
}

template <typename T, size_t Size>
Stack<T, Size>& Stack<T, Size>::operator=(const Stack& other) {
  if (&other != this)
    for (size_t i = 0; i < Size; ++i) {
      data[i] = other.data[i];
    }
  return *this;
}

template <typename T, size_t Size>
const Stack<T, Size>& Stack<T, Size>::operator=(const Stack& other) const {
  if (this != &other)
    for (size_t i = 0; i < Size; ++i) {
      data[i] = other.data[i];
    }
  return *this;
}

template <typename T, size_t Size>
void Stack<T, Size>::printStack() {
  for (size_t i = 0; i < initialSize; ++i) {
    cout << data[i] << " ";
  }
  cout << endl;
}

template <typename T, size_t Size>
void Stack<T, Size>::push(const T& value) {
  if (isFull()) {
    throw StackException{"Stack is full!"};
  }
  data[initialSize] = value;
  initialSize++;
}

template <typename T, size_t Size>
inline bool Stack<T, Size>::isFull() const {
  return initialSize >= (Size);
}

template <typename T, size_t Size>
T Stack<T, Size>::pop() {
  if (initialSize == 0) {
    throw StackException{"Stack is empty!"};
  }
  const T poppedValue = data[initialSize - 1];
  initialSize--;
  return poppedValue;
}

template <typename T, size_t Size>
T Stack<T, Size>::getTop() const {
  if (initialSize == 0) {
    throw StackException{"Stak is empty!"};
  }
  cout << "Top: " << data[initialSize - 1] << endl;
  return data[initialSize - 1];
}

template <typename T, size_t Size>
size_t Stack<T, Size>::getHeight() const {
  cout << "Height: " << initialSize << endl;
  return initialSize;
}
