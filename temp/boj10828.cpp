#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

stack<int> ST;
int N, D;
char C[6];

int main()
{
    cin >> N;
    for (int n = 0; n < N; n++) {
        cin >> C;
        if (!strcmp(C,"push")) {
            cin >> D;
            ST.push(D);
        }
        else if (!strcmp(C,"pop")) {
            if (ST.empty()) cout << "-1\n";
            else {
                cout << ST.top() << '\n';
                ST.pop();
            }
        }
        else if (!strcmp(C,"size")) {
            cout << ST.size() << '\n';
        }
        else if (!strcmp(C,"empty")) {
            cout << ST.empty() << '\n';
        }
        else if (!strcmp(C,"top")) {
            if (ST.empty()) cout << "-1\n";
            else cout << ST.top() << '\n';
        }
    }
    return 0;
}