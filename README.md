# Asistensi-P2-Dasar-Pemrograman
# Image Generator ASCII

Program sederhana yang dibuat dalam bahasa C untuk menghasilkan gambar menggunakan karakter ASCII (asterisk '*' dan spasi ' '). Program ini dapat menghasilkan tiga bentuk dasar: persegi, segitiga, dan diamond dengan ukuran yang dapat disesuaikan.

## Deskripsi Program

Program ini dibuat untuk memenuhi tugas pemrograman dengan spesifikasi sebagai berikut:

### Kriteria Wajib
- Menghasilkan output gambar dari simbol asterisk (*) dan spasi ( )
- Dapat menampilkan gambar dengan batasan ukuran:
  - Minimal: 10 karakter (panjang) x 5 karakter (lebar)
  - Maksimal: 100 karakter (panjang) x 75 karakter (lebar)
- Memiliki validasi input untuk batasan ukuran

### Fitur Tambahan 
- Dapat menampilkan 3 jenis gambar berbeda (persegi, segitiga, diamond)

## Spesifikasi Program

### Batasan Ukuran
- Kotak:
  - Lebar: 10-100 karakter
  - Tinggi: 5-75 karakter
- Segitiga Siku-Siku:
  - Tinggi: 5-75 karakter
- Belah Ketupat:
  - Ukuran: 5-37 karakter

### Contoh Output

```
1. Kotak:
***************
*             *
*             *
*             *
***************

2. Segitiga Siku-Siku:
*
**
***
****
*****

3. Belah Ketupat:
    *
   ***
  *****
   ***
    *
```

## Cara Penggunaan

1. Compile program:
```bash
gcc image_generator.c -o image_generator
```

2. Jalankan program:
```bash
./image_generator
```

3. Ikuti instruksi di layar:
   - Pilih jenis gambar (1-3)
   - Masukkan ukuran sesuai batasan
   - Program akan menampilkan gambar yang dipilih

## Struktur Program

Program terdiri dari beberapa fungsi utama:
- `drawSquare(width, height)`: Menggambar kotak
- `drawTriangle(height)`: Menggambar segitiga siku-siku
- `drawDiamond(size)`: Menggambar Belah Ketupat
- `validateInput(value, min, max)`: Validasi input ukuran
- `main()`: Fungsi utama program

## Error Handling

Program akan menampilkan pesan error jika:
- Input pilihan tidak valid (di luar 1-3)
- Ukuran input di luar batasan yang ditentukan
- Format input tidak sesuai

## Pengembangan

Program ini dapat dikembangkan lebih lanjut dengan menambahkan fitur:
- Animasi gambar
- Lebih banyak variasi bentuk
- Penyimpanan gambar ke file
- Kustomisasi karakter untuk menggambar
