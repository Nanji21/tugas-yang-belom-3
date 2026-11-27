
# Data nilai awal
nilai = [60, 85, 40, 90, 75, 50, 95]

# Mencari nilai 85
if 85 in nilai:
    posisi = nilai.index(85)
    print("Nilai 85 ditemukan pada indeks:", posisi)
else:
    print("Nilai 85 tidak ditemukan")

# Menyaring nilai yang lulus
nilai_lulus = []

for n in nilai:
    if n >= 75:
        nilai_lulus.append(n)

# Menampilkan nilai lulus
print("Nilai yang lulus:", nilai_lulus)
