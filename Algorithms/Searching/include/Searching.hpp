#ifndef SEARCHING__HPP__
#define SEARCHING__HPP__

namespace Searching {

template <typename T, typename Size>
Size linearSearch(T elements[], Size size, T target);

template <typename T, typename Size>
Size binarySearch(T elements[], Size size, T target);

template <typename T, typename Size>
bool binarySearchItem(T elements[], Size size, T target);

}  // namespace Searching

#include "../src/binarySearch.inl"
#include "../src/linearSearch.inl"
#endif  // SEARCHING__HPP__