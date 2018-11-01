# Kuriyama Mirai's Stones
INPUT\
First line is the integer n.\
Second line, input the array.\
Third line is the amount of `questions`.\
The next line is the `type`, `l` (left), `r`(right) from the `questions`.

OUTPUT\
The sum from array `b[]` if `type` is equal to `1`\
And sum from array `c[]` if the type other than `1`

Example:
```
First line = 5
a[ 3 4 -1 2 4 ] -> b[3 7 6 8 12] -> c[-1 1 4 8 12]
Amount of questions = 2
1 2 5 => 12 - 3 = 9
2 2 5 => 12 - (-1) = 10
``` 

Complexity:\
Worst Case : O(n log n) 

# Party Lemonade

INPUT\
First line contains how many variants of lemonade and the required lemonade in liters.\
Second line is the price of the variants lemonade with different liters based on the price.

OUTPUT\
Find the best price to buy the required amount of lemonade.

Complexity:\
Worst Case : O(n)
