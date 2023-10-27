#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}stack;

stack *top,*temp;

void create_node()
{
    temp=(stack*)malloc(sizeof(stack));
    printf("Enter the values\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
}
void push()
{
    create_node();
    if(top==NULL){
        top=temp;
    }
    else{
        temp->next=top;
    }
    top=temp;
}
void pop()
{
    if(top==NULL){
        printf("underflow\n");
    }
    else{
        temp=top;
        top=top->next;
        printf("%d is deleted",temp->data);
        free(temp);
        temp=NULL;
    }
}
void peek()
{
    if(top==NULL){
        printf("underflow\n");
    }
    else{
        printf("%d",top->data);
    }
}
void display()
{
    if(top==NULL){
        printf("Underflow\n");
    }
    else{
        temp=top;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        // printf("NULL\n");
    }
}
int main()
{
    int choice,position;
    while (1) {
        printf("\nSTACK MENU:\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display(0);
                break;
            case 5: exit(0);
            default:
                printf("Invalid choice \n");
        }
    }
//return 0;
}
