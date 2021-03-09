#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int n;
    string arr[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (n>9) cout<<arr[0];
    else cout<<arr[n];
    return 0;
}
