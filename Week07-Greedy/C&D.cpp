#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sessions;
    cin >> sessions;
    
    int pizza[sessions];
    for(int i = 0; i < sessions; i ++) {
        cin >> pizza[i];
    } 

    bool possible = true;
    for(int i = 0; i < sessions; i++) {
        if(pizza[i] < 0) {
            possible = false;
        }
        pizza[i+1] -= pizza[i]%2;
    }
    if (pizza[sessions - 1] % 2 == 1) {
        possible = false;
    }

    if(possible == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}