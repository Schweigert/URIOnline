
from sys import stdin

def dancing(txt, posi, caso):
	if len(txt) <= posi:
		return ""
	if (txt[posi] == " "):
		return " "+ dancing(txt,posi+1, caso)
	if caso == True:
		return txt[posi].upper() + dancing(txt,posi+1, False)
	if caso == False:
		return txt[posi].lower() + dancing(txt,posi+1, True)

while True:
	line = stdin.readline()
	if not line:
		break
	print (dancing(line.rstrip(),0,True))

