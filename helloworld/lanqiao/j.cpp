#include <iostream>
using namespace std;

int func(int r, int c, int l) {
        int count = 0;
        for (int i = 1; i <= l; i++) {
            if (chars[r - i][c - i] == chars[r][c] && chars[r + i][c - i] == chars[r][c]
                    && chars[r - i][c + i] == chars[r][c] && chars[r + i][c + i] == chars[r][c]) {
                count++;
            } else {
                break;
            }
        }
        return count;
    }
int main(){

	    int n,m;
        cin>>n>>m;
        char chars[n][m];
        for (int i = 0; i < n; i++) {
        	for (int j = 0; j < m; j++) {
            	cin>>chars[i][j];
        	}
        }
        int count = 0;
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < m - 1; j++) {
                int l = min(i,j);
                l = min(l,n-i - 1);
                l = min(l,m-j - 1);
                count += func(i, j, l);
            }
        }
        cout<<count;
        return 0;
}

