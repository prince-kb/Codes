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
int main(){
    int a,b,n,arr[50];
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    ins(arr,n);
    pArray(arr,n);
printf("1> Bubble sort 2> Insertion sort 3> Selection sort\n");
printf("\nEnter the type of sorting: ");
scanf("%d",&a);
printf("1> Ascending 2> Descending\n");
scanf("%d",&b);

return 0;
}