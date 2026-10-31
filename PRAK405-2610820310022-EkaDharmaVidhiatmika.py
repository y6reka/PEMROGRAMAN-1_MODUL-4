n, k = map(int, input().split())

total_keseluruhan = 0

for i in range(1, n + 1):
    total_baris = 0
    bagian = []
    
    for j in range(i, 0, -1):
        total_baris += j * k
        bagian.append(f"({j}*{k})")
    
    string_baris = " + ".join(bagian)
    print(f"{string_baris} = {total_baris}")
    
    total_keseluruhan += total_baris

print(total_keseluruhan)
