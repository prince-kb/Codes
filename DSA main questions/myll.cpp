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
}