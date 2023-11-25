#include <stdio.h>

void countingSort(int inputArray[], int n) {
    // Find the maximum element in the array
    int max = inputArray[0];
    for (int i = 1; i < n; i++) {
        if (inputArray[i] > max) {
            max = inputArray[i];
        }
    }

    // Create and initialize countArray[]
    int countArray[max + 1];
    for (int i = 0; i <= max; i++) {
        countArray[i] = 0;
    }

    // Step 3: Store the count of each element in countArray[]
    for (int i = 0; i < n; i++) {
        countArray[inputArray[i]]++;
    }

    // Step 4: Calculate the prefix sum in countArray[]
    for (int i = 1; i <= max; i++) {
        countArray[i] += countArray[i - 1];
    }

    // Step 5: Build the outputArray[]
    int outputArray[n];
    for (int i = n - 1; i >= 0; i--) {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++) {
        inputArray[i] = outputArray[i];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Get the number of elements from the user
    printf("                                  ********** COUNTING SORT **********                                  \n");
    printf("ENTER THE NUMBER OF ELEMENTS:  ");
    scanf("%d", &n);
    printf("\n");

    int inputArray[n];

    // Get elements from the user
    printf("ENTER THE ELEMENTS: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputArray[i]);
    }
    printf("\n");

    printf("ORIGNAL ARRAY BY USER : ");
    printArray(inputArray, n);
    printf("\n");

    countingSort(inputArray, n);

    printf("SORTED ARRAY BY COUNTING SORT:  ");
    printArray(inputArray, n);
    printf("\n");
    printf("                                  ********** THANK YOU **********                                  \n");

    return 0;
}
