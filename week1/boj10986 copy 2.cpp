#include <cstdio>
using namespace std;

const int M_MAX = 1'001;
int N, M, A, S;
long long cnt, C;
int R[M_MAX];

int main()
{   
    R[0] = 1;
    scanf("%d %d",&N,&M);
    for (int n = 1; n <= N; n++) {
        scanf("%d",&A);
        A %= M;
        S = (S+A)%M;
        R[S] += 1;
    }
    for (int m = 0; m < M; m++) {
        C = R[m];
        cnt += C*(C-1)/2;
    }
    printf("%lld\n",cnt);

    return 0;
}