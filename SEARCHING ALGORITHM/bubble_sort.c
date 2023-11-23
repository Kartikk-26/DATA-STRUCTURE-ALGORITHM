#include <stdio.h>

// Function declaration
void print_array(int *a, int n);

void sort(int *a, int x, int y)
{
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void bubble_sort(int *a, int n)
{
    int temp;
    int swap = 0;
    
    for (int i = 0; i < n - 1; i++)
    {
        int count = 0;  // Counter for iterations
        for (int j = 0; j < n - i - 1; j++)
        {
            count++;
            if (a[j] > a[j + 1])
            {
                sort(a, j, (j + 1));
                swap = 1;
            }
        }

        printf("Iteration %d: ", i + 1);
        print_array(a, n);
        printf("\n");
        
        if (!swap)  // If no swaps were made, the array is already sorted
        {
            printf("Already Sorted\n");
            break;  // Exit the loop as the array is already sorted
        }
    }
}

void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    printf("****************BUBBLE SORT****************\n");
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("\nBEFORE SORTED:\n");
    print_array(a, n);
    printf("\n\nSorting Process:\n");
    bubble_sort(a, n);
    printf("\nAFTER SORTED:\n");
    print_array(a, n);
    printf("\n");
    printf("\nBEST CASE: ALREADY SORTED\n");
    printf("WORST CASE: O(n^2)\n");
    
    return 0;
}
