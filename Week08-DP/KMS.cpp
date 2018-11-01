#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, questions, type , l, r, i;
    long long int a[100100], b[100100], c[100100];
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> a[i];
        b[i+1] = a[i] + b[i];
    }
    sort(a, a+n);
    for(i = 0; i < n; i++) {
        c[i+1] = a[i] + c[i];
    }
     cin >> questions;
     while(questions--)
     {
         cin >> type >> l >> r;
         if(type == 1) {
             cout << b[r] - b[l - 1] << endl;
         } else {
             cout << c[r] - c[l - 1] << endl;
         }
     }
     return 0;
}