# Insomnia Cure
[**SUBMISSION**](http://codeforces.com/contest/148/submission/42999367)

In this  problem, we need to count the dragons (`d`) that is hurt by `k` `l` `m` `n`.\
Count the `damaged` dragons from how they got hurt.

INPUT\
Input the dragons that is hurt by the princess in some ways and the `d`.
```int k, l, m, n, d;
   cin >> k >> l >> m >> n >> d;
```

OUTPUT\
Print out the damaged dragons by:
```
for(int i = 0; i <= d; i++){
        if( i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
            damaged = damaged + 1
        }
    }
    cout << damaged << endl;
```

Worst Case:O(n)\
Average Case:θ(n)\
Best Case: Ω(n)

# I Wanna Be The Guy
[**SUBMISSION**](http://codeforces.com/contest/469/submission/43030666)

In this problem `x` and `y` is trying to play a game.\
Both of them need to pass `n` levels so they are able to win the game.

INPUT\  
First line is the `n` levels.\
Second line is `x`'s levels that he passed and do the same thing for `y`.\
`del x[0]` and `del y[0]` is used to exclude the first element on `x` and `y`.\
It is used to seperate the amount of levels `x` and `y` passed and which levels he passed.

```
for i in y:
    x.append(i)
x = list(set(x))
```
`x` become a list of `x` and `y`\
if `n == len(x)` print `"I become the guy."` else `"Oh, my keyboard!"` 

Worst Case: O(n)\
Average Case: θ(n)\
Best Case: Ω(n)

# Vanya and Lanterns
[**SUBMISSION**](http://codeforces.com/contest/492/submission/43032544)

This problem is about Vanya trying to know what is the minimum radius of the lanterns to light the whole street.

INPUT\
First line contain `n` (lanterns), and `l`(length of the street).\
`n, l = map(int,input().split())`\
The second line is the n integer.\
`a = sorted(map(int, input().split()))`\
The longest `d` (radius) for each lanterns to light the street.\
```
d = max(min(a), l - max(a))
for i in range (n - 1):
    d = max(d, (a[i+1]-a[i])/2)
```

OUTPUT\
The minimum light radius needed to light the whole street

Worst Case: O(n log n)\
Average Case: θ(n log n)\
Best Case: Ω(n)
