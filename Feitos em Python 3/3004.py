times=int(input())
i=0
while i<times:
    vet=input().split()
    insideX=int(vet[0])
    insideY=int(vet[1])
    mainX=int(vet[2])
    mainY=int(vet[3])
    if (insideX<mainX and insideY<mainY) or (insideX<mainY and insideY<mainX):
        print("S")
    else:
        print("N")
    i+=1