a, b = map(int, input().split())

i, j = a, b
output = []

if a < b:
    while i <= b and j >= a:
        output.append(f"{i} {j}")
        i += 1
        j -= 1
else:
    while i >= b and j <= a:
        output.append(f"{i} {j}")
        i -= 1
        j += 1

print("-".join(output))
