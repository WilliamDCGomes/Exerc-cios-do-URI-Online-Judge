import math
while True:
    aux=input().split()
    if aux[0] == "0":
        break
    a=int(aux[0])
    b=int(aux[1])
    c=int(aux[2])
    x = math.sqrt((a*b*100)/c);
    print(int(x));