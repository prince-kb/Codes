#include <stdio.h>
#include <stdlib.h>
int front=-1,rear=-1;
#define MAX 5
#define TRUE 1
int queue[MAX];
void insert(void){
    if (rear==MAX-1)
        printf("QUEUE OVERFLOW\n");
    else{
        if (front==-1)
            front=0;
        int item;
    printf("Enter the element to push\n");
    scanf("%d",&item);
    rear++;
    queue[rear]=item;
}}
void delete(void){
    if (front==-1){
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    
    else{
        printf("Deleted item is %d\n",queue[front]);
        if (front==0&& rear==0){
        rear=-1;
        front=-1;
    }
        if (front==rear && front==MAX-1){
            front=-1;
            rear=-1;
        }
        else front++;
        }}
void peep(){
    if (front==-1){
        for (int i = 0; i < MAX; i++)
            printf("||  ");
    }
    else{
        for (int i = 0; i < front; i++)
            printf("#  ");
        for (int i = front; i <= rear; i++)
            printf("%d  ",queue[i]);
        for (int i = rear+1; i < MAX; i++)
            printf("#  ");
    }}
int main(){
    int a;
    while(TRUE){
printf("\nMENU\n1>INSERT\t 2>DELETE \t 3>PEEP\t 4>EXIT: ");
scanf("%d",&a);
switch(a){
    case 1: 
    insert();
    break;
    case 2:
    delete();
    break;
    case 3:
    peep();
    break;
    default:
    printf("EXITTING...THANK YOU\n");
    exit(0);
}}
return 0;
}