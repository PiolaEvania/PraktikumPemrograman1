for i in range(3):   
    b, k = map(int, input().split())
    m = []
    x = 0
    isi = list(map(int, input().split()))
    for i in range(b):
        m.append(isi[x : x + k])
        x = x + k
    for b in m:
        for isi in b:
            print(isi, end=' ')
        print()
    print("\n")