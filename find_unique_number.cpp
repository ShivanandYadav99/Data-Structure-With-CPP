//find the unique number
#include<iostream>
using namespace std;
int findUniqueNumber(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){

        ans=ans^arr[i];              // a^a=0

    }

    return ans;
}

int main(){
    int n,arr[100];
    cout<<"enter the size of element "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        
        cout<<"unique number is \n"<<findUniqueNumber(arr,n)<<endl;
}