#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stackArr[MAX], topArr = -1;

void pushArr(int val) {
    if (topArr == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stackArr[++topArr] = val;
    printf("%d pushed to array stack\n", val);
}

int popArr() {
    if (topArr == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stackArr[topArr--];
}

int peekArr() {
    if (topArr == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stackArr[topArr];
}

void displayArrStack() {
    int i;
    if (topArr == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Array Stack: ");
    for (i = topArr; i >= 0; i--)
        printf("%d ", stackArr[i]);
    printf("\n");
}

struct StackNode {
    int data;
    struct StackNode *next;
};

struct StackNode *stackTop = NULL;

void pushLL(int val) {
    struct StackNode *newNode = (struct StackNode *)malloc(sizeof(struct StackNode));
    newNode->data = val;
    newNode->next = stackTop;
    stackTop = newNode;
    printf("%d pushed to linked list stack\n", val);
}

int popLL() {
    if (stackTop == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    struct StackNode *temp = stackTop;
    int val = temp->data;
    stackTop = stackTop->next;
    free(temp);
    return val;
}

int peekLL() {
    if (stackTop == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return stackTop->data;
}

void displayLLStack() {
    struct StackNode *temp = stackTop;
    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Linked List Stack: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int queueArr[MAX], front = -1, rear = -1;

void enqueueArr(int val) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queueArr[++rear] = val;
    printf("%d enqueued to array queue\n", val);
}

int dequeueArr() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    return queueArr[front++];
}

void displayArrQueue() {
    int i;
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Array Queue: ");
    for (i = front; i <= rear; i++)
        printf("%d ", queueArr[i]);
    printf("\n");
}

struct QueueNode {
    int data;
    struct QueueNode *next;
};

struct QueueNode *qFront = NULL, *qRear = NULL;

void enqueueLL(int val) {
    struct QueueNode *newNode = (struct QueueNode *)malloc(sizeof(struct QueueNode));
    newNode->data = val;
    newNode->next = NULL;
    if (qRear == NULL) {
        qFront = qRear = newNode;
    } else {
        qRear->next = newNode;
        qRear = newNode;
    }
    printf("%d enqueued to linked list queue\n", val);
}

int dequeueLL() {
    if (qFront == NULL) {
        printf("Queue Underflow\n");
        return -1;
    }
    struct QueueNode *temp = qFront;
    int val = temp->data;
    qFront = qFront->next;
    if (qFront == NULL) qRear = NULL;
    free(temp);
    return val;
}

void displayLLQueue() {
    struct QueueNode *temp = qFront;
    if (temp == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Linked List Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, val, ch;

    while (1) {
        printf("\n===== Stack & Queue Operations =====\n");
        printf("1. Stack using Array\n");
        printf("2. Stack using Linked List\n");
        printf("3. Queue using Array\n");
        printf("4. Queue using Linked List\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Stack (Array) ---\n");
                printf("1.Push  2.Pop  3.Peek  4.Display\n");
                printf("Enter: ");
                scanf("%d", &ch);
                if (ch == 1) { printf("Enter value: "); scanf("%d", &val); pushArr(val); }
                else if (ch == 2) printf("Popped: %d\n", popArr());
                else if (ch == 3) printf("Top: %d\n", peekArr());
                else displayArrStack();
                break;
            case 2:
                printf("\n--- Stack (Linked List) ---\n");
                printf("1.Push  2.Pop  3.Peek  4.Display\n");
                printf("Enter: ");
                scanf("%d", &ch);
                if (ch == 1) { printf("Enter value: "); scanf("%d", &val); pushLL(val); }
                else if (ch == 2) printf("Popped: %d\n", popLL());
                else if (ch == 3) printf("Top: %d\n", peekLL());
                else displayLLStack();
                break;
            case 3:
                printf("\n--- Queue (Array) ---\n");
                printf("1.Enqueue  2.Dequeue  3.Display\n");
                printf("Enter: ");
                scanf("%d", &ch);
                if (ch == 1) { printf("Enter value: "); scanf("%d", &val); enqueueArr(val); }
                else if (ch == 2) printf("Dequeued: %d\n", dequeueArr());
                else displayArrQueue();
                break;
            case 4:
                printf("\n--- Queue (Linked List) ---\n");
                printf("1.Enqueue  2.Dequeue  3.Display\n");
                printf("Enter: ");
                scanf("%d", &ch);
                if (ch == 1) { printf("Enter value: "); scanf("%d", &val); enqueueLL(val); }
                else if (ch == 2) printf("Dequeued: %d\n", dequeueLL());
                else displayLLQueue();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
