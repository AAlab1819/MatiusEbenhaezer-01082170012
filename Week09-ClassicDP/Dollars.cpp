#include <bits/stdc++.h>
#define N 1000000

using namespace std;

int main ()
{
    int coins [] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};
    double dp [6001];
 
    memset (dp, 0, sizeof (dp));
 
    dp [0] = 1;
 
    for ( int i = 0; i < 11; i++ ) {
        for ( int j = 1; j <= 6000; j++ ) {
            if ( j - coins [i] >= 0 )
                dp [j] += dp [j - coins [i]];
        }
    }
 
    double c;
 
    while ( cin >> c ) {
        if ( c == 0 ) break;
        int index = c * 20;
 
        cout << c << " " << dp[index] << endl;
    }
 
    return 0;
}
