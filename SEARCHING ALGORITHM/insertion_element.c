#include <stdio.h>

int main() {
    int array[100], size, element, position;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input the element to be inserted and its position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (0-indexed): ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > size) {
        printf("Invalid position for insertion.\n");
    } else {
        // Shift elements to make room for the new element
        for (int i = size; i > position; i--) {
            array[i] = array[i - 1];
        }

        // Insert the element at the specified position
        array[position] = element;
        size++;

        // Print the updated array
        printf("Updated array after insertion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
