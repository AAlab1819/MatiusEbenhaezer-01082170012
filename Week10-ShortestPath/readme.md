# The Two Routes
[**SUBMISSION**](http://codeforces.com/contest/601/submission/45770896)

INPUT\
First line contain `n` and `railways`.\
Then each `railways` contains two integers u and v which is a railway between towns u and v.\
If there is no railways connecting the towns, use a bus to go there.\
Check if there is a railways to `n` town.\
Find the shortest path with BFS.

OUTPUT\
If it's impossible to reach the town,  print `-1`.

Complexity:\
Worst Case : O(n^2)

# Dijkstra?
[**SUBMISSION**](http://codeforces.com/contest/20/submission/45774268)

The problem is to find the shortest path or the best way from the vertices to `n`.\
Using Dijkstra algorithm to find the best way. The path is also determined by the least weights from the first vertices to `n`.

INPUT\
First line contains amount of vertices and edges.\
Then the following edges is the sources (`firstEdge`), destination (`secondEdge`), and then the price (`weights`).

OUTPUT\
The vertices with the best way to `n` by Dijkstra Algorithm.

Complexity:\
Worst Case : O(n log n).    
