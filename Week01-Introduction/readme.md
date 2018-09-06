# Tricky Alchemy
[**SUBMISSION**](https://codeforces.com/contest/912/submission/42497686)

In this problem, Grisha need to obtain some yellow `YB`, geeen `GB`, and blue `BB` balls.\
Grisha need Yellow and Blue Crystals to make those balls.\
`YC = Yellow Crystal`
`BC = Blue Crystal`

YB can be created by 2 YC, GB by one of both YC and BC, and BB by 3 BC.

INPUT\
Amount of Yellow and Blue Crystals on Grisha :\
`YC, BC = map(int, input().split())`  
Amount of Yellow, Green, and Blue Balls to make :\
`YB, GB, BB = map(int, input().split())`  

OUTPUT\
Amount of Yellow and Blue Crystal required to make the balls Grisha wants.\
YCR , BCR = Amount of Yellow Crystal (YCR) and the Blue Crystal Reuqired (BCR)

`YCR = 2 * YB + GB`\
`BCR = GB + 3 * BB`

Print out the required Yellow and Blue crystals by :\
`print(max(0,YCR-YC) + max(0, BCR-BC)`

# Fraction
[**SUBMISSION**](https://codeforces.com/contest/854/submission/42497183)

Petya just learned fraction.\
He learned that a fraction is a proper one if the Numerator `N` is smaller than its Denominator `D` ( `N < D` ).\
The fraction is irreduccible if its numerator and denominator are coprime.\
He mistakenly use a calculator and got sum of numerator and the denominator equal to `n`.

INPUT\
The sum of the numerator and denominator ( `n` ).

`if n % 2 == 1:` -> `n` is an odd number\
`N = n // 2` -> using floor division for the odd number (example: 3 / 2 = 1.5 | 3 // 2 = 1)\
and if the `n` is an even number, substract the `N` by 1.

OUTPUT\
The `N` -> Numerator and `D` -> Denominator that form an irreduccible fraction.


# Diverse Team
[**SUBMISIION**](https://codeforces.com/contest/988/submission/42549000)

A class with `n` sutdents of various rating need to form a team consisting of `k` (size of the team) , and the ratings of all team members are distinct.

INPUT\
`n` and `k`.

`a` is a list of various rating of students.

OUTPUT\
`b` list is used as an index method to search the element `i` of the `a` list.

Print `"NO"` if its impossible to form a suitable team.

Print `"YES"` if it is possible to form the team and\
`print(a.index(b[i]) + 1, end = ' ')` to print the index from all kind of ratings.







