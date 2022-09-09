
# Aalu=input("What is Aalu: ")
# # print('Aalu'+' ' +"Began "+str(Aalu))
# # print(Aalu.lower())
# # print("find" in Aalu)
# print(int(Aalu)+3*1/2+6)

a = input("Enter first number: ")
b = input("Enter second number: ")
a=int(a)
b=int(b)
print("1-Add\t2-Subtract\t3-Multiply\t4-Divide\t5-Modulo")
c=input("Enter your choice: ")
if c == '1':
    print(a+b)
elif c=='2':
    print(a-b)
elif c=='3':
    print(a*b)
elif c=='4':
    print(a/b)
elif c=='5':
    print(a%b)
else: 
    print("Invalid choice")
