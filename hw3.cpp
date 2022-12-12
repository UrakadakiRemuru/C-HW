#include <bits/stdc++.h>
using namespace std;


int number(vector<int>M, int n){

    for(int i = 0; i<M.size(); i++){
        if (M[i]==n) {
            return i;
        };
    }
    return -1;
}

int main(){
    vector<vector<int>>M;
    M.resize(2);
    
    int n, num;

    while (cin>>n){
        num = number(M[0] ,n);
        if( num == -1){
            M[0].push_back(n);
            M[1].push_back(1);
        }
        else{
            M[1][num]++;
        }
    }
    for(auto n:M[0]) cout<<n<<" ";
    cout<<endl;
    for(auto n:M[1]) cout<<n<<" ";

    return 0;
}