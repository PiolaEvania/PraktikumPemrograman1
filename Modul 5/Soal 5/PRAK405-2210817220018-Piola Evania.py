for i in range(3):
    a, b = input().split()
    a = int(a); b = int(b)

    for i in range(1, a + 1):
        j = i 
        while j > 1:
            print("(%d * %d) + "%(j, b), end=' ')
            j -= 1
        c = 1; hasil = (i * b)
        while c < i:
            hasil += (c * b); c += 1
        print("(%d * %d) = %d"%(j, b, hasil))
    p = 1; q = 1; r = 0
    while p <= a:
        r += q * b; q += p + 1; p += 1
    print("%d"%(r))
    print("\n")