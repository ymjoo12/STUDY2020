#include <iostream>
#include <deque>
#include <cstring>
using namespace std;

deque<int> DQ;
int N, D;
char C[11];

int main()
{
    cin >> N;
    for (int n = 0; n < N; n++) {
        cin >> C;
        if (!strcmp(C,"push_front")) {
            cin >> D;
            DQ.push_front(D);
        }
        else if (!strcmp(C,"push_back")) {
            cin >> D;
            DQ.push_back(D);
        }
        else if (!strcmp(C,"pop_front")) {
            if (DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        }
        else if (!strcmp(C,"pop_back")) {
            if (DQ.empty()) cout << "-1\n";
            else {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        }
        else if (!strcmp(C,"size")) {
            cout << DQ.size() << '\n';
        }
        else if (!strcmp(C,"empty")) {
            cout << DQ.empty() << '\n';
        }
        else if (!strcmp(C,"front")) {
            if (DQ.empty()) cout << "-1\n";
            else cout << DQ.front() << '\n';
        }
        else if (!strcmp(C,"back")) {
            if (DQ.empty()) cout << "-1\n";
            else cout << DQ.back() << '\n';
        }
    }
    return 0;
}