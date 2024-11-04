#ifndef ARRAY__HPP__
#define ARRAY__HPP__
#include <cstdlib>
#include <initializer_list>

template <typename T, std::size_t Size>
class Array {
 private:
  T data[Size];
  void swap(T& a, T& b);

 public:
  Array();
  // Constructor with initialization list
  Array(const std::initializer_list<T> list);
  // Copy constructor
  Array(const Array& source);

  T& operator[](int index);
  const T& operator[](int index) const;
  Array& operator=(const Array& other);

  void printArray() const;
  T getFirst() const;
  T getLast() const;
  T get(size_t index) const;
  void set(const std::size_t index, const T& value);
  std::size_t getSize() const;

  T* begin();
  const T* begin() const;
  T* end();
  const T* end() const;

  void sort();
  bool isSorted() const;
  void reverse();
  size_t find(const T& target) const;
};

#include "../src/Array.inl"
#endif  // ARRAY__HPP__
