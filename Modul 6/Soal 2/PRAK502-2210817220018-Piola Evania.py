def hitung(nilai1, nilai2):
    return nilai1 - nilai2

def mutlak(angka):
    return abs(angka)

for i in range(3):
    a, c, b, d = map(int, input().split())
    Hasil = hitung(a, b) + hitung(c, d)
    print(mutlak(Hasil))
    print("\n")