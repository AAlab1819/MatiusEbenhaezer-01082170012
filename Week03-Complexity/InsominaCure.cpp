#include <stdc/bits++.h>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int damaged = 0;
    for(int i = 0; i <= d; i++){
        if( i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
            damaged = damaged + 1
        }
    }
    cout << damaged << endl;
}