#include<iostream>
using namespace std;

int linearSearch(int *arr,int n,int key){            //LINEAR SEARCH
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int binSearch(int *arr,int n, int key){             //BINARY SEARCH
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    //cout<<linearSearch(arr,n,40)<<endl;
    cout<<binSearch(arr,n,50)<<endl;

return 0;
}