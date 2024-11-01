#ifndef SORTING__HPP__
#define SORTING__HPP__

#include <cstdlib>

namespace Sorting {
template <typename T, typename Size>
void simpleSort(T elements[], Size size);

template <typename T, typename Size>
void bubbleSort(T elements[], Size size);

template <typename T, typename Size>
void insertionSort(T elements[], Size size);

template <typename T, typename Size>
void selectionSort(T elements[], Size size);

template <typename T, typename Size>
void binaryInsertionSort(T elements[], Size size);

template <typename T, typename Size>
void mergeSort(T elements[], Size size);

template <typename T, typename Size>
void quickSort(T elements[], Size size);

template <typename T>
void swap(T& a, T& b);
template <typename T, typename Size>
void print(const T elements[], Size size);

template <typename T, typename Size>
void print(const T elements[], Size minIndex, Size maxIndex);

}  // namespace Sorting

#include "../src/binaryInsertionSort.inl"
#include "../src/bubbleSort.inl"
#include "../src/insertionSort.inl"
#include "../src/mergeSort.inl"
#include "../src/print.inl"
#include "../src/quickSort.inl"
#include "../src/selectionSort.inl"
#include "../src/simpleSort.inl"
#include "../src/swap.inl"
#endif  // SORTING__HPP__