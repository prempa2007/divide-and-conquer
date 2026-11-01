#include <stdio.h>

int findFloor(int arr[], int low, int high, int x) {
    if (low > high) return -1;
    if (arr[low] > x) return -1;
    if (arr[high] <= x) return arr[high];
    
    int mid = low + (high - low) / 2;
    if (arr[mid] == x) return arr[mid];
    
    if (arr[mid] < x) {
        if (mid == high || arr[mid + 1] > x) return arr[mid];
        return findFloor(arr, mid + 1, high, x);
    } else {
        if (mid > low && arr[mid - 1] <= x) return arr[mid - 1];
        return findFloor(arr, low, mid - 1, x);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    int x;
    if (scanf("%d", &x) != 1) return 1;
    
    int result = findFloor(arr, 0, n - 1, x);
    printf("%d\n", result);
    return 0;
}
