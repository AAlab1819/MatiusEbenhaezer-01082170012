def shellSort(arr):
    n = len(arr)
    gap = n//2

    while gap > 0:
        for i in range(gap,n):
            temp = arr[i]
            j = i
            while  j >= gap and arr[j-gap] >temp:
                arr[j] = arr[j-gap]
                j -= gap
            arr[j] = temp
        gap //= 2

steward = int(input())
strengths = list(map(int,input().split())) 
shellSort(strengths)

low = min(strengths)
high = max(strengths)
supportable = 0

for i in range(steward):
    if low < strengths[i] < high:
        supportable = supportable + 1

print(supportable)