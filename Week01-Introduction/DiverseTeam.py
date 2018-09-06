n, k = map (int, input().split(" "))
a = input().split(" ")
b = list(set(a))
if len(b) < k:
    print("NO")
else:
    print ("YES")
    for i in range(k):
        print(a.index(b[i]) + 1, end = " ")
