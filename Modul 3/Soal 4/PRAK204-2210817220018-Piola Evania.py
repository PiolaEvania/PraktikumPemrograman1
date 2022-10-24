r = float(input(""))
t = float(input(""))
phi = 3.142857
v = phi*r*r*t
l = 2*phi*r*(r+t)
k = 2*phi*r

print("Volume = {:.2f}".format(v))
print("Luas = {:.2f}".format(l))
print("Keliling = {:.2f}\n".format(k))

r2, t2 = input().split()
r2 = float(r2)
t2 = float(t2)
phi2 = 3.142857
v2 = phi2*r2*r2*t2
l2 = 2*phi2*r2*(r2+t2)
k2 = 2*phi2*r2

print("Volume = {:.2f}".format(v2))
print("Luas = {:.2f}".format(l2))
print("Keliling = {:.2f}".format(k2))