#include <stdio.h>

int main() {
    int array[100], size, position;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input the position of the element to be removed
    printf("Enter the position to remove (0-indexed): ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= size) {
        printf("Invalid position for removal.\n");
    } else {
        // Shift elements to remove the element at the specified position
        for (int i = position; i < size - 1; i++) {
            array[i] = array[i + 1];
        }

        size--;

        // Print the updated array
        printf("Updated array after removal:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
