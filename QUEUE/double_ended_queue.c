#include <stdio.h>

int front = -1;
int rear = -1;
int queue[5];

void enqueue_from_front(int item) {
    if ((front == 0 && rear == 4) || (front == rear + 1) || (front == 0 && rear == -1)) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = 4;
        } else {
            front--;
        }
        queue[front] = item;
    }
}

void enqueue_from_rear(int item) {
    if ((front == 0 && rear == 4) || (front == rear + 1) || (front == 0 && rear == -1)) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        rear = (rear + 1) % 5;
        queue[rear] = item;
    }
}

int dequeue_from_front() {
    if (front == -1) {
        printf("Underflow\n");
        return -1;  // You can return an error code here
    } else {
        int item = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % 5;
        }
        return item;
    }
}

int dequeue_from_rear() {
    if (front == -1) {
        printf("Underflow\n");
        return -1;  // You can return an error code here
    } else {
        int item = queue[rear];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            if (rear == 0) {
                rear = 4;
            } else {
                rear--;
            }
        }
        return item;
    }
}

void display() {
    if (front == -1) {
        printf("Underflow\n");
    } else {
        int i = front;
        while (1) {
            printf("%d\n", queue[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % 5;
        }
    }
}

int main() {
    int ch, item;
    while (1) {
        printf("\n------ Deque Program ------\n\n");
        printf("Press 1 to Enqueue from front\n");
        printf("Press 2 to Enqueue from rear\n");
        printf("Press 3 to Dequeue from front\n");
        printf("Press 4 to Dequeue from rear\n");   
        printf("Press 5 to Display\n");
        printf("Press 0 to Exit\n");
        printf("--------------------------------\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to enqueue from the front: ");
                scanf("%d", &item);
                enqueue_from_front(item);
                break;

            case 2:
                printf("Enter the element to enqueue from the rear: ");
                scanf("%d", &item);
                enqueue_from_rear(item);
                break;

            case 3:
                item = dequeue_from_front();
                if (item != -1) {
                    printf("Dequeued element from front: %d\n", item);
                }
                break;

            case 4:
                item = dequeue_from_rear();
                if (item != -1) {
                    printf("Dequeued element from rear: %d\n", item);
                }
                break;

            case 5:
                display();
                break;

            case 0:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("ERROR: Invalid choice\n");
        }
    }
}
//double ended queue//