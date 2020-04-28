while True:
    try:
        times=int(input())
        vet =input().split()
        sizeVet=len(vet)
        impeachment=0
        i=0
        while i<sizeVet:
            if vet[i]=="1":
                impeachment+=1
            i+=1
        n=0
        n = (sizeVet*2.0) / 3.0
        if impeachment>=n:
            print("impeachment")
        else:
            print("acusacao arquivada")
    except EOFError:
        break