n=int(input())
m=int(input())
if n > m:
        print(n,"is greater")
else:
        print(m,"is greater")


n=int(input())
if n % 2 == 0:
        print(n,"is even")
else:
        print(n,"is odd")


n=int(input())
for i in range(1,11):
    c = n*i
    print(n,"*",i,"=",c)


n=int(input())
c=1
while n>0:
    c = c*n
    n = n-1
print("factorial is",c)


n=int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*",end="")
    print()


num=int(input())
if num>1:
    for i in range(2,num):
        if(num%i)==0:
            print(num,"not prime")
            break
    else:
        print(num,"is prime")
else:
    print(num,"not prime")