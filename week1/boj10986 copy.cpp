#include <cstdio>
using namespace std;

const int N_MAX = 1'000'001;
const int A_MAX = 1'001;
int N, M, cnt, t;
int A[N_MAX], S[N_MAX];

int main()
{
    scanf("%d %d",&N,&M);
    for (int n = 1; n <= N; n++) {
        scanf("%d",&t);
        t %= M;
        A[n] = t;
        S[n] = (S[n-1] + t) % M;
        if (!t) cnt++;
    }
    for (int i = 2; i <= N; i++) {
        for (int n = 0; n+i <= N; n++) {
            if ((S[n+i] - S[n]) % M == 0) cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}