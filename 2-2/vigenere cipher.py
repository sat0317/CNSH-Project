#vigenere
#string="ABCDEFGHIJKLMNOPQRSTUVWXYZ"

key=input()
d={
    'A':0,
    'B':1,
    'C':2,
    'D':3,
    'E':4,
    'F':5,
    'G':6,
    'H':7,
    'I':8,
    'J':9,
    'K':10,
    'L':11,
    'M':12,
    'N':13,
    'O':14,
    'P':15,
    'Q':16,
    'R':17,
    'S':18,
    'T':19,
    'U':20,
    'V':21,
    'W':22,
    'X':23,
    'Y':24,
    'Z':25
}

def getKey(val):
    for key, value in d.items():
         if val == value:
             return key
 

pla=input()
for i in range(0, len(pla), len(key)):
    for j in range(0, len(key)):
        print(getKey((d[pla[i+j]]+d[key[j]])%26), end="")
    print()
