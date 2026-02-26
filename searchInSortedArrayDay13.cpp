#include<iostream>
using namespace std;

bool search(int mat[][4],int n,int m,int key){                               //STAIR CASE SEARCH METHOD---T.CO(n+m)
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

bool bruteforceSearch(int mat[][4],int n,int m,int key){                //BRUTE FORCE APPROACH---T.C=O(n*m)
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                cout<<"Found at cell (" <<i<<","<<j<<")\n";
                return true;
            }
        }
    }
    cout<<"Key not found\n";
    return false;
}

int main(){
    int matrix[4][4]={{10,20,30,40},{15,25,35,45},
                    {27,29,37,48},{32,33,39,50}};
    search(matrix,4,4,33);
    bruteforceSearch(matrix,4,4,129);
return 0;

}
