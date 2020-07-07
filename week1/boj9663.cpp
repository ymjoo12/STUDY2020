#include <iostream>
using namespace std;

const int N_MAX = 16;
bool col[N_MAX], diag1[N_MAX*2], diag2[N_MAX*2];
int cnt, N;

void search(int y)
{
    if (y == N) cnt++;
    else {
        for (int x = 0; x < N; x++) {
            if (col[x] || diag1[x+y] || diag2[x-y+N-1]) continue;
            col[x] = diag1[x+y] = diag2[x-y+N-1] = 1;
            search(y+1);
            col[x] = diag1[x+y] = diag2[x-y+N-1] = 0;
        }
    }
}

int main()
{
    cin >> N;
    search(0);
    cout << cnt << '\n';

    return 0;
}