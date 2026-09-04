#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}list;
list *start;
void addatend(int);
void display();
int main(){
  start= NULL;
   display();
   addatend(2);
   addatend(15);
   addatend(200);
   addatend(1502);
   display();
    return 0;
}
void addatend(int val)
{
    list *temp ,*ptr;
    temp=(list*)malloc(sizeof(list));
    temp->data=val;
    temp->next=NULL;
    if(start==NULL)
     start=temp;
    else{
        ptr=start;
        while(ptr->next != NULL){
         ptr=ptr->next;}
        ptr->next=temp;
    }
}
void display(){
    if(start==NULL)
    printf("\n The List IS Fucking Empty");
    else{
        list*ptr;
        ptr=start;
        while(ptr!=NULL){
        printf("\n %d",ptr->data) ;
        ptr=ptr->next;
     }
    }
}