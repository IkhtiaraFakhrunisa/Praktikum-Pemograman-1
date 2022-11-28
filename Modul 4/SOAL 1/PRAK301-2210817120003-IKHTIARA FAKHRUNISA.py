for x in range(3):
    angka1, angka2 = input("").split()
    angka1 = int(angka1)
    angka2 = int(angka2)

    if angka1 < angka2 :
        print(angka1, angka2)
    else:
        print(angka2, angka1)