#include <iostream>
#include <vector>
using namespace std;

const int N_MAX = 21;
vector<int> DP[N_MAX];
int A[N_MAX];
int N, S, cnt;

void search()
{
    for (int n = 1; n <= N; n++) {
        int now = A[n];
        for (int i = 0; i < n; i++) {
            for (int m : DP[i]) {
                int tmp = m + now;
                if (tmp == S) cnt++;
                DP[n].push_back(tmp);
            }
        }    
    }
}

int main()
{
    DP[0].push_back(0);
    cin >> N >> S;
    for (int n = 1; n <= N; n++) {
        cin >> A[n];
    }
    search();
    cout << cnt << '\n';

    return 0;
}