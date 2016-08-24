#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;

};
void push(struct node** head_ref, int new_data)
{

//Allocate new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_data;
    new_node->next = *head_ref;//new_node next to head ref
    *head_ref = new_node;//set pointer of head to new node

}

void insert_after(struct node* prev_node,int new_data)
{

    if(prev_node==NULL)
    {
        printf("Previous node cannot be null\n");
    }

    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(struct node **head_ref,int new_data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    struct node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;
    if(*head_ref==NULL){
        *head_ref = new_node;
        return;
    }

    while(last->next!=NULL)
        last = last->next;

    last->next = new_node;
    return ;
}
void print_list(struct node *node){
while(node!=NULL){
    printf("%d \n",node->data);
    node = node->next;
}
}
int main()
{

    struct node* head = NULL;
    append(&head,6);
    print_list(head);
    push(&head,7);
    push(&head,2);
    append(&head,42);
    insert_after(head->next,8);
    print_list(head);
    return 0;



}
