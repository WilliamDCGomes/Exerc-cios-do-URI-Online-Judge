i=input()
aux=int(i)
ver=aux%2
if ver==0:
    b=0
    while b<6:
        print(aux+1)
        aux+=2
        b+=1
else:
    b=0
    while b<6:
        print(aux+1)
        b+=1