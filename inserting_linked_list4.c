#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void push(struct node** head_ref, int data)
{
    //new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void append(struct node** head_ref,int new_data)
{
//new node for new data
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
//last node for storing head reference for traverse
    struct node *last = *head_ref;

    new_node->data = new_data;//keeps data to  new node
    new_node->next = NULL;//null because the new node will be at the last

    if(*head_ref==NULL)
    {
        *head_ref = new_node;
        return;
    }

    while(last->next!=NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;

}

void insert_after(struct node* prev_node, int new_data)
{
    if(prev_node==NULL){
        printf("The given previous node cannot be null");
        return;
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;

    new_node->next = prev_node->next;
    prev_node->next = new_node;





}
void print_list(struct node *pointer)
{
    while(pointer!=NULL)
    {
        printf(" %d \n",pointer->data);
        pointer  = pointer->next;
    }

}


int main()
{
    //create an empty linked list
    struct node* head = NULL;
    append(&head,6);

    push(&head,7);

    push(&head,1);
    append(&head,4);
    insert_after(head->next,8);
    print_list(head);


}
