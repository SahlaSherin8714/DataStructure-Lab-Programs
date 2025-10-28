#include <stdio.h>
#include <stdlib.h>

// Structure definition for a node in a linked list
struct node {
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = header;
    header = newnode;
   
}

void insertAtEnd(int item) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL) {
        header = newnode;
    } 
    else {
        struct node *ptr = header;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = newnode;
    }
}

void insertAtAny(int item,int key){
	struct node *ptr,*ptr1;
	while()
	{
		if 
	}

}

void traversal() {
    struct node *ptr = header;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

int main() {
    insertAtFront(10);
    insertAtFront(20);
    insertAtFront(30);
    insertAtFront(40);

    insertAtEnd(50);
    insertAtEnd(60);

    printf("Datas:\n");
    traversal();
    return 0;
}

