import numpy as np

#banyak mahasiswa
n = int(input("Banyak Mahasiswa: "))
a = []
for i in range (n) :
    #input nilai
    x = float(input(f"Masukan nilai mahasiswa ke-{i+1}: "))
    a.append(x) 

#rata rata
rata_rata = np.mean(a)
print(f"rata-rata: {rata_rata}")

b = np.array(a)
b = np.var(b)
print(f"Variansi: {b}") # Variansi populasi

c = np.array(a)
c= np.std(c)
print(f"Standard Deviasi: {c}")# Standar deviasi populasi

for i in range (n) :
    if int(a[i]) >= 70:
        print(f"Nilai mahasiswa ke-{i} sudah layak lulus: True") 
    else: 
        print(f"Nilai mahasiswa ke-{i} sudah layak lulus: False")