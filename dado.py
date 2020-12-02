import random

print("Lancia un dado a N facce")

N = 0
while N < 1:
    N = input("N: ")
    N = int(N)

N = random.randint(1, N)
print(f"È uscito il numero: {N}")
