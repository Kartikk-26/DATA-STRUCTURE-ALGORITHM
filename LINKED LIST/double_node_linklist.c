#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* start = NULL;

void create_list() {
    Node* temp = (Node*)malloc(sizeof(Node));
    if (temp == NULL) {
        printf("Memory Allocation Failed\n");
        return;
    }

    printf("Enter A New Value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL) {
        start = temp;
    } else {
        Node* ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void double_node_value(int position) {
    Node* current = start;
    int count = 1;

    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }

    if (current != NULL) {
        current->data = current->data * 2;
        printf("Doubled the value at position %d\n. New value is %d\n", position, current->data);
    } else {
        printf("Node at position %d does not exist\n", position);
    }
}

void display() {
    if (start == NULL) {
        printf("The List Is Empty.\n");
    } else {
        Node* temp = start;
        printf("Linked List: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int choice, position;
    while (1) {
        printf("\nLINKED LIST MENU:\n");
        printf("1. Create A New Node\n");
        printf("2. Display The List\n");
        printf("3. Double The Value Of A Node\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_list();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter the position of the node you want to double: ");
                scanf("%d", &position);
                double_node_value(position);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}
