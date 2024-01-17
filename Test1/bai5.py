k = int(input("Nhap so k "))
a = k + 1
sohoanhao = 0
uoca = 0
i = 1
while sohoanhao < 1:
    for i in range(1, a):
        if a % i == 0:
            uoca = uoca + i
    if uoca == a:
        sohoanhao = sohoanhao + 1
    else:
        i = 1
        uoca = 0
        a = a + 1
print(a)