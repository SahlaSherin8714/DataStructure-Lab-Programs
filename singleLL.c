#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = header;
    header = newnode;
}

void insertAtEnd(int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL)
    {
        header = newnode;
    }
    else
    {
        struct node *ptr = header;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = newnode;
    }
}

void insertAtAny(int key, int item)
{
    struct node *ptr = header;
    while (ptr != NULL && ptr->data != key)
        ptr = ptr->link;

    if (ptr == NULL)
    {
        printf("Key not found, insertion not possible\n");
    }
    else
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = item;
        newnode->link = ptr->link;
        ptr->link = newnode;
    }
}

void deleteAtFront()
{
    if (header == NULL)
        printf("Empty List. Deletion not possible\n");
    else
    {
        struct node *ptr = header;
        printf("Deleted element is %d\n", ptr->data);
        header = header->link;
        free(ptr);
    }
}

void deleteAtEnd()
{
    struct node *ptr, *ptr1;
    if (header == NULL)
        printf("Empty List. Deletion not possible\n");
    else if (header->link == NULL)
    {
        printf("Deleted element is %d\n", header->data);
        free(header);
        header = NULL;
    }
    else
    {
        ptr = header;
        while (ptr->link != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->link;
        }
        ptr1->link = NULL;
        printf("Deleted element is %d\n", ptr->data);
        free(ptr);
    }
}


void search(int key)
{
    struct node *ptr = header;
    int position = 1;

    if (ptr == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            printf("Element %d found at position %d\n", key, position);
            return;
        }
        ptr = ptr->link;
        position++;
    }
    printf("Element %d not found in the list\n", key);
}


void deleteAtAny(int key)
{
    struct node *ptr = header;
    struct node *prev = NULL;

    if (header == NULL)
    {
        printf("Empty List. Deletion not possible\n");
        return;
    }

    // If the node to be deleted is the first node
    if (header->data == key)
    {
        struct node *temp = header;
        printf("Deleted element is %d\n", temp->data);
        header = header->link;
        free(temp);
        return;
    }

    // Traverse using two pointers
    while (ptr != NULL && ptr->data != key)
    {
        prev = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL)
    {
        printf("Element %d not found. Deletion not possible\n", key);
    }
    else
    {
        prev->link = ptr->link;
        printf("Deleted element is %d\n", ptr->data);
        free(ptr);
    }
}

void traverseList()
{
    struct node *ptr = header;
    if (ptr == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Linked list elements:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

int main()
{
    int choice, item, key;

    do
    {
        printf("\n1. Insert At Front 2. Insert At End  3. Insert After Key\n");
        printf("4. Delete At Front  5. Delete At End  6. Delete Specific Element\n");
        printf("7. Search Element\n8. Traverse\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter item: ");
            scanf("%d", &item);
            insertAtFront(item);
            break;

        case 2:
            printf("Enter item: ");
            scanf("%d", &item);
            insertAtEnd(item);
            break;

        case 3:
            printf("Enter key after which to insert: ");
            scanf("%d", &key);
            printf("Enter item: ");
            scanf("%d", &item);
            insertAtAny(key, item);
            break;

        case 4:
            deleteAtFront();
            break;

        case 5:
            deleteAtEnd();
            break;

        case 6:
            printf("Enter element to delete: ");
            scanf("%d", &key);
            deleteAtAny(key);
            break;

        case 7:
            printf("Enter element to search: ");
            scanf("%d", &key);
            search(key);
            break;

        case 8:
            traverseList();
            break;

        case 9:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice, please try again.\n");
            break;
        }

    } while (1);

    return 0;
}

