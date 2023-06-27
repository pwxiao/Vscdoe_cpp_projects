#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Gold {
    int x, y, t, v;
};

bool compareByCoordinates(const Gold& gold1, const Gold& gold2) {
    return gold1.x < gold2.x || (gold1.x == gold2.x && gold1.y < gold2.y);
}

int main() {
    int N, T;
    cin >> N >> T;

    vector<Gold> golds(N);
    for (int i = 0; i < N; i++) {
        cin >> golds[i].x >> golds[i].y >> golds[i].t >> golds[i].v;
    }

    sort(golds.begin(), golds.end(), compareByCoordinates);

    vector<int> dp(T + 1, 0);

    for (int i = 0; i < N; i++) {
        for (int j = T; j >= golds[i].t; j--) {
            dp[j] = max(dp[j], dp[j - golds[i].t] + golds[i].v);
        }
    }

    cout << dp[T] << endl;

    return 0;
}
