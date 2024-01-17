a = int(input("Nhap so a "))
b = int(input("Nhap so b "))
tonguoca = 0
tonguocb = 0
for i in range(1, a):
    if a % i == 0:
        tonguoca = tonguoca + i
for i in range(1, b):
    if b % i == 0:
        tonguocb = tonguocb + i
if (tonguoca == b) and (tonguocb == a):
    print("YES")
else:
    print("NO")