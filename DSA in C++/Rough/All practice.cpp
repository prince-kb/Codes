//STACK
/*
 #include<iostream>
using namespace std;
#define MAX 4
int arr[20],front=-1,rear=-1;
void push(){
    if(rear==MAX-1){
    cout<<"STACK OVERFLOW"<<endl;
    return;
    }
    else if(rear == -1){
        front=0,rear=0;
    cout<<"Enter the element: ";
    cin>>arr[rear];
    }
    else {
    rear+=1;
    cout<<"Enter the element: ";
    cin>>arr[rear];
    }
}
void pop(){
if(rear==-1){
    cout<<"STACK UNDERFLOW"<<endl;
    return;
}
else cout<<"Popped element is "<<arr[rear]<<endl;
rear-=1;
if(rear==-1)
front=-1;
}
void peep(){
for(int i=rear;i>=0;i--)
cout<<arr[i]<<endl;
for(int i=MAX-1;i>=rear+1;i--)
cout<<"--"<<endl;
}
int main(){
    while(1){
int a;
cout<< "STACK MENU" << endl;
cout<< "1> PUSH 2> POP 3> PEEP 4> EXIT" << endl;
cout<< "Enter your choice:" ;
cin>>a;
switch(a){
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: peep();
    break;
    default: exit(0);
}
    }
} */

//QUEUE
/* 
#include<iostream>
using namespace std;
#define MAX 5
int front = -1,rear=-1,arr[MAX];
void push(){
if(rear==MAX-1){
cout<<"STACK OVERFLOW"<<endl;
return;
}
if(front==-1)
    front=0;
rear+=1;
cout<<"Enter the element to push: ";
cin>>arr[rear];
}

void pop(){
    if(front==-1 ){
        cout<<"STACK UNDERFLOW"<<endl;
        return;
    }
    else {
        cout<<"Popped element is "<<arr[front]<<endl;
        if(front == rear)
        front = -1,rear=-1;
        else front+=1;
    }}

void peep(){
for(int i=MAX-1;i>rear;i--)
cout<<"--"<<endl;
if(front!=-1){
for(int i=rear;i>=front;i--)
cout<<arr[i]<<endl;
}
for(int i=front-1;i>=0;i--)
cout<<"--"<<endl;
}
int main(){
    while(1){
int a;
cout<< "QUEUE MENU" << endl;
cout<< "1>PUSH 2>POP 3>PEEP 4>EXIT" << endl;
cout<< "Enter your choice: ";
cin>>a;
switch(a){
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: peep();
    break;
    default:
    cout<<"EXITTING";
    exit(0);
}
    }
} */

//CIRCULAR QUEUE
/* 
#include<iostream>
using namespace std;
#define MAX 4
#define TRUE 4
int arr[MAX],front=-1,rear=-1;
void push(){
    if(front==0 && rear==MAX-1 || front == rear+1){
        cout<<"CIRCULAR QUEUE OVERFLOW"<<endl;
        return;
    }
    if(front==-1)
    front=0,rear=0;
    else if(rear==MAX-1)
    rear=0;
    else rear+=1;
    cout<<"Enter the element: ";
    cin>>arr[rear];
}

void pop(){
    if(front == -1){
    cout<<"CIRCULAR QUEUE UNDERFLOW"<<endl;
    return;
    }
    cout<<"Popped element is "<<arr[front]<<endl;
    if(front == rear)
    front=-1,rear=-1;
    else if (front == MAX-1)
    front = 0;
    else front+=1;
    
}
void peep(){
    cout<<"front,rear= "<<front<<" "<<rear<<endl;
    if(front>rear){
        for(int i=front;i<MAX;i++)
        cout<<arr[i]<<endl;
        for(int i=0;i<=rear;i++)
        cout<<arr[i]<<endl;
        for(int i=rear+1;i<front;i++)
        cout<<"--"<<endl;
    }
    else {
        for(int i=front-1;i>=0;i--)
        cout<<"--"<<endl;
        if(rear!=-1)
        for(int i=rear;i>=front;i--)
        cout<<arr[i]<<endl;
        for(int i=rear+1;i<MAX;i++)
        cout<<"--"<<endl;
}
}
int main(){
int a;
while(TRUE){
cout<< "\nCIRCULAR QUEUE MENU" << endl;
cout<< "1>PUSH 2>POP 3>PEEP Default> EXIT\nEnter your choice: ";
cin>>a;
switch(a){
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: peep();
    break;
    default: cout<<"EXITTING>>>";
}
}

} */

//LINKED LIST
/* 
#include <iostream>
using namespace std;
#define TRUE 3
    struct node { 
        int data;
        struct node *next;
    };
    struct node *start;
    int num;
void insert_head(int item){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->next = start,p->data=item;
    start=p;
}

void insert_end(int item){
    struct node *p,*q;
    p=start;
    while(p->next!=NULL){
        p=p->next;
    }
    q=(struct node*)malloc(sizeof(struct node));
    p->next=q;
    q->next=NULL,q->data=item;
}

void insert_pos(int pos,int item){
    if(pos<1 || pos>num+1){
        cout<<"Wrong position"<<endl;
        return;
    }
if(pos==1)
insert_head(item);
else if(pos == num+1)
insert_end(item);
else {
    struct node *p=start,*q;
    int i=1;
    while(i<pos-1){
        p=p->next,i+=1;
    }

    q=(struct node*)malloc(sizeof(struct node));
    q->data=item;
    q->next=p->next,p->next=q;
}
}
void erase_head(){
struct node*p=start;
cout<<start->data<<" deleted"<<endl;
start=p->next;
free(p);
}

void erase_end(){
    struct node*p=start,*q;
while(p->next->next!=NULL){
    p=p->next;
}
    cout<<p->next->data<<" deleted"<<endl;
    q=p->next;
    p->next=NULL;
    free(q);
}

void erase_pos(int pos){
    if(pos<1 || pos>num){
        cout<<"Invalid position"<<endl;
        return;
    }
    if(pos==1)
    erase_head();
    else if(pos==num)
    erase_end();
    else {
    struct node *p=start,*q;
    int i=1;
    while(i<pos-1){
        p=p->next;
        i++;
    }
    cout<<p->next->data<<" deleted"<<endl;
    q=p->next;
    p->next=p->next->next;
    free(q);
    }
}

void erase_item(int item){
    int c=0;
    struct node *p=start,*q;
    if(p->data==item){
        erase_head();
        return;
    }
    while(p!=NULL){
        p=p->next;
        if(p->next->data==item){
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"Item not found"<<endl;
        return;
    }
    else {
        if(p->next->next==NULL){
            erase_end();
        }
        else {
        cout<<p->next->data<<" deleted"<<endl;
        q=p->next;
        p->next=p->next->next;
        free(q);
    }
    }
}

void sort_nd(){
    for(int i=0;i<=num-2;i++){
    struct node *p=start,*q=start;
        int k=0,l=0;
    for(int j=i+1;j<=num-1;j++){
            int a,b;
        while(k<i){
            p=p->next;
            k++;
        }
        
        while(l<j){
            q=q->next;
            l++;
        }
        
        if(p->data>q->data){
            int temp=p->data;
            p->data=q->data;
            q->data=temp;
            }

        // cout<<p->data<<" "<<q->data<<endl;
        }
    }
}
void sort_na(){
    for(int i=0;i<=num-2;i++){
    struct node *p=start,*q=start;
        int k=0,l=0;
    for(int j=i+1;j<=num-1;j++){
            int a,b;
        while(k<i){
            p=p->next;
            k++;
        }
        
        while(l<j){
            q=q->next;
            l++;
        }
        
        if(p->data<q->data){
            int temp=p->data;
            p->data=q->data;
            q->data=temp;
            }

        // cout<<p->data<<" "<<q->data<<endl;
        }
    }
}

int item_pos(int pos){
struct node *p=start;
int i=1;
while(i<pos){
    p=p->next;
    i++;
}
return p->data;
}

int count(){
    int num=1;
    struct node *p=start;
    while(p->next!=NULL){
        p=p->next;
        num++;
    }
    return num;
}

void print_ll(){
    struct node *p;
    cout<<"| "<<start->data<<" |";
    p=start;
    while(p->next!=NULL){
        p=p->next;
        cout<<"--> | "<<p->data<<" |";
    }
}

int search(int item){
    int i=1,c=0;
    struct node*p=start;
    while(p!=NULL){
        if(p->data==item){
            c=1;
            break;
        }
        p=p->next;
        i++;
    }
    if(c==1){
        cout<<item<<" found at position "<<i<<endl;
        return i;
    }
    else cout<<item<<" not found"<<endl;
    return 0;
}
int main(){
    int a,item,pos;
    cout<<"Welcome to Prince's Linked list world"<<endl;
    cout<<"Enter first data: ";
    cin>>item;
    start=(struct node*)malloc(sizeof(struct node));
    start->data=item;
    start->next=NULL;
    insert_end(1);
    insert_end(20);
    insert_end(3);
    insert_end(40);
    insert_end(5);
    while(TRUE){
        
                num=count();
    cout<<"\n1> LINKED LIST MENU"<<endl;
    cout<<"1> INSERT MENU\t2> DELETE MENU\t3> SORTING MENU \t4> LINKED LIST\t5> SEARCH\t6> COUNT\t7>ITEM AT POSITION\t8>EXIT"<<endl;
    cout<<"Enter your choice: ";
    cin>>a;
    switch(a){
        case 1: cout<<"1>Insert at head 2>Insert at end 3>Insert at position"<<endl;
                cout<<"Enter your choice: ";
                cin>>a;
                cout<<"Enter item to insert: ";
                cin>>item;
                switch(a){
                    case 1: insert_head(item);                    
                    break;
                    case 2: insert_end(item);
                    break;
                    case 3: 
                    cout<<"Enter position to insert: ";
                    cin>>pos;
                    insert_pos(pos,item);
                    break;
                    default: cout<<"Wrong choice, TRY AGAIN"<<endl;
                    break;
                }
        break;
        
        case 2: 
        if(num==1){
            cout<<"Deletion not possible"<<endl;
            break;
        }
        cout<<"1>Delete at head 2>Delete at end 3>Delete at position 4>Delete item"<<endl;
                cout<<"Enter your choice: ";
                cin>>a;
                
                switch(a){
                    case 1: erase_head();
                    break;
                    case 2: erase_end();
                    break;
                    case 3: 
                            cout<<"Enter position to delete item: ";
                            cin>>pos;
                            erase_pos(pos);
                    break;
                    case 4: cout<<"Enter item to delete: ";
                        cin>>item;
                        erase_item(item);
                    break;
                    default: cout<<"Wrong choice, TRY AGAIN"<<endl;
                    break;
                }
        break;
        
        case 3: cout<<"1>Non-decreasing order 2>Non-ascending order"<<endl;
        cout<<"Enter your choice: ";
        cin>>a;
        switch(a){
            case 1:sort_nd();
            break;
            case 2:sort_na();
            break;
            default: cout<<"Wrong Input,TRY AGAIN"<<endl;
        }
        break;

        case 4: print_ll(); 
        break;
        
        case 5: cout<<"Enter item to search: ";
        cin>>item;
        search(item);
        break;
        case 6: cout<<"Number of nodes = "<<num<<endl;
        break;
        case 7: cout<<"Enter position to find item: ";
        cin>>pos;
        item_pos(pos);
        break;
        case 8: 
        cout<<"Exitting now >>>>>>>>>>>>>"<<endl;
        exit(0);

        default: cout<<"Wrong choice, TRY AGAIN"<<endl;
        break;
    }
    }
} */

//Douly linked list

#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    cout<<endl;
    for(int i=0;i<a;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void bubble_sort(int arr[],int a){
    for(int i=0;i<a-1;i++){
        for(int j=0;i<a-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

void selection_sort(int arr[],int a){
for(int i=1;i<a;i++){
    int temp=arr[i];
    for(int j=i-1;j>0;j--){
        if(temp>arr[j]){
            
        }
    }
}
}

void insertion_sort(int arr[],int a){
    int j=0;
    for(int i=0;i<a;i++){
        j=a-i-1;
    int temp=arr[j];
        for(;j>0;j--){
            if(arr[j]<arr[j-1]){
                arr[j-1];
            }
        }
    }
}
int main(){
int a,arr[100];
cout<<"Enter number of elements: ";
cin>>a;
cout<<"Enter the elements of the array"<<endl;
for (int i = 0; i < a; i++)
    cin>>arr[i];
printArray(arr,a);
//bubble_sort(arr,a);
selection_sort(arr,a);
printArray(arr,a);
}