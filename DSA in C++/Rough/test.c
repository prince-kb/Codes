#include <stdio.h>
void bubble_sort(int[],int);
void selection_sort(int[],int);
void insertion_sort(int[],int);
void printArray(int[],int);
void swap(int*,int*);
int binary_search(int[],int);

int main(){
    int a,arr[]={1,33,4,2,8,-9,6,-4,3,16},n=10;
printf("\n1>Bubble sort 2>Selection sort 3>Insertion sort \n");
printf("Enter your choice: ");
scanf("%d",&a);
// swap(&arr[1],&arr[2]);
switch(a){
    case 1: bubble_sort(arr,n);
            break;
    case 2: selection_sort(arr,n);
            break;
    case 3: insertion_sort(arr,n);
            break;
    default: printf("Wrong input");            
}
printArray(arr,n);
binary_search(arr,n);
return 0;
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int arr[],int n){
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}

void bubble_sort(int arr[],int n){
    printf("After Bubble sorting: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }}}

void selection_sort(int arr[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        k=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[k])
            k=j;
        }
        swap(&arr[i],&arr[k]);
    }}

void insertion_sort(int arr[],int n){
    int i=1,j,k;
    while(i<n){
        j=i-1;k=arr[i];
        while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
        i++;
    }}

int binary_search(int arr[],int n){
    int a=0,b=n-1,m,item;
    printf("Enter the element to search: ");
    scanf("%d",&item);
    while(a<=b){
        m=b-((b-a)/2);
        // printf("%d ",m);
        if(arr[m]==item){
            printf("%d\n",m);
            return 0;
        }
        else if(arr[m]>item)
            b=m-1;
        else a=m;
    }
    printf("Not found");
    return 0;
    
}
