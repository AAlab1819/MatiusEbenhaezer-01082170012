# Find the Running Median

INPUT\
The first line is `n` amount of numbers\
Then input the number.\
`heapify` the numbers on `List` and sorted by `heapSort`.

OUTPUT\
If the amount of numbers on the list is even,the `median` is the average of the 2 number in the middle (more than 2 numbers)\
And if the amount of numbers on the list is odd, output the median on the sorted list.

Example:\
n = 5\
4, 5, 3, 8, 7

The output will be
1. 4 (alone)
2. average of 4 5 which is 4.5
3. 3, 4, 5 -> median = 4
4. 3, 4, 5, 8 -> average of the middle elements 4, 5 = 4.5
5. The List sorted with median = 5

So the output will be -> 4, 4.5, 4, 4.5, 5.

Complexity\
Worst Case = O(n log n)

# Roy and Trending Topics
In this problem Roy trying to make a widget that shows Trending Topics.\
It's contain Topic ID and z-score.

The z-score change everyday according to these rules:
1. Mentioned(+50)
2. Like(+5)
3. Comments(+10)
4. Shared(+20)

INPUT\
First line `n` (amount of topic)\
Input `id`(Topic ID), `z`(current z-score), `p`(Post), `l`(Likes), `c`(Comments), `s`(Shares).

OUTPUT\
The trending topics by `changes`.\
Each line contain Topic id and New z-score (5 times).\
If there are id with same score, the bigger `id` wins.

Complexity\
Worst Case = O(n log n)


