n = int(input())
if n % 2 == 1:
    N = n // 2
    D = n - N
else:
    N = (n // 2) - 1
    while N % 2 == 0:
        N = N - 1
    D = n - N
print(N, D)