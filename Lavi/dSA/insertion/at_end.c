#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
//In C, when you pass a pointer (like struct Node* head) to a function, it is passed by value. This means 
//that any changes to the pointer itself (not the data it points to) inside the function are local to that function. To modify the actual pointer (like updating the head of the linked list), you need to pass its address (a pointer to the pointer). because address of head is a pointer to another pointer head


void insertAtEnd(struct Node** head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // If struct Node requires 16 bytes, malloc will reserve 16 bytes in memory.
    //The return value of malloc is a void* (a generic pointer). This is why we need to cast it into the specific type we need (explained next).
    //(struct Node*):
    //This typecasts the generic pointer (void*) returned by malloc into a struct Node* (a pointer to a struct Node).
    //A void* pointer can store the address of any data type (e.g., int, float, struct, etc.).
    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link the new node to the end
    temp->next = newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n"); // Indicate the end of the list
}

int main() {
    struct Node* head = NULL; // Initialize the linked list as empty

    // Insert nodes into the linked list
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    // Display the linked list
    printf("The linked list after inserting nodes:\n");
    displayList(head);

    return 0;
}
