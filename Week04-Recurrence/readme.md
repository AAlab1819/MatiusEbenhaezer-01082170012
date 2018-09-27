# Buttons
[**SUBMISSION**](http://codeforces.com/contest/268/submission/43447993)

Manao is trying to open a lock.\
There are `n` buttons with the right combination.\
The buttons will resets everytime Manao pressed the wrong button for each step of the combination.\
In this problem, Manao always wrong when he tried to guess the next step of the right combination from the first buttons to `n` buttons.

INPUT\
First line is the amount of Buttons.\
`n = int(input())`

OUTPUT\
This is the formula I used:\
`(n - 1) * n * (n + 1) // 6 + n`\
and print the amount of `buttons_pressed`

# Igor In The Museum
[**SUBMISSION**](https://codeforces.com/contest/598/submission/43491015)

Igor is inside a `n` x `m` size museum.\
He has a starting place (`.`) of `x` and `y` and will continue following other `.` if possible\
The problem is to solve how many `pictures`(`*`) he can see based on the direction left, righ, up, and down.\
```
Example 1:

****
*..*
*.**
**.* 

if he's starting point = 3,2 and 4,3

****
*..*
*o**
**o*

there are 8 pictures he can see from the first starting point and 3 for the second point.
```

INPUT\
The size of the museum = `n` x `m`, and `k` as the number of starting place.\
Then input the same amount of `*` and `.` as the museum.\
and the postion of starting point.

OUTPUT\
Using floodfill algorithm for each space on the museum to `arrayIndexMap`.\
Then print out pictures he can see.
