#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;             // Data part of the node
    struct Node* next;    // Pointer to the next node
};

int main() {
    // Step 1: Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation was successful
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Step 2: Assign data and set the next pointer to NULL
    newNode->data = 10;  // Assign data to the node
    newNode->next = NULL; // Since it's the only node, set next to NULL

    // Step 3: Display the node data
    printf("Node created successfully.\n");
    printf("Data: %d\n", newNode->data);
    printf("Next: %p\n", newNode->next); // Print the address stored in 'next' (should be NULL)

    // Step 4: Free the memory
    free(newNode);

    return 0;
}
