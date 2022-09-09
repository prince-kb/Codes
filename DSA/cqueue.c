#include <stdio.h>
#include <stdlib.h>
#define MAX 4
#define TRUE 1
int cqueue[MAX],front=-1,rear=-1;
void insert(void){
if (rear==MAX-1&&front==0 || front==rear+1){
    printf("QUEUE OVERFLOW\n");
    return;
}
if (rear==-1)
rear=0,front=0;
else if (rear==MAX-1)
    rear=0;
else rear++;
printf("Enter the element\n");
scanf("%d",&cqueue[rear]);
return;
}
void delete(void){
    if (front == -1){
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    printf("Deleted item is %d",cqueue[front]);
    if (front==rear)
        front=-1,rear=-1;
    else if(front==MAX-1)
        front=0;
    else front++;
}
void peep(void){
    if (front==-1){
        for (int i = 0; i < MAX; i++)
            printf("--\n");
    }
    else if (front<=rear)
    {
        for (int i = 0; i < front; i++)
            printf("--\n");
        for (int i = front; i <= rear; i++)
            printf("%d\n",cqueue[i]);        
        for (int i = rear+1; i < MAX; i++)
            printf("--\n");
    }
    else{
        for (int i = front; i < MAX; i++)
            printf("%d\n",cqueue[i]);
        for (int i = 0; i <= rear; i++)
            printf("%d\n",cqueue[i]);
        for (int i = rear+1; i < front; i++)
            printf("--\n");
    }
}
int main(){
    while(TRUE){
        int a;
printf("\n1.INSERT \t 2. DELETE \t 3. PEEP \t 4.EXIT : ");
    scanf("%d",&a);
    switch(a){
        case 1: insert();
        break;
        case 2: delete();
        break;
        case 3: peep();
        break;
        default:
        printf("Exitting...");
        exit(0);
    }
    }
return 0;
}