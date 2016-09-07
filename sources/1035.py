# https://www.urionlinejudge.com.br/judge/pt/problems/view/1035
from sys import stdin

line = stdin.readline()
vet = line.split(' ')
a = int(vet[0])
b = int(vet[1])
c = int(vet[2])
d = int(vet[3])

if b > c and d > a and c + d > a + b and c > 0 and d > 0:
   print("Valores aceitos")
else:
   print("Valores nao aceitos")
