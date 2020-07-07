#include <iostream>
#include <set>
#include <vector>
#include <cstring>
using namespace std;

int sq[7][7];
bool vis[7][7];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int D;
typedef vector<int> vc;
vc VC;
set<vc> S;
int cnt;

void search(int x, int y)
{
    if (D == 6) S.insert(VC);
    else {
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (sq[ny][nx] == -1) continue;
            VC.push_back(sq[ny][nx]);
            D++;
            search(nx,ny);
            VC.pop_back();
            D--;
        }
    }
}

int main()
{
    memset(sq,-1,sizeof(sq));
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> sq[i][j];
        }
    }
    for (int y = 1; y <= 5; y++) {
        for (int x = 1; x <= 5; x++) { 
            VC.push_back(sq[y][x]);
            D++;
            cnt = 0;
            search(x,y);
            VC.pop_back();
            D--;
        }
    }
    cout << S.size() << '\n';

    return 0;
}