#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
};
void push(struct node** head_ref, int new_data)
{

    struct node *new_node = (struct node*)malloc(sizeof(struct node));//declare new node


    new_node ->data = new_data;//set data for new node
    new_node->next = (*head_ref);//new node to head pointer
    *head_ref = new_node;//head pointer to new node



}

void insert_after(struct node* prev_node,int new_data)
{

    if(prev_node==NULL)//if emty return error
    {
        printf("Node is null");
        return;
    }
    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    new_node -> data = new_data;
    new_node ->next = prev_node->next;//new to old
    prev_node->next = new_node;//


}


void append(struct node** head_ref,int new_data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    struct node *last = *head_ref;

    new_node ->data = new_data;
    new_node ->next = NULL;

    if(*head_ref==NULL)
    {
        *head_ref = new_node;
        return;
    }

    while(last->next!=NULL)
        last = last->next;

    last->next = new_node;

    return;

}

void printList(struct node *node)
{
    while(node!=NULL)
    {
        printf(" %d ",node->data);
        node = node->next;


    }
}
int main()
{


    struct node* head = NULL;

    // Insert 6.  So linked list becomes 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning. So linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL
    insert_after(head->next, 8);

    printf("\n Created Linked list is: ");
    printList(head);

    return 0;
}
