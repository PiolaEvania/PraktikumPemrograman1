a = 1
while a != 5:
    print("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    pil = int(input("Masukkan Pilihan : "))
    if pil > 5 or pil <=0:
        print("Input anda salah, silahkan coba lagi\n")
    elif pil == 5:
        print("Terimakasih telah menggunakan kalkulator Piola Evania\n")
        break
    else:
        n1 = float(input("Masukkan Nilai Pertama : "))
        n2 = float(input("Masukkan Nilai Kedua : "))
        if pil == 1:
            hasil = n1 + n2
            print("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))
        elif pil == 2:
            hasil = n1 - n2
            print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))
        elif pil == 3:
            hasil = n1 * n2
            print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))
        else:
            hasil = n1 / n2
            print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n"%(n1, n2, hasil))