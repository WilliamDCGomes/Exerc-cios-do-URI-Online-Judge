vet=input().split()
p1=int(vet[0])
c1=int(vet[1])
p2=int(vet[2])
c2=int(vet[3])
if p1*c1 == p2*c2:
    print("0")
elif p1*c1>p2*c2:
    print("-1")
else:
    print("1")