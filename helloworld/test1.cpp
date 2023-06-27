// 答案：12
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int n = 101;
int a[n][n];

void init() {
    a[1][1] = 1;
    // 构建初始矩阵
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i > 1) a[i][j] = a[i - 1][j] + 1;
            else if (j > 1) a[i][j] = a[i][j - 1] + 2;
        }
    }
    // 构建前缀和
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            a[i][j] += a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1];
        }
    }
}

// 获取 [i][j] 到 [x][y] 之间子矩阵的和
int getSum(int i, int j, int x, int y) {
    return a[x][y] - a[x][j - 1] - a[i - 1][y] + a[i - 1][j - 1];
}

signed main() {
    init();
    int ans = n * n;
    for (int i = 1; i < n; i ++) {
        for (int j = 1; j < n; j ++) {
            for (int x = i; x < n; x ++) {
                for (int y = j; y < n; y ++) {
                    int tmp = getSum(i, j, x, y);
                    if (tmp == 2022)
                        ans = min(ans, (x - i + 1) * (y - j + 1));
                    else if (tmp > 2022)	// 超过 2022 可以剪枝
                        break;
                }
            }
        }
    }
    cout << ans << endl;
    cout<<getSum(1,1,2,3);
    return 0;
}
