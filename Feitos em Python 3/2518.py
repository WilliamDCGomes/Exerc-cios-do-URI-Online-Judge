import math
while True:
    try:
        degraus=int(input())
        vet=input().split()
        h=int(vet[0])
        c=int(vet[1])
        l=int(vet[2])
        compRampa=math.sqrt(pow(c,2)+pow(h,2))
        compRampa*=degraus
        area = compRampa*l
        print("%.4f"%(area/10000))
    except EOFError:
        break