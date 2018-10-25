#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    int b = 0;
    int c = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a;

        if(a > 0) {
            b = b + a;
        }
        else {
            c = c + a;
        }
    }

    cout << b - c;
    return 0;
}