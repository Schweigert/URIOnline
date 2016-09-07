from sys import stdin
from math import sqrt

line = stdin.readline()
args = line.split(" ")
a = float(args[0])
b = float(args[1])
c = float(args[2])
delta = b*b - 4*a*c
if (delta < 0 or a == 0.0):
	print("Impossivel calcular")
	exit()

x1 = (-b + sqrt(delta))/(2*a)
x2 = (-b - sqrt(delta))/(2*a)

print("R1 = "+format(x1, "0.5f"))
print("R2 = "+format(x2, "0.5f"))
