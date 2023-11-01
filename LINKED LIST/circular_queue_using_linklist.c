#include<stdio.h>
#include<stdlib.h>

//DEFINE THE NODE 
typedef struct node{
    int data;
    struct node*next;
} node;

node* start=NULL;
node*last,*temp;


void enqueue(){
    temp=(node*)malloc(sizeof(node));
    printf("Enter Element: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(last==NULL){
        last=temp;
        last->next=temp;
    }
    else{
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}


void dequeue() {
    if (last == NULL) {
        printf("UNDERFLOW\n");
    } else if (last->next == last) {
        printf("ELEMENT DELETED: %d\n", last->data);
        free(last);
        last = NULL;
    } else {
        temp = last->next;
        printf("ELEMENT DELETED: %d\n", temp->data);
        last->next = temp->next;
        free(temp);
    }
}

void display(){
    if(last==NULL){
        printf("UNDERFLOW\n");
    }
    else{
        temp=last->next;
        do{
            printf("\t%d",temp->data);
            temp=temp->next;
        }while(temp!=last->next);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nLINKED LIST MENU:\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
       // printf("5. DOUBLE THE VALUE AT A GIVEN NODE\n");
        //printf("6. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("Linked List :\n");
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");        
        }
    }

    return 0;
}
