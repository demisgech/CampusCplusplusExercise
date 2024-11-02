#ifndef SORTING__HPP__
#define SORTING__HPP__

#include <cstdlib>

namespace Sorting {
template <typename T>
void simpleSort(T elements[], size_t size);

template <typename T>
void bubbleSort(T elements[], size_t size);

template <typename T>
void insertionSort(T elements[], size_t size);

template <typename T>
void selectionSort(T elements[], size_t size);

template <typename T>
void binaryInsertionSort(T elements[], size_t size);

template <typename T>
void mergeSort(T elements[], size_t size);

template <typename T>
void quickSort(T elements[], size_t size);

template <typename T>
void swap(T& a, T& b);
template <typename T>
void print(const T elements[], size_t size);

template <typename T>
void print(const T elements[], size_t minIndex, size_t maxIndex);

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