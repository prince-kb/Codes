/* //Palindrome checker
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
 */

//Reverse a sentence
#include<iostream>
using namespace std;
void reverse_string(string &b){
    for(int i=0;i<b.length()/2;i++)
    swap(b[i],b[b.length()-1-i]);

}
void push(string &a,string c){
    for(int i=0;i<c.length();i++)
    a.push_back(c[i]);
}
string reverse(string &a,string &c){
    int i=a.length()-1;
    while(i>=0){
        string b;
        while(1){
            if(a[i]==' ' || i<0){
                i--;
            break;
            }
            else b.push_back(a[i]);
            i-=1;
        }
        reverse_string(b);
        push(c,b);
        if(i!=0)
        c.push_back(' ');
        // cout<<a<<endl;
}
return c;
}

int main(){
string a,c;
// cout<< "Enter the sentence: ";
// cin>>a;
a="This is elephant";
cout<<a<<endl;
// reverse_string(a);
// cout<<a<<endl;
cout<<"Reversed string is: "<<endl;
cout<<reverse(a,c);
}