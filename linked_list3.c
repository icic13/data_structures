#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;

};
void print_list(struct node *pointer){

    while(pointer!=NULL){

        printf(" %d \n",pointer->data);
        pointer = pointer->next;
    }

}
int main(){

    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    first->data = 23;
    first->next = second;

    second->data = 32;
    second->next = third;

    third->data = 99;
    third->next = NULL;

    print_list(first);




}
