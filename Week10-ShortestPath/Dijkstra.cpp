#include <bits/stdc++.h>

using namespace std;

const int n = 1e5+5;
vector<pair<int,int>> graph[n];
int source[n];
long long distance[n] = {0};
bool visited[n] = {0};

void Dijkstra(int start) 
{
    typedef tuple<long long, int, int> path;
    long long cost;
    int destination, previous;
    priority_queue<path, vector<path>, greater<path>> q;
    q.push(make_tuple(0, start, -1));
    while(!q.empty()) {
        path now = q.top();
        q.pop();
        cost = get<0> (now);
        previous = get<2> (now);
        destination = get<1> (now);
        if(visited[destination]) {
            continue;
        } else {
            visited[destination] = true;
            source[destination] = previous;
            for(int i = 0; i <graph[destination].size(); i++) {
                if(visited[graph[destination][i].first] == false)
                q.push(make_tuple(cost + graph[destination][i].second, graph[destination][i].first, destination));
            }
        }
    }
}

void printPath(int destination) {
    if(source[destination] == -1) {
        cout << "-1";
    } else {
        stack<int> vertex;
        while(destination > 0) {
            vertex.push(destination);
            destination = source[destination];
        }
        while(!vertex.empty()) {
            cout << vertex.top() << " ";
            vertex.pop();
        }
    }
}

int main()
{
    int vertices, edges;
    int firstEdge, secondEdge, weights;
    for(int i = 0; i < n; i++) {
        source[i] = -1;
    }

    cin >> vertices >> edges;
    while(edges--) {
        cin >> firstEdge >> secondEdge >> weights;
        graph[firstEdge].push_back(make_pair(secondEdge, weights));
        graph[secondEdge].push_back(make_pair(firstEdge, weights));
    }
    Dijkstra(1);
    printPath(vertices);

    return 0;
}