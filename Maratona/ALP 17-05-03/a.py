# Escrito por Marlon Henry Schweigert © 2017
# UDESC - Bacharelado em Ciências da Computação

import sys
import string
from datetime import timedelta

while True:
	line = sys.stdin.readline()
	h1, m1, h2, m2 = string.split(line, " ")
	h1, m1, h2, m2 = int(h1), int(m1), int(h2), int(m2)
	if h1==0 and h2 == 0 and m1 == 0 and m2 == 0:
		break
	if h1*60 + m1 <= h2*60 + m2:
		t1 = timedelta(hours = h1, minutes = m1)
		t2 = timedelta(hours = h2, minutes = m2)
		print(int((t2-t1).total_seconds()/60))
	else:
		t1 = timedelta(days = 0,hours = h1, minutes = m1)
		t2 = timedelta(days = 1,hours = h2, minutes = m2)
		print(int((t2-t1).total_seconds()/60))