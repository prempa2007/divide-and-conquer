#include <stdio.h>

int found = 0;

void findPair(int arr[], int low, int high, int x) {
    if (low >= high) {
        return;
    }
    int sum = arr[low] + arr[high];
    if (sum == x) {
        printf("%d\n", arr[low]);
        printf("%d\n", arr[high]);
        found = 1;
        return;
    } else if (sum < x) {
        findPair(arr, low + 1, high, x);
    } else {
        findPair(arr, low, high - 1, x);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int x;
    if (scanf("%d", &x) != 1) return 1;
    
    findPair(arr, 0, n - 1, x);
    if (!found) {
        printf("No\n");
    }
    return 0;
}
