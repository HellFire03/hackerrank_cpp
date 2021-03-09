#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int a,b;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin >>a>>b;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=a;i<=b;i++){
        if (i<=9) cout<<arr[i]<<"\n";
        else {
            if(i%2==0) cout<<"even\n";
            else cout<<"odd\n";
        }
    }
    return 0;
}
