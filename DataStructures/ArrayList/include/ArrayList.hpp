#ifndef ARRAYLIST__HPP__
#define ARRAYLIST__HPP__

#include <cstdlib>
#include <initializer_list>

using namespace std;

template <typename T>
class ArrayList {
 private:
  T* data;
  size_t capacity;
  size_t size;
  void resize(size_t newCapacity);

 public:
  ArrayList();
  ArrayList(initializer_list<T> list);
  ArrayList(const ArrayList& source);
  ~ArrayList();

  ArrayList& operator=(const ArrayList& other);
  T& operator[](size_t index);
  const T& operator[](size_t index) const;

  void printArrayList() const;
  void append(const T& value);
  void prepend(const T& value);
  void insert(size_t index, const T& value);
  void deleteAt(size_t index);
  T get(size_t index);
  void set(size_t index, const T& value);

  size_t getSize() const;
  bool isEmpty() const;
  void clear();
};

#include "../src/ArrayList.inl"

#endif  // ARRAYLIST__HPP__
