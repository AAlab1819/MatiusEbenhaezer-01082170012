#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int v, liters, required;
    long long int ans = 4e18, total = 0;
    cin >> v >> liters;
    int a[v];
    for(int i = 0; i < v; i++) {
        cin >> a[i];
    }
    for(int i = 1; i < v; i++) {
        if(a[i] > 2*a[i - 1]) {
            a[i] = 2 * a[i - 1];
        }
    }
    for(int i = v-1; i >= 0; i--) {
        required = liters / (1<<i);
        total += (long long) required * a[i];
        liters -= required << i;
        ans = min(ans, total + (liters>0) * a[i]);
    }
    cout << ans << endl;
    return 0;
}