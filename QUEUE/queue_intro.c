//QUEUE USING GLOBAL VARIABLE ;
#include<stdio.h>
int queue[50];
int rear =-1;
int front =-1;

void enqueue();
void dequeue();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("1: enqueue\n2: dequeue\n3: display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                 enqueue();
            break;
            case 2:
                 dequeue();
    
            break;
            case 3:
                 display();

            break;
            default:
                 printf("\nwrong choise\n");
        }
    }

    return 0;

}


void enqueue()
{
    if (rear==49)
    {
        printf("\n overflow");
    }
    else
    {
        if (rear == -1)
        {
            front++;
            rear++;
        }
        else
            rear++;
            scanf("%d",&queue[rear]);
        
    }
    
}

void dequeue()
{
    if (front==-1)
    {
        printf("\n underflow");
    }
    else
    {
        printf("%d is deleted\n",queue[front]);
        front ++;
    }
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
    
    
}

void display()
{
    if (front == -1)
    {
        printf("\n underflow");
    }
    else 
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d is present in queue\n",queue[i]);
        }
        
    }
    
}
//QUEUE USING LOCAL VARIABLE;
/*#include<stdio.h>

void enqueue(int[],int,int);
void dequeue(int[],int,int);
void display(int[],int,int);
int main()
{
    int queue[50];
    int rear =-1;
    int front =-1;
    int ch;
    while(1)
    {
        printf("1: enqueue\n2: dequeue\n3: display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                 enqueue(queue,front,rear);
            break;
            case 2:
                 dequeue(queue,front,rear);
    
            break;
            case 3:
                 display(queue,front,rear);

            break;
            default:
                 printf("\nwrong choise\n");
        }
    }

    return 0;

}


void enqueue(int queue[],int rear ,int front )
{
    if (rear==49)
    {
        printf("\n overflow");
    }
    else
    {
        if (rear == -1)
        {
            front++;
            rear++;
        }
        else
            rear++;
            scanf("%d",&queue[rear]);
        
    }
    
}

void dequeue(int queue[],int rear ,int front )
{
    if (front==-1)
    {
        printf("\n underflow");
    }
    else
    {
        printf("%d is deleted\n",queue[front]);
        front ++;
    }
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
    
    
}

void display(int queue[],int rear ,int front )
{
    if (front == -1)
    {
        printf("\n underflow");
    }
    else 
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d is present in queue\n",queue[i]);
        }
        
    }
    
}*/
