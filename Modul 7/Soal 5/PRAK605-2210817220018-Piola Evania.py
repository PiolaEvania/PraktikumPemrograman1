for i in range(2): 
    b = int(input())
    m1 = []
    print("Matriks A")
    for i in range(0, b):
        isi1 = list(map(int, input().split()))
        m1.append(isi1[0 : b])
    m2 = []
    print("Matriks B")
    for i in range(0, b):
        isi2 = list(map(int, input().split()))
        m2.append(isi2[0 : b])
    print("\nMatriks AXB\n")
    for i in range(0, b):
        for j in range(0, b):
            hasil = 0
            for k in range(0, b):
                hasil += m1[i][k] * m2[k][j]
            print(hasil, end=' ')
        print()
    print("\n")