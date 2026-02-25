#include<iostream>
using namespace std;

bool search(int mat[][4],int n,int m,int key){
    int r=0;
    int c=n-1;
        while(r<n && c>=0){
            if(mat[r][c]==key){
                cout<<"Found at cell (" <<r<<","<<c<<")\n";
                return true;
            }else if(mat[r][c]<key){
                r++;
            }else{
                c--;
            }
        }
        cout<<"Not found key\n";
        return false;
}


int main(){
    int matrix[4][4]={{10,20,30,40},{15,25,35,45},
                    {27,29,37,48},{32,33,39,50}};
    search(matrix,4,4,33);
return 0;
}