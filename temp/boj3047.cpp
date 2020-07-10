#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int abc[4];
char ord[4];

int main()
{
    for (int i = 0; i < 3; i++) {
        cin >> abc[i];
    }
    sort(abc,abc+3);
    cin >> ord;
    for (int i = 0; i < 3; i++) {
        cout << abc[ord[i]-'A'] << ' ';
    }

    return 0;
}