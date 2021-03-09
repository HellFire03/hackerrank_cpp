#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    int temp = *a;
    (*a) +=(*b);
    (*b) = abs(temp-(*b));   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    update(pa, pb);
    cout<<a<<"\n"<<b;
    return 0;
}