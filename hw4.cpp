#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>v;
    string str;
    while(cin>>str){
        v.push_back(str);
    }
    sort(v.begin(),v.end());
    
    for(auto str:v){
        cout<<str<<" ";
    }
    return 0;
    
}
