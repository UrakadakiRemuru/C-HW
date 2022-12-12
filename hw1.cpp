
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N][N];
    
    int n=1;
    int i=0, j=0;
    int top=0, right=N, bottom=N, left=0;
    while (n<=N*N) {
        A[i][j]=n;
        if(i==top&&j<right-1){
            j++;
            //cout<<1<<" "<<n;
        }
        else if(j==right-1&&i<bottom-1){
            i++;
            //cout<<2<<" "<<n;
        }
        else if(i==bottom-1&&j>left){
            j--;
            //cout<<3<<" "<<n;
        }
        else{
            i--;
            //cout<<4<<" "<<n;
        }
        n++;
        if(i==top+1&&j==left){
            top++;
            right--;
            bottom--;
            left++;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout.width(4);
            cout<<A[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
}
