#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int T, i, j;
    cin >> T;
    while(T--) {
        int N, P, W, G, MaxW, Ans = 0;
        int DP[31] = {};
        cin >> N;
        for(i = 0; i < N; i++) {
            cin >> P >> W;
                for (j = 30; j >= W; j--)
                    if(DP[j] < DP[j - W] + P)
                        DP[j] = DP[j - W] + P;
        }
            cin >> G;
            while(G--) {
                cin >> MaxW;
                Ans += DP[MaxW];
            }
            cout << Ans << endl;
        } 
    return 0;
}