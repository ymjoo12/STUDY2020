#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int N, M;
vector<int> A;

void search(int ni)
{
    if (A.size() == M) {
        for (int a : A) {
            cout << a << ' ';
        }
        cout << '\n';
    }
    else {
        for (int n = ni; n <= N; n++) {
            A.push_back(n);
            search(n+1);
            A.pop_back();
        }
    }
}

int main()
{
    cin >> N >> M;
    search(1);

    return 0;
}
