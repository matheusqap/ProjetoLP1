#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP

#include <vector>

template <typename T>
int binarySearchRecursive(const std::vector<T>& arr, const T& target, int left, int right);

template <typename T>
int binarySearchIterative(const std::vector<T>& arr, const T& target);

#include "../include/binarySearch.hpp""

#endif  // BINARY_SEARCH_HPP
