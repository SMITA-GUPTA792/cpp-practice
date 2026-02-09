#include<iostream>
using namespace std;
int main(){
    /*int marks[5]={23,56,98,3,67};
    marks[3]=57;
    int size=5;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    cout<<sizeof(marks)<<endl;     //20
    cout<<sizeof(marks)/sizeof(int)<<endl;*/     //5


    //loops:
    /*int size=5;
    int marks[size];
    for(int i=0;i<=size;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=size;i++){
        cout<<marks[i]<<endl;
    }*/



    //SMALLEST AND LARGEST IN ARRAY:
    
    int arr[]={5,15,22,1,-15,-24};
    int size=6;

    //int smallest=INT_MAX;
    //int largest=INT_MIN;
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        //smallest=min(nums[i],smallest);
        //largest=max(nums[i],largest);
    }
    //cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<max<<endl;
return 0;
}