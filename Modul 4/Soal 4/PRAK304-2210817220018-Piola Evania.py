for i in range(5):  
    a = int(input())

    if(a == 0):
        print("Nol\n")
    elif(a >= 1 and a <= 9):
        print("Satuan\n")
    elif(a >= 11 and a <= 19):
        print("Belasan\n")
    elif(a == 10 or a >= 20 and a <= 99):
        print("Puluhan\n")
    else:
        print("Anda Menginput Melebihi Limit Bilangan\n")