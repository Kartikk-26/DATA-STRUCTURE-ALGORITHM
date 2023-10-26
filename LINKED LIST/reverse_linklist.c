#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node 
{
    int data;
    struct Node* next;
} node;

node* start = NULL;

void create_list() 
{
    node* temp = (node*)malloc(sizeof(node));
    if (temp == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter a new value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL) 
    {
        start = temp;
    } else 
    {
        node* ptr = start;
        while (ptr->next != NULL) 
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display() 
{
    if (start == NULL) 
    {
        printf("UNDERFLOW\n");
    } else 
    {
        node* temp = start;
        while (temp != NULL) 
        {
            printf("\t%d", temp->data);
            temp = temp->next;
        }
        printf("\nNULL\n");
    }
}

void reverse_list() 
{
    if (start == NULL || start->next == NULL) 
    {
        return; // No need to reverse if the list is empty or has only one element
    }

    node* prev = NULL;
    node* current = start;
    node* next = NULL;

    while (current != NULL) 
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    start = prev; // Update the start pointer to point to the new head
}

void display_reversed() 
{
    if (start == NULL) 
    {
        printf("UNDERFLOW\n");
    } else 
    {
        node* temp = start;
        while (temp != NULL) 
        {
            printf("\t%d", temp->data);
            temp = temp->next;
        }
        printf("\nNULL (Reversed)\n");
    }
}

int main() 
{
    int choice;
    while (1) 
    {
        printf("\nLINKED LIST MENU:\n");
        printf("1. CREATE LIST\n");
        printf("2. DISPLAY LIST\n");
        printf("3. REVERSE LIST\n");
        printf("4. DISPLAY REVERSED LIST\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                create_list();
                break;
            case 2:
                printf("Linked List:\n");
                display();
                break;
            case 3:
                reverse_list();
                printf("Linked List reversed\n");
                break;
            case 4:
                printf("Reversed Linked List:\n");
                display_reversed();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice \n");
        }
    }

    return 0;
}
