n=int(input()) 
l=[]
for i in range(0,n):
    x=int(input())
    l.append(x)
p=0
for i in range(n):
    c=0
    while(i>=0):
        i=l[i]-1
        c+=1
    p=max(c,p)
print(p)