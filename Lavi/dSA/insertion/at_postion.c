#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at a given position
void insertAtPosition(struct Node** head, int data, int position) {
    // Step 1: Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // Step 2: If inserting at the head (position 1)
    if (position == 1) {
        newNode->next = *head;  // Link new node to current head
        *head = newNode;        // Update head to the new node
        return;
    }

    // Step 3: Traverse the list to find the (position-1)th node
    struct Node* temp = *head;
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL) { // If the position is out of bounds
            printf("Position is out of bounds.\n");
            free(newNode);
            return;
        }
        temp = temp->next;
    }

    // Step 4: Insert the new node
    newNode->next = temp->next; // Link the new node to the next node
    temp->next = newNode;       // Link the (position-1)th node to the new node
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  // Initialize the list as empty

    // Insert nodes at specific positions
    insertAtPosition(&head, 10, 1); // Insert 10 at position 1
    insertAtPosition(&head, 20, 2); // Insert 20 at position 2
    insertAtPosition(&head, 15, 2); // Insert 15 at position 2
    insertAtPosition(&head, 5, 1);  // Insert 5 at position 1

    // Display the list
    printf("Linked list after inserting nodes:\n");
    displayList(head);

    return 0;
}
