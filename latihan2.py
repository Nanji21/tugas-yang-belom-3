
# Membuat daftar nama produk
produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

# 1. Mencari produk Keyboard
if "Keyboard" in produk:
    print("Produk Keyboard ditemukan")
else:
    print("Produk Keyboard tidak ditemukan")

# 2. Filter nama produk yang panjangnya lebih dari 5 karakter
produk_filter = []

for nama in produk:
    if len(nama) > 5:
        produk_filter.append(nama)

# Menampilkan hasil filter
print("Produk dengan panjang nama lebih dari 5 karakter:")
print(produk_filter)
