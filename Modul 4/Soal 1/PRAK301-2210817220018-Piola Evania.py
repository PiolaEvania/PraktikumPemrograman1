for i in range(3):
    a, b = input().split()
    a = int(a)
    b = int(b)

    if(a > b):
        print("%d %d\n" %(b, a))
    else:
        print("%d %d\n" %(a, b))