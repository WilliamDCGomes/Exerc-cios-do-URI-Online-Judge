while True:
    try:
        times=int(input())
        dom=0.0
        dem=0.0
        i=0
        while i<times:
            aux=input().split()
            n=int(aux[0])
            c=int(aux[1])
            dom += (n*c)
            dem += (c*100)
            i+=1
        resu =0.0
        resu += (dom/dem)
        print("{:.4f}".format(resu))
    except EOFError:
        break