# 9>
'''
a=int(input("Enter First number : "))
b=int(input("Enter Second number : "))
c=int(input("Enter Third number : "))
if a<b and a<c:
    if b<c:
        print(a,b,c)
    else:
        print(a,c,b)
        # x,y,z=a,c,b
elif b<a and b<c:
    if a<c:
        print(b,a,c)
    else:
        print(b,c,a)
else:
    if a<b:
        print(c,a,b)
    else:
        print(c,b,a)
'''
# 10>
'''
p=int(input("Enter principal amount: "))
t=float(input("Enter time: "))
if p<200000:
    r=10
elif p>=200000 and p<1000000:
    r=12
else:
    r=15
print('Simple interest = ',p*r*t/100)
'''
# 11(a)>
'''
a=int(input('Enter the number of rows: '))
b=1
for i in range(0,a+1):
    for j in range(0,i):
        print(b,end=" ")
        b+=1
    print('')
    '''
# 11(b)
'''
a=int(input('Enter the number of rows: '))
for i in range(a,0,-1):
    for j in range(0,a-i):
        print(' ',end=' ')
    for k in range(0,2*i-1):
        print('*',end=' ')
    print()
    '''
# 12>
'''
a=int(input('Enter the number: '))
b=1
while b<a:
    print(b,end = ' ')
    b+=2
    '''
# 13>
'''
a=int(input('Enter the number1: '))
b=int(input('Enter the number2: '))
c=b
while a%b != 0:
    (a,b)=(b,a%b)
    c=b
print('GCD =',c)
'''
# 14>

for i in range(1,11):
    print('1/',i,'=',1/i)
    