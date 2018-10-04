# Party
[**SUBMISSION**](http://codeforces.com/contest/115/submission/43785877)

INPUT\
First line contain how many employees there is. (`n`)\
Then input the employees.
```
Example:
n = 5
Based on the depth of the tree:
-1, 1, 2, 3, -1

depth(1)	1->(-1)		5->(-1)
		|
depth(2)	2->(1)
		|
depth(3)	3->(2)
		|
depth(4)	4->(3)
```
OUTPUT\
The `ans` is `max(depth, ans)`\
So in the example above there are 4 groups.

Complexity:\
Worst Case = O(n log n)

# Christmas Spruce
[**SUBMISSION**](http://codeforces.com/contest/913/submission/43726444)

INPUT\
The Tree is Spruce if every parent on the tree has 3 children .\
```
Example if it is Spruce:
	1
      / | \ 
     2  3  4
Example if it isn't Spruce:

	1
       / \
      2   3
```

OUTPUT\
If the tree is spruce, print `"Yes"`\
If not, print `"No"`

Complexity:\
Worst Case = O(n log n)

# Registration System
[**SUBMISSION**](http://codeforces.com/contest/4/submission/43728001)

INPUT\
Input the amount of names. (`n`)\
And then register the names

OUTPUT\
If the name registred the first time, it will show `"OK"`\
The names that's already registered will be outputed:\
`cout << name << name_list[name] << endl;`
```
Example:
n = 5  //There are 4 names to be registred
Lea
OK
Leo
OK
Lex
OK
Leo
Leo1
Leo
Leo2
```

Complexity:\
Worst Case = O(n log n)
