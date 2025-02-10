n=int(input("No if elements"))
Dic={}
sum=0
for i in range (n):
    l=input()
    f=int(input())
    Dic[l]=f
    sum+=f
for i in Dic:
    for j in range(Dic[i]):
        print(i,sep="",end="")