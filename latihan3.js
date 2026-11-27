
// Data pengukuran suhu
let suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

// 1. Mencari nilai 0
if (suhu.includes(0)) {
    console.log("Nilai 0 ditemukan dalam array");
} else {
    console.log("Nilai 0 tidak ditemukan dalam array");
}

// 2. Filter suhu positif
let suhuPositif = suhu.filter(n => n > 0);

// Menampilkan hasil
console.log("Suhu positif:", suhuPositif);
