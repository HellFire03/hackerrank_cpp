#include <bits/stdc++.h>
using namespace std;

int len(string var){
    return var.size();
}

string add(string a, string b){
    return a+b;
}

void swap(string &a, string &b){
    int temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b,temp;
    cin>>a >> b;
    cout << len(a)<<" "<<len(b)<<"\n"<<add(a,b)<<"\n";
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
