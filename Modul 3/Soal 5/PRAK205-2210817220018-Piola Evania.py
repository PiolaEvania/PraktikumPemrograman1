A, B = input().split()
A = float(A)
B = float(B)
C = (B*B-A*A) ** (1/2)
K = A + B + C
L = 0.5 * C * A

print("Alas = ", round(C), "cm")
print("Tinggi = ", round(A), "cm")
print("Keliling = ", round(K), "cm")
print("Luas = ", round(L), "cm^2\n")

A2 = float(input(""))
B2 = float(input(""))
C2 = (B2*B2-A2*A2) ** (1/2)
K2 = A2 + B2 + C2
L2 = 0.5 * C2 * A2

print("Alas = ", round(C2), "cm")
print("Tinggi = ", round(A2), "cm")
print("Keliling = ", round(K2), "cm")
print("Luas = ", round(L2), "cm^2")