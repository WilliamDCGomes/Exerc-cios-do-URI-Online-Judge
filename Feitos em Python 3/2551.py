while True:
    try:
        times=int(input())
        i=0
        record=0
        while i<times:
            ent=input().split()
            t=float(ent[0])
            d=float(ent[1])
            sub = d/t
            if i==0:
                record = sub
                print(i+1)
            elif sub>record:
                record = sub
                print(i+1)
            i+=1
    except EOFError:
        break