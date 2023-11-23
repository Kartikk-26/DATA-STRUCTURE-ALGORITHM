#include <stdio.h>

int search(int arr[], int N, int x) {
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void) {
    int N;
    printf("                                   **************LINEAR SEARCH *************                                   \n");

    // Take input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    // Take input for the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int x;

    // Take input for the element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    // Function call
    int result = search(arr, N, x);

    // Display the result
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);

    return 0;
}
