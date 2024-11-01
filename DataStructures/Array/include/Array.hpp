#ifndef ARRAY__HPP__
#define ARRAY__HPP__
#include <cstdlib>

template <typename T, std::size_t Size>
class Array {
 private:
  std::size_t size;
  T elements[];

 public:
  Array(T elements[]);
  T& operator[](int index);
  Array(const Array& source);
  Array& operator=(const Array& other);
  T getFirst();
  T getLast();
  void set(const T& value);
};

#include "../src/Array.inl"
#endif  // ARRAY__HPP__
