for i in range(3):    
    bintang = 0; pagar = 0
    k1 = input(); k2 = input()
    isi1 = len(k1); isi2 = len(k2)
    if(isi1 != isi2):
        print("\nPanjang kalimat berbeda, pesan palsu\n")
    else:
        for i in range(isi1):
            if(k1[i] == k2[i]):
                if(k1[i] == ' '):
                    print(" ", end=' ')
                else:
                    print("*", end=' ')
                    bintang += 1
            else:
                print("#", end=' ')
                pagar += 1
        print("\n* = ", bintang)
        print("# = ", pagar)
        if(bintang >= pagar):
            print("Pesan Asli")
        else:
            print("Pesan Palsu")
    print("\n")