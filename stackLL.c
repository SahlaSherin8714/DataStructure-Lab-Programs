#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

int counter = 0;

struct node {
    int data;
    struct node *link;
};

struct node *top = NULL;

void push(int item)
{
    if (counter == MAX_SIZE) {
        printf("Stack Overflow! Cannot push %d\n", item);
        return;
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->data = item;
    newnode->link = top;
    top = newnode;
    counter++;

    printf("Pushed %d onto the stack.\n", item);
}

void pop()
{
    if (top == NULL) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }

    struct node *ptr = top;
    printf("Popped element: %d\n", ptr->data);
    top = top->link;
    free(ptr);
    counter--;
}

void display()
{
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    struct node *temp = top;
    printf("\nStack elements (top to bottom):\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}

int main()
{
    int choice, item;

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the element to push: ");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting program...\n");
            exit(0);

        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

