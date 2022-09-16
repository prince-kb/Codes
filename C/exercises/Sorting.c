#include <stdio.h>
void ins(int arr[],int n){
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        printf("\n");
}
void pArray(int arr[],int n){
    printf("The elements are -\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
void bsort(int arr[],int b,int n){
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }   
        }   
    }    
}
void ssort(int arr[],int b,int n){

}
void isort(int arr[],int b,int n){

}
int main(){
    int a,b,n,arr[50];
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    ins(arr,n);
    pArray(arr,n);
    here:
printf("1> Bubble sort 2> Insertion sort 3> Selection sort\n");
printf("\nEnter the type of sorting: ");
scanf("%d",&a);
printf("1> Ascending 2> Descending\n");
scanf("%d",&b);
if (a<1 || a>3 || b<1 || b>2)
{
   printf("Wrong Input,TRY AGAIN\n");
   goto here;
}

switch(a){
    case 1: bsort(arr,n,b);break;
    case 2: isort(arr,n,b);break;
    case 3: ssort(arr,n,b);break;
}
    pArray(arr,n);

return 0;
}