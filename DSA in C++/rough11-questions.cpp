//Reversal of an array
/* 
#include<iostream>
#include<vector>
using namespace std;
void print(vector <int> arr){
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
vector <int> arr;
cout<< "Enter the elements of the vector" << endl;
    int a;
    while(1){
        if(a==-1)
        break;
        cin>>a;
        arr.push_back(a);
    }
print(arr);
int s=0,e=arr.size()-1;
while(s<=e){
    swap(arr[s],arr[e]);
    s++,e--;
}
cout<<"After reversing"<<endl;
print (arr);
} */

//Merge two sorted arrays //Not completed
/* 
#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    }
void pass(int arr[],int c,int b,int a){
    for(int i=a;i>b;i--){
        arr[i]=arr[i-1];
    }
    arr[b]=c;
}
void merge(int a1[],int a,int a2[],int b){
    int i=0,j=0;
    while(i<a){
        if(a1[i]<a2[j])
            i++;

        else pass(a1,a2[j++],i++,a);
    }
    if(j<b)
        while(j<b){
        a1[i++]=a2[j++];
        }
}
int main(){
    int arr1[]={1,2,4,7,0,0,0,0,0};
    int arr2[]={3,5,6,9,10};
    int a=9,b=5;
    print(arr1,a);
    print(arr2,b);
    merge(arr1,a,arr2,b);
    cout<<"After merging: "<<endl;
    print(arr1,a);
} */

//Move Zeroes to right
/* 
#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void pass(int arr[],int n,int a){
    int i;
    for(i=a;i<n-1;i++)
    arr[i]=arr[i+1];
    // cout<<a<<endl;
    arr[n-1]=0;
}
void zero(int arr[],int n){
    for (int i = 0; i < n; i++){
        if (arr[i]==0)
            pass(arr,n,i); 
            if(arr[i-1]==0 && i!=0)
            pass(arr,n,i-1);
            // print(arr,n);   
    }
}

int main(){
    int arr[]={1,3,0,2,4,0,0,8,0,9};
    int a=10;
    print(arr,a);
    zero(arr,a);
    cout<<"After changing:"<<endl;
    print(arr,a);

}
 */

//OR
/* 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void zero(int arr[],int n){
    int j=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
}}
int main(){
    int arr[]={1,0,0,0,4,2,55,6,0};
    print(arr,9);
    zero(arr,9);
    print(arr,9);
} */
