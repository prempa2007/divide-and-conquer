#include <stdio.h>

int zeros(int *arr, int m) {
    int left = 0, right = m - 1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == 1) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return m - left;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", zeros(arr, n));
    return 0;
}
