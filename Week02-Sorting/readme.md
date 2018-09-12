# Dragons
[**SUBMISSION**](http://codeforces.com/contest/230/submission/42757641)

In this problem, Kirito is trying to win a MMORPG game.\
The game required strength bigger than the dragons so Kirito's able tow in the game.\
He might start from a smaller strength and work his way up by defeating the dragon(s) and gain strength.\
(Sorted with Comb Sort)

INPUT\
First Line is Kirito's strength and the dragon(s) he's facing.\
`strength, n = map(int,input().split())`\
The next line is the strength of the dragons and the amount of strength Kirito will get.\
`dragons_str, bonus_str = map(int, input().split())`

OUTPUT\
Print out `"YES"` if Kirito win and `"NO"` if he cant win.

# Spyke Talks
[**SUBMISSION**](http://codeforces.com/contest/291/submission/42757174)

In this problem, Polycarpus is trying to record his own secretaries work.\
It's only track the amount of secretaries with pair users.\
`0` if the secertaries only work with one user.\
And if he make a mistake, it prints `-1`.\
(Sorted with Cycle Sort)

INPUT\
The first line contain the amount of secretaries.\
The second line is the list of the of user id that is having a call session.

OUTPUT\
The number of pairs of chatting secretaries.

# Oath's of the Night Watch
[**SUBMISSION**](http://codeforces.com/contest/768/submission/42763364)

Jon Snow took and oath and now he is given a task to support the stewards.\
He will protect the stewards base on their strengts.\
He won't support the weakest and the strongest stewards.\
(Sorted with Shell Sort)

INPUT\
The first line contain the amount of stewards he's asigned to support.\
The second line contain the `strengths` of stewards.
```
low = min(strengths)
high = max(strengths)

for i in range(steward):
    if low < strengths[i] < high:
        supportable = supportable + 1
```
`low` is to check the weakest and `high` the strongest stewards.

OUTPUT\
The stewards Snow able to support -> `supportable`.

