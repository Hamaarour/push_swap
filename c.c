#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to make the last element the first element
void makeLastFirst(struct Node** head) {
    // check if the list is empty or has only one element
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    struct Node* last = *head;
    struct Node* secondLast = NULL;
    // find the last node
    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    //update the next pointer of the second last node to point to null
    secondLast->next = NULL;
    //update the next pointer of last node to point to head
    last->next = *head;
    //update the head pointer to point to last node
    *head = last;
}

int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    printf("Original list: ");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    makeLastFirst(&head);

    printf("\nModified list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
