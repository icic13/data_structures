#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

void printList(struct node *pointer){
    while(pointer!=NULL){
        printf(" %d \n",pointer->data);
        pointer = pointer->next;
    }

}
int main(){
        struct node *first = NULL, *second = NULL, *third = NULL;
        first = (struct node*)malloc(sizeof(struct node));
        second = (struct node*)malloc(sizeof(struct node));
        third = (struct node*)malloc(sizeof(struct node));

        first->data = 93;
        first->next = second;

        second->data = 32;
        second->next = third;

        third->data = 322;
        third->next = NULL;

        printList(first);



}
