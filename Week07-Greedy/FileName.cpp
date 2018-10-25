#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, xxx = 0;
    string fileName;

    cin >> l;
    cin >> fileName;

    for(int i = 0; i < l; i++) {
        if(fileName[i] == 'x' && fileName[i+1] == 'x' && fileName[i+2] == 'x') {
            xxx++;
        }
    }
    cout << xxx;
}