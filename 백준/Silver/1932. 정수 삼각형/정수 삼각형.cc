#include <iostream>
#include <algorithm>

using namespace std;

int arr[501][501];
int main(){
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) {
            cin >> arr[i][j];
            arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
        }
    }
    for(int i = 1; i <= n; i++){
        if(arr[n][i] > ans) ans = arr[n][i];
    }
    cout << ans;
}