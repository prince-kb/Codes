a=int(input("Enter 1st number: "))
b=int(input("Enter 2nd number: "))
if a==1:
    a=2
s=0
while a<=b:
    i=2;c=1
    while i<a:
        if a%i==0:
            c=0
        i=i+1
    if c==1:
        s=s+a
    a=a+1;
print("Sum=",s)