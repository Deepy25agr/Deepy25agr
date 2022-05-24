#include<iostream>
using namespace std;

int main(){
    int n,m;
    // n is no of rows
    // m is no coloumns
    cin>>n>>m;
    int arr[n][m];
    //taking input from the user
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrices is: "<<endl;
    //printing the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
    
}