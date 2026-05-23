#include <iostream>
#include <vector>
using namespace std;

vector<int> add(vector<int>& a, vector<int>& b) {
    vector<int> c;
    int carry = 0,i = 0;        //carry是进位3的意思，i是数组下标

    while(i < a.size() || i < b.size() || carry) {
        int sum = carry;

        if(i < a.size())
            sum += a[i];

        if(i < b.size())
            sum += b[i];

        c.push_back(sum % 10);
        carry = sum / 10;
        i++;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;

    if(n == 0) {
        cout << "1" <<'\n';
        return 0;
    }

    if(n == 1) {
        cout << "1" <<'\n';
        return 0;
    }

    if(n == 2) {
        cout << "2" <<'\n';
        return 0;
    }
    
    vector<int>f1 = {1};           //f1相当于f[n-1],f2相当于f[n-2]
    vector<int>f2 = {2};
    vector<int>f3;

    for(int i = 3; i <= n; i++) {
        f3 = add(f1,f2);

        f1 = f2;                 //可以改成f1 = swap.(f2)   
        f2 = f3;                 //可以改成f2 = swap.(f3)    但要加头文件<utility>
    }

    for(int i = f3.size()-1; i >= 0; --i) {
        cout << f3[i];
    }

    cout << '\n';
    
    return 0;
}
