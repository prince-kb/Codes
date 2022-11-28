#include<iostream>
using namespace std;
int getLength(char a[]){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}
int reverse_check_alphabets_only(char a[],int len){
    int s=0,e=len-1;
    while(s<=e){
        if(a[s++]!=a[e--])
            return 0;
        else s++,e--;
    }
    return 1;
}
auto smallarize(char a[],int len){
    int i=0;
    while(i<len){
    if(a[i]>='A' && a[i]<='Z')
        a[i]=a[i]-'A'+'a';
        i+=1;
    }
}
bool palindrome_for_mixed(char a[],int len){
    int s=0,e=len-1;
    while(s<=e){
        cout<<a[s]<<" "<<a[e]<<endl;
        if(a[s]<'a' || a[s]>'z')
            s+=1;
        else if(a[e]<'a' || a[e]>'z')
            e-=1;
        else if(a[s]!=a[e])
        return 0;
        else {s++,e--;}
    }
    return 1;
}

int main(){
char a[25];
cout<< "Enter the string" << endl;
cin>>a;
int len=getLength(a);
// cout<<"Length: "<<len;
// cout<<reverse_check_alphabets_only(a,len);
smallarize(a,len);
cout<<a<<endl;
cout<<palindrome_for_mixed(a,len);
}