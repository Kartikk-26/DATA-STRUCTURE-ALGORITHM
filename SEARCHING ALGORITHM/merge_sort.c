#include <stdio.h>

void merge(int arr[], int low, int mid, int high);
void merge_sort(int arr[], int low, int high);

int main() {
    int n;

    // Get the size of the array from the user
    printf("                                 ****** MERGE SORT ******                                 \n");
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d", &n);
    printf("\n");

    int a[n];

    // Get array elements from the user
    printf("ENTER %d ELEMENTS:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("UNSORTED ARRAY: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");


    // Perform merge sort
    merge_sort(a, 0, n - 1);

    // Print the sorted array
    printf("SORTED ARRAY:   ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("                                 ****** THANK YOU ******                                 \n");
    printf("\n");

    return 0;
}

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int x[n1], y[n2];

    // Copy data to temporary arrays x[] and y[]
    for (int i = 0; i < n1; i++) {
        x[i] = arr[low + i];
    }

    for (int j = 0; j < n2; j++) {
        y[j] = arr[mid + 1 + j];
    }

    // Merge the sorted array
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (x[i] < y[j]) {
            arr[k] = x[i];
            i++;
        } else {
            arr[k] = y[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of x[] if any
    while (i < n1) {
        arr[k] = x[i];
        i++;
        k++;
    }

    // Copy remaining elements of y[] if any
    while (j < n2) {
        arr[k] = y[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort the first and second halves
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}
