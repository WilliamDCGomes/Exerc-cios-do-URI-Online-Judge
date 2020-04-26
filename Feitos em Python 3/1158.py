vezes=int(input())
z=0
soma=0
while z<vezes:
    vet=input().split()
    x=int(vet[0])
    y=int(vet[1])
    if x%2==0:
        x+=1
        i=0
        while i<y:
            soma+=x
            x+=2
            i+=1
    else:
        i=0
        while i<y:
            soma+=x
            x+=2
            i+=1
    print(soma)
    soma=0
    z+=1