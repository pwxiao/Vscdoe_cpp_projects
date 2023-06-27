#include <iostream>
using namespace std;

const int MAXN = 305;
int n, ans;
int map[MAXN][MAXN];
bool vis[MAXN][MAXN];

// DFS遍历当前湖泊
void dfs(int x, int y, int &area) {
    if (x < 1 || x > n || y < 1 || y > n || map[x][y] == 1 || vis[x][y]) {
        return;
    }
    vis[x][y] = true;
    area++;
    dfs(x - 1, y, area);
    dfs(x + 1, y, area);
    dfs(x, y - 1, area);
    dfs(x, y + 1, area);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> map[i][j];
        }
    }
    // 遍历地图，找到湖泊
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (map[i][j] == 0 && !vis[i][j]) {
                int area = 0;
                dfs(i, j, area);
                ans = max(ans, area);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
