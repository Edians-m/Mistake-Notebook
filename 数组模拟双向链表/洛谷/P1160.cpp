#include <iostream>
using namespace std;

const int MAX = 100010;

int r[MAX], l[MAX];
bool b[MAX] = {false};

int main()
{
    int n;
    cin >> n;
    
    r[0] = 1;
    r[1] = n+1;
    l[1] = 0;
    l[n+1] = 1;

    for(int i = 2; i <= n; i++) {
        int k, p;
        cin >> k >> p;

        if(p == 0) {
            int temp = l[k];
            l[k] = i;
            r[i] = k;
            l[i] = temp;
            r[temp] = i;
        }else{
            int temp = r[k];
            r[k] = i;
            l[i] = k;
            r[i] = temp;
            l[temp] = i;
        }
    }

    int m;
    cin >> m;

    while(m--) {
        int x;
        cin >> x;

        if(!b[x]) {
            r[l[x]] = r[x];
            l[r[x]] = l[x];
            b[x] = true;
        }
    }

    for(int i = r[0]; i != n+1; i = r[i])
        cout << i << " ";
    cout << '\n';
}
