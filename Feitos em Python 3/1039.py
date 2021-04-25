while True:
    try:
        ent = input().split()
        raio1 = int(ent[0]);
        x1 = int(ent[1]);
        y1 = int(ent[2]);
        raio2 = int(ent[3]);
        x2 = int(ent[4]);
        y2 = int(ent[5]);
        if (raio1 >= raio2 and ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) <= ((raio1 - raio2) * (raio1 - raio2))):
            print("RICO")
        else:
            print("MORTO");
    except EOFError:
        break