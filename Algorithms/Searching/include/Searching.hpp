#ifndef SEARCHING__HPP__
#define SEARCHING__HPP__

#include <cstdlib>

using namespace std;

namespace Searching {

template <typename T>
size_t linearSearch(T elements[], size_t size, T target);

template <typename T>
size_t binarySearch(T elements[], size_t size, T target);

template <typename T>
bool binarySearchItem(T elements[], size_t size, T target);

}  // namespace Searching

#include "../src/binarySearch.inl"
#include "../src/linearSearch.inl"
#endif  // SEARCHING__HPP__