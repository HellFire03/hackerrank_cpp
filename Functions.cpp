#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d){
     return max({a,b,c,d});
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}
