#include<stdlib.h>
#include<stdio.h>
struct Node {
    int data;
    struct Node* next; //to create a pointer to node
};
struct Node* head;//globally defined
void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    //malloc returns a pointer to the starting address of the memory block
    // created a node temp pointing
    // typecast req as malloc returns a void pointer 
    // but we need pointer to node
    temp->data = x; //data stored is x
    //alternate   (temp).data = x;
    temp->next = head;
    head = temp; //now head points to temp
}
void print(){
    struct Node* temp = head; //local variable
    printf("list is: ");
    while(temp != NULL){
        printf(" %d",temp->data);
        temp= temp->next;
    }
    printf("\n");
}
int main() {
    head = NULL; //head points nowhere
    printf("how many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number \n");
        scanf("%d",&x);
        Insert(x);
        print();
    }
}