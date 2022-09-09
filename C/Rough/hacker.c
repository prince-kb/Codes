#include <stdio.h>
int aalu(int i,int j){
   
   if (i<=j)
   {
       return (j-i);
   }
   else;
   return (i-j);
   
   }
int main(){
int a,b;
printf("Type the numbers\n");
scanf("%d",&a);
scanf("%d",&b);
printf("%d\n",a+b);
printf("%d\n",aalu(a,b));
return 0;
}
