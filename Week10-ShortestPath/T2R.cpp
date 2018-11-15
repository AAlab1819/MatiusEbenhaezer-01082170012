#include <bits/stdc++.h>

using namespace std;

int n;
queue<int> q;
int BFS(vector < vector<int> > town)
{
    bool *visited = new bool[n+1];
    int ans [n+1];

    for(int i = 1; i <= n; i++) {
        ans[i] = 0;
    }
        for(int i = 1; i <= n; i++) {
            visited[i] = false;
        }
    q.push(1);

    visited[1] = true;

    int x = 1;
    int a;
    while(!q.empty()) {
        a = q.front();
        q.pop();

        for(int i = 1; i <= n; i++) {
            if(town[a][i]) {
                if(!visited[i]) {
                    ans[i] = ans[a] + 1;
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        x++;
    }

    return ans[n];
}

int main()
{
    int railways;
    cin >> n >> railways;

    vector< vector<int> > town(n+1, vector<int> (n+1));
    
    vector< vector<int> > route(n+1, vector<int> (n+1));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            town[i][j] = 0;
        }
    }
    for(int i = 1; i <= railways; i++) {
        int depart, arrival;
        cin >> depart >> arrival;

        town[depart][arrival] = 1;
        town[arrival][depart] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            route[i][j] = 1 - town[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        route[i][i] = 0;
    }

    if( BFS(route) != 0 && BFS(town) != 0)
        cout << max(BFS(route), BFS(town));
    else
        cout << "-1" << endl;
}