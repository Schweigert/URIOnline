# Escrito por Marlon Henry Schweigert © 2017
# UDESC - Bacharelado em Ciências da Computação

import sys
mapa = {}

mapa["BRL"] = 0
mapa["USD"] = 0
mapa["EUR"] = 0
mapa["BPS"] = 0

while(True):
	line = sys.stdin.readline()
	if line[0] == '0':
		break
	moeda = line[0]+line[1]+line[2]
	valor = line[3]+line[4]+line[5]
	mapa[moeda] += float(valor)


mapa["BRL"] = round(mapa["BRL"], 2)
mapa["USD"] = round(mapa["USD"], 2)
mapa["EUR"] = round(mapa["EUR"], 2)
mapa["BPS"] = round(mapa["BPS"], 2)

print "BRL = ",mapa["BRL"]," USD = ",mapa["USD"]," EUR = ",mapa["EUR"]," BPS = ",mapa["BPS"]
	