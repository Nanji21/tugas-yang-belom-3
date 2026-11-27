
# Data pengukuran suhu
suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

# 1. Mencari nilai 0
if 0 in suhu:
    print("Nilai 0 ditemukan dalam array")
else:
    print("Nilai 0 tidak ditemukan dalam array")

# 2. Filter suhu positif
suhu_positif = []

for n in suhu:
    if n > 0:
        suhu_positif.append(n)

# Menampilkan hasil
print("Suhu positif:", suhu_positif)
