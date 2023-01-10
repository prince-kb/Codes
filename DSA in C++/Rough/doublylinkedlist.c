#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
void display();
void insert_beg();
void insert_end();
// void insert_pos();
// void delete_beg();
// void delete_end();
// void delete_pos();
// int search();
// int count();
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head;
void create(){
    head=(struct node *)malloc(sizeof(struct node));
    head->prev=NULL,head->next=NULL;
    printf("Enter first data: ");
    scanf("%d",&head->data);
}
int main(){
int a;
create();
while(TRUE){
printf( "\n\tDoubly Linked List MENU\n" );
printf("1>DISPLAY 2>INSERT AT BEGINNING 3>INSERT AT END 4>INSERT AT POSITION 5>DELETE BEGINNING 6>DELETE END 7>DELETE AT POSITION 8>SEARCH 9>COUNT 10>EXIT\n");
printf("Enter your choice: ");
scanf("%d",&a);

switch(a){
    case 1: display();
            break;
    case 2: insert_beg();
            break;
    case 3: insert_end();
            break;
    
    case 10: exit(0);

    default : printf("Wrong choice");
              printf("TRY AGAIN");
}}
}

//DISPLAY FUNCTION
void display(){
    struct node *p=head;
    printf("| %d | ",p->data);
    p=p->next;
    while(p!=NULL){
        printf("--> | %d |",p->data);
        p=p->next;
    }
}

//INSERTING NODE AT FIRST POSITION
void insert_beg(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->prev=NULL;
    p->next=head;
    head->prev=p;
    printf("Enter the data: ");
    scanf("%d",&p->data);
    head=p;
}

//INSERTING NODE AT LAST POSITION
void insert_end(){
    struct node *q=head,*p;
    if(q->next!=NULL){
    while(q->next!=NULL)
    q=q->next;
    }
    p=(struct node *)malloc(sizeof(struct node));
    p->next=NULL;
    printf("Enter the data: ");
    scanf("%d",&p->data);
    q->next=p;
    p->prev=q;
}


