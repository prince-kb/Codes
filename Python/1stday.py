# 1. Write a program to convert temperature from degree Celsius to degree Fahrenheit.
'''
t=input("Enter temperature in degree: ")
f=int(t)*1.8 +32
print(t,"Temperature in fahrenheit = ",f)
'''
'''
# 2. Write a program to calculate the area and perimeter of a rectangle.
l= int(input('Enter length of rectangle: '))
w= int(input('Enter width of rectangle: '))
p=2*l + 2*w;a=l*w
print('Area =',a,'perimeter =',p)

'''
# 3. Write a program to swap the value of two variables using a 
# i>third variable and 
# ii>without using a third variable.
'''
a=int(input('Enter first number: '))
b=int(input('Enter second number: '))
temp = a;a=b;b=temp;
print('first number =',a,'second number=',b)
'''
'''
a=int(input('Enter first number: '))
b=int(input('Enter second number: '))
a=a+b;b=a-b;a=a-b;
print('first number =',a,'second number=',b)
'''
# 4. Write a program to swap two numbers using bitwise operators.
'''
a=int(input('Enter first number: '))
b=int(input('Enter second number: '))
a=a^b;b=a^b;a=a^b;
print('first number =',a,'second number=',b)
'''
# 5. Write a program to rotate the value of x, y, and z such that x has the value of y, y has the value of z and
# z has the value of x.
'''
x=int(input("Enter x: "))
y=int(input("Enter y: "))
z=int(input("Enter z: "))
# temp = x;x=y;y=z;z=temp;
(x,y,z) = (y,z,x)
print('x=',x,'y=',y,'z=',z)
'''
# 6. Write a program to display the following numbers: 5678, 678, 78, 8, where the given number is 5678.
'''
x=  int(input('Enter the number: '))
print(x)
print(x%1000)
print(x%100)
print(x%10)
'''
# 7. Write a program to add two complex numbers by reading the numbers from the user.
'''
a=complex(input('Enter 1st complex number: '))
b=complex(input('Enter 2nd complex number: '))
print(a+b)
'''
# 8. Write a program to accept the principal amount, rate of interest, and duration from the user. Calculate
# the interest amount and the total amount (principal + interest).
'''
p=int(input('Enter principal amount: '))
r=float(input('Enter rate: '))
t=float(input('Enter time in years: '))
a=p*r*t/100
print('Total amount = ',p+a)
'''