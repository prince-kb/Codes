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
""" 
l1=[[1,2],[3,4]]
l2=[[5,6],[7,8]]
l3=[[0,0],[0,0]]
temp=0
for i in range(len(l1)):
    for j in range(len(l2[0])):
        for k in range(len(l2)):
            l3[i][j]+=l1[i][k]*l2[k][j]
# print(l3)
for l in l3:
    print(l)
 """
#  3> Union pf twp lists
""" 
def Union(l1,l2):
    l3=l1+l2
    return l3

def Union1(l1,l2):
    l3=sorted(l1+l2)
    return l3
def Union2(l1,l2):
    l3=list(set(l1)|set(l2))
    return l3

l1=[1,2,3,4]
l2=[4,3,2,11]

# Approach 1>
# print(Union(l1,l2))

#Approach 2>
# print(Union1(l1,l2))

#Approach 3>
# print(Union2(l1,l2))
 """
# 4>Concatenate two lists using list comprehension
""" l1=[3,5,77,5,9]
l2=[4,65,1,9,-1]
for i in l2:
    l1.append(i)
print(l1)
 """

#  5>Add numbers in list which are in list 1 but not in list 2
""" l1=[1,2,3,4,5,5,6]
l2=[2,5,7,8,1,6,4]
l3=[]
for i in l1:
    for j in l2:
        if i==j:
            break
        else:
            l3.append(i)
print(l3)

 """

