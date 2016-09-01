
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;

};

void push(struct node** head_ref,int data){
    //new node
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;

}

void print_revserse(struct node* head){

    if(head==NULL)
        return;

    print_revserse(head->next);
    printf(" %d \n",head->data);


}
int main(){
    struct node *head = NULL;
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);

    print_revserse(head);
    return 0;

}
