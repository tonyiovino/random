import random

N = input("N: ")
N = int(N)

if N > 1:
    N = random.randrange(1, N)
    print("Numero: ", N)

else:
    print("ERRORE: riprovare a inserire un numero > 1")