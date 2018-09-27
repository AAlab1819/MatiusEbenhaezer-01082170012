#include <bits/stdc++.h>

using namespace std;

int size[1000000] = {0};
int arrayIndexMap[1000][1000] = {0};
int arrayIndex = 1;
int pictures = 0;

void flood(string symbol[], int n, int m, int x, int y)
{
    arrayIndexMap[y][x] = arrayIndex;
    
    if(y+1<n) {
        if(symbol[y+1][x] == '.' && arrayIndexMap[y+1][x] == 0) {
            flood(symbol, n, m, x, y+1);
        } else if(symbol[y+1][x] == '*') {
            pictures++;
        }
    }
    if(y-1>=0) {
        if(symbol[y-1][x] == '.' && arrayIndexMap[y-1][x] == 0) {
            flood(symbol, n, m, x, y-1);
        } else if(symbol[y-1][x] == '*') {
            pictures++;
        }
    }
    if(x+1<m) {
        if(symbol[y][x+1] == '.' && arrayIndexMap[y][x+1] == 0) {
            flood(symbol, n, m, x+1, y);
        } else if(symbol[y][x+1] == '*') {
            pictures++;
        }
    }
    if(x-1>=0) {
        if(symbol[y][x-1] == '.' && arrayIndexMap[y][x-1] == 0) {
            flood(symbol, n, m, x-1, y);
        } else if(symbol[y][x-1] == '*') {
            pictures++;
        }
    }
    
    return;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    string symbol[n];
    for(int i=0; i<n; i++) {
        cin>>symbol[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(symbol[i][j] == '.' && arrayIndexMap[i][j] == 0) {
                arrayIndex++;
                pictures = 0;
                flood(symbol, n, m, j, i);
                size[arrayIndex] = pictures;
            }
        }
    }
    for(int i=0; i<k; i++) {
        cin >> y >> x;
        cout << size[arrayIndexMap[--y][--x]] << endl;
    }

    return 0;
}