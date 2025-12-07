//WAP to create a singly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node* next;
};

struct Node* head = NULL;

void insertFirst(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = head;
head = newNode;
}

void insertLast(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if (head == NULL) {
    head = newNode;
    return;
}
struct Node* temp = head;
while (temp->next != NULL)
    temp = temp->next;
temp->next = newNode;
}

void insertAtPosition(int value, int pos) {
if (pos < 1) {
    printf("Invalid position\n");
    return;
}
if (pos == 1) {
    insertFirst(value);
    return;
}
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
struct Node* temp = head;
for (int i = 1; i < pos-1 && temp != NULL; i++)
    temp = temp->next;
if (temp == NULL) {
    printf("Position exceeds list length\n");
    return;
}
newNode->next = temp->next;
temp->next = newNode;
}

void deleteFirst() {
if (head == NULL) {
    printf("List is empty\n");
    return;
}
struct Node* temp = head;
head = head->next;
free(temp);
}

void deleteLast() {
if (head == NULL) {
    printf("List is empty\n");
    return;
}
if (head->next == NULL) {
    free(head);
    head = NULL;
    return;
}
struct Node* temp = head;
while (temp->next->next != NULL)
    temp = temp->next;
free(temp->next);
temp->next = NULL;
}

int length() {
int count = 0;
struct Node* temp = head;
while (temp != NULL) {
    count++;
    temp = temp->next;
}
return count;
}

void display() {
struct Node* temp = head;
if (temp == NULL) {
    printf("List is empty\n");
    return;
}
while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
}
printf("NULL\n");
}

int main() {
int choice, value, position;
while (1) {
    printf("\n1. Insert at first\n2. Insert at last\n3. Insert at position");
    printf("\n4. Delete from first\n5. Delete from last\n6. Display length");
    printf("\n7. Display list\n8. Exit\nEnter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            insertFirst(value);
            break;
        case 2:
            printf("Enter value: ");
            scanf("%d", &value);
            insertLast(value);
            break;
        case 3:
            printf("Enter value and position: ");
            scanf("%d %d", &value, &position);
            insertAtPosition(value, position);
            break;
        case 4:
            deleteFirst();
            break;
        case 5:
            deleteLast();
            break;
        case 6:
            printf("Length of list: %d\n", length());
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice\n");
    }
}
return 0;
}