#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    //start
    int s=0;
    //end
    int e=n;
    while(s<=e){
        //initializing middle element of the array 
        int mid=(s+e)/2;
        //if middle value will be the same key that user want to access it will return mid value
        if (arr[mid]==key){
            return mid;

        }
        //if middle value is greater than key value then mid value will be decremented by one that equals to end value
        else if(arr[mid]>key){
            e=mid-1;
        }
        //if middle value is greater than key value then mid value will be incremented by one that equals to start value
        else{
            s=mid+1;
        }
        
    
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarysearch(arr,n,key)<<endl;
    
     






    return 0;
}