n = int(input("nhap so n "))
x = int(input("Nhap x "))
i = 0
mau = 1
P = 0
while i <= n:
    P = P + (-1)**i*x**(2*i+1)/mau
    i = i + 1
    mau = mau*2*i*(2*i+1)
print(P)
