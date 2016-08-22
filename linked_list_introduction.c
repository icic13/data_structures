#include <stdio.h>
#include <stdlib.h>
//Structure for linked list
struct node{//node structure
int data;//integer type data
struct node *next;//pointer to next node

};

void printNode(struct node *pointer){
    while(pointer!=NULL){
        printf(" %d \n",pointer->data);
        pointer =  pointer->next;
    }

}

int main(){
    //Creates three node
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    //Assign memory
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    first->data = 90;
    first->next = second;

    second->data = 83;
    second->next = third;

    third->data = 19;
    third->next = NULL;

    //Traverse node

    printNode(first);




}
