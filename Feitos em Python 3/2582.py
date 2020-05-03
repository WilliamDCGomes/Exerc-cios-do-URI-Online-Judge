test=int(input())
i=0
while i<test:
    aux=input().split()
    num1 = int(aux[0])
    num2 = int(aux[1])
    sum = num1 + num2
    if sum==0 :
        print("PROXYCITY")
    elif sum==1:
        print("P.Y.N.G.")
    elif sum==2:
        print("DNSUEY!")
    elif sum==3:
        print("SERVERS")
    elif sum==4:
        print("HOST!")
    elif sum==5:
        print("CRIPTONIZE")
    elif sum==6:
        print("OFFLINE DAY")
    elif sum==7:
        print("SALT")
    elif sum==8:
        print("ANSWER!")
    elif sum==9:
        print("RAR?")
    else:
        print("WIFI ANTENNAS")
    i+=1