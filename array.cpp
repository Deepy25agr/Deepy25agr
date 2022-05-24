#include<iostream>
using namespace std;

int main(){
 //int array[4]={10,20,30,40};
    int n;
    //define length of an array
    cin>>n;

    int array[n];
    for (int i=0;i<n;i++){
        // to take values of array from users
        cin>>array[i];
    }
    for (int i=0;i<n;i++){
        //to print array
        cout<<array[i]<<" ";
    } 


    //cout<<array[3]<<endl;

    return 0;

}