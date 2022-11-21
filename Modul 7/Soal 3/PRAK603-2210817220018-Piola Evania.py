for i in range(3):
    b1, b2 = map(int, input().split())
    if b1 == b2:
        a1 = list(map(int, input().split()))
        a2 = list(map(int, input().split()))
        m1 = []
        m2 = []
        x = 0
        m1.append(a1[x : x + b1])
        m2.append(a2[x : x + b2])
        for i in range(0, b1):
            print(m1[0][i] * m2[0][i], end=' ')
    else:
        print("Jumlah Tidak Sama")
    print("\n\n")