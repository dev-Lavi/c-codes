#include <stdio.h>
#include <stdlib.h>

int main()
{

    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i,arr[6],a,j;
    printf("enter your elements of array\n");
    scanf("%d",&a);
    printf("enter your elements of array\n");
    for(int j=0;j<a;j++){
        scanf("%d",&arr[j]);
    }
    printf("your elements are\n");
    for(j=0;j<a;j++){
        printf("%d\n",arr[j]);
    }
    
    // Get the number of elements for the array
    printf("Enter number of elements to insert\n");
    scanf("%d",&n);
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            printf("enter new element\n");
            scanf("%d",& ptr[i]);
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
                   for(j=0;j<a;j++){
               printf("%d, ", arr[j]);
            }
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }

    return 0;
}
