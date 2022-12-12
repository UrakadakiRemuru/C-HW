#include <iostream>
#include <math.h>
using namespace std;

pair<int*, int> dyArr(){   // функция для записи массива
    int N = 100000;
    int l=0;
    int *arr = new int[N];

    for (int i=0; i<N; i++){
        int num;
        cin>>num;
        if (num!=0){
            l+=1;
           arr[i]=num;
        }else {
            break;
        }
    }

    int *arrn= new int[l];

    for (int i=0; i<l; i++){
        arrn[i] = arr[i];
    }
    delete []arr;
    return {arrn,l};
}

pair<int*, int> five(int array [], int size){ // функция редачить
    int l = 0;
    int *arr= new int[size];
    for (int i=0; i<size; i++){
        if (array[i]>=5){
            arr[l] = array[i];
            l +=1;
        }
    }
    int *arrn= new int[l];

    for (int i=0; i<l; i++){
        arrn[i] = arr[i];
    }
    delete []arr;
    return {arrn,l};
}


int main(){
    auto ans = dyArr();
    cout<<"task 1"<<endl;
    for (int i=0; i<ans.second; i++){
        cout<<ans.first[i]<<" ";
    }
    cout<<endl;
    cout<<"длина массива = "<<ans.second;
    cout<<endl;

    auto ans2 = five(ans.first, ans.second);
    delete []ans.first;
    cout<<"task 2"<<endl;
    for (int i=0; i<ans2.second; i++){
        cout<<ans2.first[i]<<" ";
    }
    cout<<endl;
    cout<<"длина массива = "<<ans2.second;


    return 0;
}