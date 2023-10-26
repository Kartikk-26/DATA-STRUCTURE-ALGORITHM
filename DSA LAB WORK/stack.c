//STACK USING SWITCH CASE IN C;
#include<stdio.h>
#include<stdlib.h>
#include<process.h>

int stack[50];
int top=-1;
void push();
void pop();
void peek();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("1: PUSH\n2: POP\n3: PEEK\n4: DISPLAY\n5: EXIT \n");
        scanf("%d",&ch);
        switch(ch)
        {
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
                display();
            break;
            case 5:
                exit(0);
            break;
            default :
            printf("Wrong Choice\n");
        }

    }
}

void push()
{
    if(top==49)
    printf("OVERFLOW\n");
    else
    {
        top++;
        printf("\nEnter the new element :");
        scanf("%d",&stack[top]);

    }

}


void pop()
{
    if(top==-1)
    printf("UNDERFLOW\n");
    else
    {
        printf("%d is deleted\n",stack[top]);
        top--;
    }
}

void peek()
{
    if(top==-1)
    printf("UNDERFLOW\n");
    else
    {
        printf("%d is on Top\n",stack[top]);
    }
}

void display()
{
    if(top==-1)
    printf("UNDERFLOW\n");
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}


