#include <stdio.h>

int queue[5]; // Assuming a maximum size of 5
int rear = -1;
int front = -1;
int max = 5;

void enqueue();
void dequeue();
void display();

int main() {
    int ch;
    while (1) {
        printf("1: enqueue\n2: dequeue\n3: display\n4: exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}

void enqueue() {
    if ((front == 0 && rear == max - 1) || (front - 1 == rear)) {
        printf("Overflow\n");
    } else {
        if (rear == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % max;
        }
        printf("Enter element: ");
        scanf("%d", &queue[rear]);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Underflow\n");
    } else {
        printf("%d is deleted\n", queue[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % max;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Underflow\n");
    } else {
        int i = front;
        printf("Queue: ");
        do {
            printf("%d ", queue[i]);
            i = (i + 1) % max;
        } while (i != (rear + 1) % max);
        printf("\n");
    }
} 