SA = 400000
SB = 350000
DSA = 0.13
DSB = 0.21
HSA = SA-DSA*SA
HSB = SB-DSB*SB

print("Harga sepatu A adalah ", SA)
print("Harga sepatu B adalah ", SB)
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi ", round(HSA))
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi ", round(HSB))