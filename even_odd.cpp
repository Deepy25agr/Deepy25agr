#include<iostream>
using namespace std;

void check_num(int n){
    if (n%2==0){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number";
    }
}

int main(){

    int n;
    cout<<"enter the number ";
    cin>>n;

    cout<<check_num(n)<<endl;
    


    return 0;
}