#Prime number
'''
a=int(input("Enter the number: "))
c=1;b = 2
while b<a:
    if a%b==0:
        c=0
        break
    b=b+1
if c==1:
    print(a,"is a prime number")
else:
    print(a,"is not a prime number")
    '''
#Armstrong number
'''
a=int(input("Enter the number: "))
s=0;c=a
while int(a)!=0:
    b=a%10
    s=s+b*b*b
    a=a//10;
if c==s: print("Armstrong")
else: print("Not Armstrong")
'''
#LCM of two numbers
'''
a=int(input("Enter 1st number: "))
b=int(input("Enter 2nd number: "))
c=a;
d=a*b
while c<=d:
    if c%a==0 and c%b==0:
        break
    c=c+1
print("LCM=",c)
'''
#Sum of all prime numbers in a given range
'''
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
'''
#Count prime and composite and their sum seperately
'''
a=0;p=0;c=0
while True:
    d=1
    a=int(input("Enter any input (-1 to exit): "))
    if a==-1:
        break
    if a == 1:
        continue
    for i in range(2,a,1):
        if a%i==0:
            d=0
    if d==1:
        p=p+a
    else: c=c+a
print("Prime sum = ",p,"Composite sum = ",c)
'''
#Sum of even terms of Fibonacci series

a=1;b=1;c=0;s=0
while True:
    if a%2==0:
        s=s+a
    c=a+b
    a=b;b=c
    if a>100:
        break
print("Sum of even terms of Fibonacci series = ",s)
    