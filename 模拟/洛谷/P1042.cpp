#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void solve(string str, int target) {
    int sumw = 0, suml = 0;

    for(char c : str) {
        if(c == 'W') sumw++;
        else if(c == 'L') suml++;

        if((sumw >= target || suml >= target)  &&  abs(sumw - suml) >= 2) {
            cout << sumw << ":" << suml << "\n";
            sumw=0;
            suml=0;
        }
    }

    cout << sumw << ":" << suml << "\n";
}

int main() {
    string str;
    char c;

    while(cin >> c && c != 'E')
        str += c;

    solve(str,11);

    cout << "\n";

    solve(str,21);
}
