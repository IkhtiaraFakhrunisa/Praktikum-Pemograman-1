import math
alas = 5
tinggi = 12
miring = round(math.sqrt(alas*alas+tinggi*tinggi))
k = alas + tinggi + miring
l = 1/2 * alas * tinggi

print("Diketahui :")
print("Alas = ", alas,"cm")
print("Tinggi = ", tinggi,"cm\n")
print("Jawab :")
print("Sisi A = ",tinggi,"cm")
print("Sisi B = ",round(miring),"cm")
print("Sisi C = ",alas,"cm")
print("Keliling = ",round(k),"cm")
print("Luas = ",round(l),"cm")