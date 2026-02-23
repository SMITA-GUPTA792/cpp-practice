#include<iostream>
using namespace std;
int main(){
    int student[3][3]={{100,100,100},{85,74,89},{63,72,65}};
    cout<<student[1][1]<<endl;

    int arr[3][4];
    int n=3,m=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}