#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={{4,7,8},{8,8,7}};
    int n=2,m=3;

    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(arr[i][j]=7){
                count++;
            }
        }
    }
    cout<<"Number of 7's are="<<count<<endl;

return 0;
}