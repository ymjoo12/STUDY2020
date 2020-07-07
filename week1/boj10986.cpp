#include <cstdio>
using namespace std;

const int N_MAX = 1'000'001;
int N, M, cnt, Si, S;
int A[N_MAX];

int main()
{
    scanf("%d %d",&N,&M);
    for (int n = 1; n <= N; n++) {
        int t;
        scanf("%d",&t);
        A[n] = t%M;
        if (t%M == 0) cnt++;
    }
    for (int i = 1; i <= N; i++) {
        Si = (Si+A[i-1]) % M;
        S = Si;
        for (int n = i; n <= N; n++) {
            S = (S - A[n-i] + A[n]) % M;
            if (!S) cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}