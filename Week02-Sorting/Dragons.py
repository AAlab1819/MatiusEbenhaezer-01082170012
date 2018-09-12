def getNextGap(gap):
    gap = (gap * 10)//13
    if gap < 1:
        return 1
    return gap
def combSort(arr):
    n = len(arr)
    gap = n
    swapped = True
    while gap !=1 or swapped == 1:
        gap = getNextGap(gap)
        swapped = False
        for i in range(0, int(n-gap)):
            if arr[i] > arr[i + gap]:
                arr[i], arr[i + gap]=arr[i + gap], arr[i]
                swapped = True

dragons = []
KiritoWin = True
strength, n = map(int,input().split())

for i in range (n):
    dragons_str, bonus_str = map(int, input().split())
    dragons.append([dragons_str, bonus_str])
combSort(dragons)
for dragon in dragons:
    if dragon[0] >= strength:
        KiritoWin = False
        break
    else:
        strength += dragon[1]
print("YES" if KiritoWin else "NO")
    