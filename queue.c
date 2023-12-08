#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max];
int front = -1;
int rear = -1;

void insertq() {
    int n;
    if (rear == max - 1) {
        printf("Overflow\n");
    } else {
        printf("Enter element to insert: ");
        scanf("%d", &n);
        if (front == -1) {
            front = 0;
        }
        rear = rear + 1;
        a[rear] = n;
    }
}

void deleteq() {
    if (front == -1) {
        printf("Underflow\n");
    } else {
        printf("Deleted element: %d\n", a[front]);
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = front + 1;
        }
    }
}

void displayq() {
    int i;
    if (rear == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++) {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch;
    do {
        printf("\nMenu\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                insertq();
                break;
            case 2:
                deleteq();
                break;
            case 3:
                displayq();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid input\n");
        }
    } while (ch != 4);

    return 0;
}
