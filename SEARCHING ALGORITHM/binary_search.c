#include <stdio.h>

int binary_search(int a[], int beg, int end, int x) {
    int mid;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] < x) {
            beg = mid + 1;
        } else { // You only need one "else" condition here
            end = mid - 1;
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int x;
    printf("Enter the element to search for: ");
    scanf("%d", &x);
    int result = binary_search(a, 0, n - 1, x);
    if (result == -1) {
        printf("Element is not present in the array.\n");
    } else {
        printf("Element is present at index %d.\n", result);
    }
    return 0;
}
