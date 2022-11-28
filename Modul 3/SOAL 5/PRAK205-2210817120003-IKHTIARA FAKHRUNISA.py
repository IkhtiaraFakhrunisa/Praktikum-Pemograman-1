import math
tinggi, miring = input().split()
tinggi = float(tinggi)
miring = float(miring)
alas = math.sqrt(miring * miring - tinggi * tinggi)
keliling = tinggi + miring + alas
luas = 0.5 * alas * tinggi
print("Alas =", round(alas), "cm")
print("Tinggi =", round(tinggi), "cm")
print("Keliling =", round(keliling), "cm")
print("Luas =", round(luas), "cm^2\n")

tinggiB = input()
miringB = input()
tinggiB = float(tinggiB)
miringB = float (miringB)
alasB = math.sqrt(miringB * miringB - tinggiB * tinggiB)
kelilingB = tinggiB + miringB + alasB
luasB = 0.5 * alasB * tinggiB
print("Alas =", round(alasB), "cm")
print("Tinggi =", round(tinggiB), "cm")
print("Keliling =", round(kelilingB), "cm")
print("Luas =", round(luasB), "cm^2")