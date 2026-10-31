batas = int(input())

# Baris 1: Bilangan ganjil dari 1 sampai batas
for i in range(1, batas + 1):
    if i % 2 != 0:
        print(i, end=" ")
print()

# Baris 2: Bilangan genap dari batas sampai 2 (terbalik)
for i in range(batas, 1, -1):
    if i % 2 == 0:
        print(i, end=" ")
print()
