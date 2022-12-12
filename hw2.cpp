#include <bits/stdc++.h>
#include <vector>

using namespace std;

void print_vector(vector<vector<double>> M){
    int N = M.size();
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N;j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
}

}

double det(vector<vector<double>> M){
    double answer = 1;
    int N = M.size();
    for(int j = 0; j<N; j++){
        for(int i = j+1; i<N; i++){
            double m = M[i][j]/M[j][j];
            for(int k = 0; k<N; k++){
                M[i][k] = M[i][k] - m*M[j][k];
                
            }

        }
    }
    for(int i = 0; i<N; i++){
        answer*=M[i][i];
    }
    return answer;

}


int main(){
    int N;
    cin>>N;
    vector<vector<double>>M;

    for (int i = 0; i<N; i++)
    { 
        M.push_back(vector<double>(N, 0));
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            M[i][j] = rand()%20;
        }
    }


    print_vector(M);
    cout<<endl;
    double answer = det(M);
    cout<<endl;
    cout<<"Определитель матрицы = "<<answer;

    return 0;
}