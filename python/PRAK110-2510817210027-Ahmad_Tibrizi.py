import math
alas = 5
tinggi = 12
sisi_miring = math.sqrt(alas**2 + tinggi**2)
keliling = alas + tinggi + sisi_miring
luas = (alas * tinggi) / 2
print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm\n")
print("Jawab :")
print(f"Sisi A = {alas} cm")
print(f"Sisi B = {tinggi} cm")
print(f"Sisi C = {int(sisi_miring)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm")