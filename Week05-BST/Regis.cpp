#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, int> name_list;
    string name;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;

        if (name_list[name] == 0) {
            name_list[name] = 1;
            cout << "OK" << endl;;
        }
        else {
            cout << name << name_list[name] << endl;
            name_list[name] += 1;
        }
    }
    return 0;
}