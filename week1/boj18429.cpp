#include <iostream>
using namespace std;

const int N_MAX = 9;
bool vis[N_MAX];
int A[N_MAX];
int N, K, cnt, V, W;

void search()
{
    if (V == N) cnt++;
    else {
        for (int i = 1; i <= N; i++) {
            if (vis[i] || W + A[i] - K < 0) continue;
            W += A[i] - K;
            vis[i] = 1;
            V++;
            search();
            W -= A[i] - K;
            vis[i] = 0;
            V--;
        }
    }
}

int main()
{
    cin >> N >> K;
    for (int n = 1; n <= N; n++) 
        cin >> A[n];
    search();
    cout << cnt << '\n';

    return 0;
}