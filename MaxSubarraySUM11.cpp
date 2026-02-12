#include<iostream>
using namespace std;

void maxSubarraySum(int*arr,int n){                                //BRUTE FORCE APPROACH-----T.C=O(n^3)
    int maxsum=INT_MIN;
    
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int currSum=0;
            for(int i=st;i<=end;i++){
                currSum += arr[i];
            }
            cout<<currSum<<",";
            maxsum=max(maxsum,currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum Subaaray sum="<<maxsum<<endl;
}


void maxSubarraySum2(int*arr,int n){                                //OPTIMISED------T.C=O(n^2)
    int maxsum=INT_MIN;

    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum += arr[end];
            maxsum=max(maxsum,currSum);
        }
        cout<<endl;
    }
     cout<<"Maximum Subaaray sum="<<maxsum<<endl;
}


void maxSubarraySum3(int*arr,int n){                                 //KADANE'S ALGORITHM-----T.C=O(n)
    int maxsum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxsum=max(currSum,maxsum);
        if(currSum<0){
            currSum=0;
        }
    }
     cout<<"Maximum Subaaray sum="<<maxsum<<endl;

}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    //maxSubarraySum(arr,n);
    //maxSubarraySum2(arr,n);
    maxSubarraySum3(arr,n);
return 0;
}