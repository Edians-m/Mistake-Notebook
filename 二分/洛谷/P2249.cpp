#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int solve(vector<ll>& a, int num) {
    int left = 1, right = a.size() - 4;

    while(left < right) {
        int mid = left + (right - left) / 2;

        if(a[mid] >= num) {
            right = mid;
        }else {
            left = mid + 1;
        }
    }

    if(a[left] == num)
            return left;
        return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n + 5,0);
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    while(m--) {
        int num;
        cin >> num;

        cout << solve(a,num) << ' ';
    }
}


//   https://www.luogu.com.cn/problem/P2249#ide
