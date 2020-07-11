#include <cstdio>
using namespace std;

const int N_MAX = 11;
bool bl[N_MAX][N_MAX], d1[N_MAX*2], d2[N_MAX*2];
int cnt, mx, N;

void search(int yi)
{
    for (int y = yi; y < N; y++) {
        for (int x = 0; x < N; x++) {
            if (!bl[y][x] || d1[x+y] || d2[x-y+N-1]) continue;
            d1[x+y] = d2[x-y+N-1] = 1;
            cnt++;
            search(y);
            d1[x+y] = d2[x-y+N-1] = 0;
            cnt--;
        }
    }
    if (cnt > mx) mx = cnt;
}

int main()
{
    scanf("%d",&N);
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            scanf("%d",&bl[y][x]);
        }
    }
    search(0);
    printf("%d\n",mx);

    return 0;
}

