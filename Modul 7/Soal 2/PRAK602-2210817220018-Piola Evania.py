for i in range(3):
    b = int(input())
    isi = list(map(int, input().split()))
    m = []
    a = 0
    for i in range(0, b):
        m.append(isi[a : a + b])
    for i in range(0, b):
        print(m[0][i] * (i + 1), end=' ')
    print("\n\n")