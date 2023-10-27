#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} linknode;

linknode *start = NULL; // Initialize start to NULL
linknode *temp, *rear;

int count = 0;

void create_node() {
    temp = (linknode *)malloc(sizeof(linknode));
    printf("Enter the value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
}

void insert_first() {
    create_node();
    count++;
    if (start == NULL) {
        start = temp;
        rear = temp;
    } else {
        temp->next = start;
        start = temp;
    }
}

void insert_last() {
    create_node();
    count++;
    if (start == NULL) {
        start = temp;
        rear = temp;
    } else {
        rear->next = temp;
        rear = temp; // Update rear to the new last node
    }
}

void insert_mid() 
{
    int pos;
    printf("Enter node number: ");
    scanf("%d", &pos);
    if (pos >= 1 && pos <= count + 1) 
    {
        if (pos == 1) 
        {
            insert_first();
        } else if (pos == count + 1) 
        {
            insert_last();
        } else {
            create_node();
            count++;
            linknode *p = start;
            for (int i = 1; i < pos - 1; i++) { // Changed i=0 to i=1
                p = p->next;
            }
            temp->next = p->next;
            p->next = temp;
        }
    }
}

void display() {
    if (start == NULL) {
        printf("Linked List is empty.\n");
    } else {
        linknode *temp = start;
        printf("Linked List:\n");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nLINKED LIST MENU:\n");
        printf("1. Insert At The Beginning\n");
        printf("2. Insert At The End\n");
        printf("3. Insert At Mid\n");
        printf("4. Display Linklist\n");
        printf("5. Exit\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_first();
                break;
            case 2:
                insert_last();
                break;
            case 3:
                insert_mid();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
