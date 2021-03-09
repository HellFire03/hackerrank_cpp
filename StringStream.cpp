#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    int number;
    vector<int> vec;
    while (ss >> number){
        vec.push_back(number);
            if (ss.peek() == ','){
                ss.ignore();
            }
    }
return vec;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}