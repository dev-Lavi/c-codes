#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;             // Data part of the node
    struct Node* next;    // Pointer to the next node
};

// Function to display elements of the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }

    struct Node* temp = head; // Temporary pointer to traverse the list
    while (temp != NULL) {
        printf("%d -> ", temp->data); // Print the data part of the current node
        temp = temp->next;           // Move to the next node
    }
    printf("NULL\n"); // Indicate the end of the list
}

int main() {
    // Step 1: Create nodes
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Step 2: Allocate memory for nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Step 3: Assign data and link the nodes
    head->data = 10;       // Assign data to the first node
    head->next = second;   // Link the first node to the second node

    second->data = 20;     // Assign data to the second node
    second->next = third;  // Link the second node to the third node

    third->data = 30;      // Assign data to the third node
    third->next = NULL;    // End the list by making the next pointer NULL

    // Step 4: Display the linked list
    printf("The elements of the linked list are:\n");
    displayList(head);

    // Step 5: Free allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}
