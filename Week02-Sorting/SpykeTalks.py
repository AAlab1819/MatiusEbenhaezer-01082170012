def cycleSort(array):
  writes = 0

  for cycleStart in range(0, len(array) - 1):
    item = array[cycleStart]
     
    pos = cycleStart
    for i in range(cycleStart + 1, len(array)):
      if array[i] < item:
        pos += 1
    
    if pos == cycleStart:
      continue
    
    while item == array[pos]:
      pos += 1
    array[pos], item = item, array[pos]
    writes += 1
    
    while pos != cycleStart:
       
      pos = cycleStart
      for i in range(cycleStart + 1, len(array)):
        if array[i] < item:
          pos += 1
       
      while item == array[pos]:
        pos += 1
      array[pos], item = item, array[pos]
      writes += 1
   
  return writes


n = int(input())
x = list(map(int, input().split()))

answer = 0

cycleSort(x)

for i in range(len(x) - 1):
    if (i + 2) >= n:
        if (x[i] == x[i + 1]) and (x[i] != 0):
            answer  = answer + 1
            i  = i + 1
    else:
        if  x[i] == x[i + 1] and x[i] != 0 and x[i] != x[i + 2]:
            answer = answer + 1
            i  = i + 1
        elif x[i] == x[i + 1] and x[i] != 0 and x[i] != 0:
            answer = -1
            break
print(answer)
