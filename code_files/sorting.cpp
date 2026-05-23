#include <iostream>
// std::sort(arr, arr + n);   // Works for raw arrays
// std::sort(nums1.begin(), nums1.end()); // Works for vectors
int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    std::sort(arr, arr + n); 
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}