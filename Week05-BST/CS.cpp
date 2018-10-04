#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vertices, parent, leaves; 
    bool isSpruce = true;
    cin >> vertices;
    map <int, vector <int> > tree;
    
    for(int i = 2; i <= vertices; i++) {
        cin >> parent;
        tree[parent].push_back(i);
    }
    for(int i = 1; i <= vertices ; i++) {
        if(tree[i].size() == 0) continue;
        else {
            leaves = 0;
            for(int j = 0; j < tree[i].size(); j++) {
                if(tree[tree[i][j]].size() == 0)
                        leaves++;
                }
                if(leaves < 3) isSpruce = false;    
            }
        }
        if(isSpruce) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
        return 0;
}