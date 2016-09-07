# https://www.urionlinejudge.com.br/judge/pt/problems/view/1768
from sys import stdin

while True:
    line = stdin.readline()
    if not line:
       break
    a = int(line)
    #Imprimir a linha central
    for i in range(1,a+1,2):
        print(" "*((a/2)-(i/2)) + "*"*i)

    print(" "*(a/2) + "*")
    print(" "*((a/2) -1) +"***")
    print("")
