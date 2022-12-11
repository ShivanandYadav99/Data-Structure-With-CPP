// print the prefix of given array
// example arr[5]={1,2,3,4,5} answer={1,3,6,10,15}

#include<iostream>
using namespace std;

void prefix_sum(int arr[],int size){
    int i=0;
    int sum=0;
    while(i<size){
         sum+=arr[i];
         cout<<sum<<" ";
         i++;
    }
}



int main(){
    int arr[100],size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the element"<<endl;
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }

     // function call
     prefix_sum(arr,size);
    
}