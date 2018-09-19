n = int(input())
x = [int(i) for i in input().split()]
del x[0]
y = [int(i) for i in input().split()]
del y[0]

for i in y:
    x.append(i)
x = list(set(x))

if n == len(x):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
