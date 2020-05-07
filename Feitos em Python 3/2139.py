while True:
    try:
        ent = input().split()
        month = int(ent[0])
        day = int(ent[1])
        if month==12 and day==25:
            print("E natal!")
        elif month==12 and day==24:
            print("E vespera de natal!")
        elif month==12 and day>25:
            print("Ja passou!")
        else:
            aux=0
            if month==12:
                aux=25-day
            elif month==11:
                aux=25+30-day
            elif month==10:
                aux=25+30+31-day
            elif month==9:
                aux=25+30+31+30-day
            elif month==8:
                aux=25+30+31+30+31-day
            elif month==7:
                aux=25+30+31+30+31+31-day
            elif month==6:
                aux=25+30+31+30+31+31+30-day
            elif month==5:
                aux=25+30+31+30+31+31+30+31-day
            elif month==4:
                aux=25+30+31+30+31+31+30+31+30-day
            elif month==3:
                aux=25+30+31+30+31+31+30+31+30+31-day
            elif month==2:
                aux=25+30+31+30+31+31+30+31+30+31+29-day
            else:
                aux=25+30+31+30+31+31+30+31+30+31+29+31-day
            print("Faltam "+str(aux)+" dias para o natal!")
    except EOFError:
        break