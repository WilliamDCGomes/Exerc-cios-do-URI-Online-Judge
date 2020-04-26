times=int(input())
i=0
while i<times:
    quantJoao=0
    quantMaria=0
    j=0
    while j<3:
        vet=input().split()
        x=int(vet[0])
        d=int(vet[1])
        quantJoao+=(x*d)
        j+=1
    j=0
    while j<3:
        vet=input().split()
        x=int(vet[0])
        d=int(vet[1])
        quantMaria+=(x*d)
        j+=1
    if quantJoao>quantMaria:
        print("JOAO")
    else:
        print("MARIA")
    i+=1