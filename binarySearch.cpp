#include "../include/binarySearch.hpp"

template <typename T>
int binarySearchRecursive(const std::vector<T>& arr, const T& target, int left, int right) {
    if (left > right) {
        return -1;  // Elemento não encontrado
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;  // Elemento encontrado
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, target, left, mid - 1);  // Busca na metade esquerda
    } else {
        return binarySearchRecursive(arr, target, mid + 1, right);  // Busca na metade direita
    }
}

template <typename T>
int binarySearchIterative(const std::vector<T>& arr, const T& target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Elemento encontrado
        } else if (arr[mid] > target) {
            right = mid - 1;  // Busca na metade esquerda
        } else {
            left = mid + 1;  // Busca na metade direita
        }
    }

    return -1;  // Elemento não encontrado
}
