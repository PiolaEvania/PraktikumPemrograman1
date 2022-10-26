for i in range(5):   
    s = int(input())
    sec = s%60
    mnt = (s/60)%60
    hr = (s/3600)%24
    d = s/86400

    if (s<=3600):
        print("%.2d:%.2d:%.2d\n" %(hr, mnt, sec))
    elif (s>3600 and s<=86400):
        print("%.2d:%.2d:%.2d\n" %(hr, mnt, sec))
    else:
        print("%d hari %.2d:%.2d:%.2d\n" %(d, hr, mnt, sec))
