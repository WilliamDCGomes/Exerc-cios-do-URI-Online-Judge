while True:
    try:
        vet=input().split()
        t=int(vet[0])
        a=int(vet[1])
        w=int(vet[2])
        c=int(vet[3])
        veri =(a*100)/t
        if veri>=w and veri<c:
            print("warning")
        elif veri>=c:
            print("critical")
        else:
            print("OK")
    except EOFError:
        break