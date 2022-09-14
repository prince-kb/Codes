#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 4
#define TRUE 1
int rear=-1,front=-1, cqueue[MAX];
void push(){
    if (rear==MAX-1 && front==0 || rear==front-1){
        printf("CIRCULAR QUEUE OVERFLOW\n");
        return;
    }
    int item;
    printf("Enter the item to push: ");
    scanf("%d",&item);
    if (rear==-1)
        front++,rear++;
    else if(rear==MAX-1)
        rear=0;
    else rear++;
    cqueue[rear]=item;
}
void pop(){
if (front==-1 && rear==-1){
    printf("CIRCULAR QUEUE OVERFLOW\n");
    return;
}
if(front==rear){
    front=-1,rear=-1;
}
if (front==MAX-1)
        front=0;
else front++;
}
void peep(){
if (front<=rear){
    for (int i=MAX-1;i>rear;i--)
    printf("#\n");
    for(int i=rear;i>=front;i--)
    printf("%d\n",cqueue[i]);
    for(int i=front-1;i>0;i--)
    printf("#\n");
}
else {
    for (int i = front; i < MAX; i++)
        printf("%d\n",cqueue[i]);
    for(int i= 0;i<=rear;i++)
        printf("%d\n",cqueue[i]);
    for(int i=rear+1;i<front;i++)
        printf("#\n");
}
}
int main(){
    while(TRUE){
    int a;
    printf("\t CIRCULAR QUEUE MENU\n 1> PUSH 2> POP 3> PEEP 4> EXIT\n");
printf("\nEnter your choice: ");
scanf("%d",&a);
switch(a){
    case 1: push();break;
    case 2: pop();break;
    case 3: peep();break;
    case 4: printf("EXITTING");exit(0);break;
    default: printf("Wrong Input\n");break;
}
    }
return 0;
}