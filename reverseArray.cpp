#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);

    /*int copyArr[n];                               //WITH EXTRA SPACE BY COPYING ARRAY THAN BACK TO ORIGINAL ARRAY
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyArr[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyArr[i];
    }*/



    int start=0;                                    //WITHOUT USING EXTRA SPACE BY SWAPPING
    int end=n-1;                       
    while(start<end){
        int temp=arr[start];                       //OR WE CAN SIMPLY USE : swap(arr[start],arr[end]);
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printArr(arr,n);
return 0;
}