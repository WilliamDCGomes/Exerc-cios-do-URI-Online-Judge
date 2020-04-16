experience=1
while True:
    ciclos=0
    n=int(input())
    if n==-1:
        break
    while n>1:
        ciclos+=1
        n-=2
    print('Experiment {}: {} full cycle(s)'.format(experience,ciclos))
    experience+=1