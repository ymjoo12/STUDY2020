#include <cstdio>
#include <vector>
using namespace std;

const int N_MAX = 9;

vector<int> V;
bool chosen[N_MAX];
int N, M;

void search()
{
    if (V.size() == M) {
        for (int v : V) printf("%d ",v);
        printf("\n");
    }
    else {
        for (int n = 1; n <= N; n++) {
            if (chosen[n]) continue;
            chosen[n] = true;
            V.push_back(n);
            search();
            chosen[n] = false;
            V.pop_back();
        }
    }
}

int main()
{
    scanf("%d %d",&N,&M);
    search();
    return 0;
}
