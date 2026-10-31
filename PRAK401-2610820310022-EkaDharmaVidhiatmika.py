input_data = input().split()
kelipatan = int(input_data[0])
simbol = input_data[1]

for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")
      
