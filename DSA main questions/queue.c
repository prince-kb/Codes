#include <stdio.h>
#include <stdlib.h>
#define MAX 4
#define TRUE 1
int queue[MAX],front=-1,rear=-1;
void insert(void){
if (rear==MAX-1){
    printf("QUEUE OVERFLOW\n");
    return;
}
if (rear==-1)
    rear++,front++;
else rear++;
printf("Enter the element\n");
scanf("%d",&queue[rear]);
return;
}
void delete(void){
    if (front == -1){
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    printf("Deleted item is %d",queue[front]);
    if (front==rear)
        front=-1,rear=-1;
    else front++;
}
void peep(void){
    for (int i = 0; i < front; i++)
        printf("--\n");
    if (front != -1){
        for (int i = front; i <= rear; i++)
            printf("%d\n",queue[i]);  
    }
    for (int i = rear+1; i < MAX; i++)
        printf("--\n");
    
}
int main(){
    while(TRUE){
        int a;
printf("\n1.INSERT \t 2. DELETE \t 3. PEEP \t 4.EXIT : ");
printf("\nEnter your choice: ");
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