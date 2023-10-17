#include<stdio.h>
#include<stdlib.h>
#include<process.h>

int push(int[],int); // USING INT BCZ IT WILL RETURN THE VALUE 
int pop(int[],int);
void peek(int[],int); // USING VOID AS IT WILL NOT RETURN THE VALUE JUST PRINT THE TOP VALUE 
void display(int[],int);

int main()
{
    int ch; 
    int stack[50],top=-1;
    while(1)
    {
        printf("1: PUSH\n2: POP\n3: PEEK\n4: DISPLAY\n5: EXIT \n");
        scanf("%d",&ch);

        switch(1)
        {
            case 1: top=push(stack,top);
            break;

            case 2: top=pop(stack,top);
            break;

            case 3: peek(stack,top);
            break;

            case 4: display(stack,top);
            break;

            case 5: exit(0);
            break;

        }
        
    }

}

int push(int stack[],int top)
{
    if(top==49)
    printf("OVERFLOW\n");
    else
    {
        top++;
        printf("\nEnter the new element :");
        scanf("%d",&stack[top]);

    }
    return top;

}


int pop(int stack[],int top)
{
    if(top==-1)
    printf("UNDERFLOW\n");
    else
    {
        printf("%d is deleted\n",stack[top]);
        top--;
    }
    return top;
}

void peek(int stack[],int top)
{
    if(top==-1)
    printf("UNDERFLOW\n");
    else
    {
        printf("%d is on Top\n",stack[top]);
    }
}

void display(int stack[],int top)
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
