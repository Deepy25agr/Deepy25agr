#include<iostream>
using namespace std;


  /*  //calling by value
    void swap(int a,int b){
        int temp=a;
        a=b;
        b=temp;
    }
    int main(){
        int a=2;
        int b=4;
        swap(a,b);
        //it will not swap the values as only value will be called not variables
        cout<<a<<endl; //2
        cout<<b<<endl; //4
    }
  */


//calling by reference by sending the address of our variable and modifying nd accessing them with use of pointers
void swap(int *a, int *b){   
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=2;
    int b=4;
    int *aptr=&a;         //need not to write this
    int *bptr=&b;         //need not to write this
    swap(aptr,bptr);      //we can directly do this swap(&a,&b)
    cout<<a<<" "<<b<<endl;
}
