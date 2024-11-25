#ifndef STACK__HPP
#define STACK__HPP

#include <cstdlib>
#include <initializer_list>

using std::initializer_list;
using std::size_t;

template <typename T, size_t Size>
class Stack {
 private:
  T data[Size];
  size_t initialSize;

 public:
  Stack();
  Stack(const initializer_list<T>& list);
  Stack(const Stack& source);

  Stack& operator=(const Stack& other);
  const Stack& operator=(const Stack& other) const;

  T operator[](size_t index);
  const T operator[](size_t index) const;

  void printStack();
  void push(const T& value);
  T pop();

  void getTop() const;
  void getHeight() const;

  bool isFull() const;
};

#include "../src/ArrayStack.inl"
#endif  // STACK__HPP