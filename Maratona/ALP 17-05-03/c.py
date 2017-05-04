# Escrito por Marlon Henry Schweigert © 2017
# UDESC - Bacharelado em Ciências da Computação

import sys
import string

while(True):
	line = sys.stdin.readline()
	a, b, c = string.split(line, " ")
	a, b, c = int(a), int(b), int(c)
	if a == 0 and b == 0 and c == 0:
		break
	if a + b + c < 9:
		print "treine e volte ano que vem."
	else:
		print "selecionado!"