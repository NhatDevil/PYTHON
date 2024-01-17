n = int(input("Nhập số phần tử của số dãy "))
A = []
for i in range(n):
    A.append(int(input('Nhap so thu %d: ' % (i+1))))


d = 0
ssh = 0
ssh1 = 0
c = 0
k = 0

for k in range(1000):
    x = 0
    for i in range(n):
        if A[i] == k:
            x = x + 1
    if x >= 1:
        ssh = ssh + 1
    if x > 2:
        ssh1 = ssh1 + 1
for i in range(n):
    dem = 0
    for k in range(n):
        if A[i] == A[k]:
            dem = dem + 1
    if dem > 1 :
        c = c + ssh
print(int(c/2) + ssh1)