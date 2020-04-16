a=int(input())
for i in range(0,a):
    vet=input().split()
    n=int(vet[0])
    m=int(vet[1])
    quant=0
    while n>0:
        n-=m
        quant+=1
    print(quant)