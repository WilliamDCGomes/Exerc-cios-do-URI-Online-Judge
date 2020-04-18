while True:
    quant=int(input())
    if quant == 0:
        break
    vet=input().split()
    dX=int(vet[0])
    dY=int(vet[1])
    i=0
    while i<quant:
        vet=input().split()
        x=int(vet[0])
        y=int(vet[1])
        if x==dX or y==dY:
            print("divisa")
        elif x>dX and y>dY:
            print("NE")
        elif x<dX and y>dY:
            print("NO")
        elif x<dX and y<dY:
            print("SO")
        elif x>dX and y<dY:
            print("SE")
        i+=1