#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(arr, arr + n); 
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
