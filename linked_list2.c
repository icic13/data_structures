#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;


};

void print_node(struct node* list){

    while(list!=NULL){
        printf("%d\n",list->data);
        list = list->next;


    }


}
int main(){
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head =(struct node*) malloc(sizeof(struct node));
    second =(struct node*) malloc(sizeof(struct node));
    third =(struct node*) malloc(sizeof(struct node));


    head->data = 100;
    head->next  = second;
    second->data = 32;
    second->next = third;
    third -> data = 32;
    third->next = NULL;
    print_node(head);
    return 0;
}
