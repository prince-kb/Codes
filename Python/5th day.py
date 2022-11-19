# 1>max and min of list without using 
""" 
l=[3,6,2,5,9,0]
max=l[0]
min=l[0]
for i in range(len(l)):
    if l[i]>max:
        max=l[i]
    if l[i]<min:
        min=l[i]
print(max,min)
 """
# 2>Multiply two matrices as nested lists
l1=[[1,2],[3,4]]
l2=[[5,6],[7,8]]
l3=[[],[]]

for i in range(0,len(l1),1):
    for j in range(0,len(l2),1):
        for k in range(0,len(l2),1):
            print("f")
            p=p+l1[i][k]*l2[k][j]
        l3[i][j]=p
# print(l3)

