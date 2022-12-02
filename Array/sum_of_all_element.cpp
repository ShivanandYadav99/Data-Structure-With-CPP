// sum of all element vof array
#include<iostream>
using namespace std;
int sum_of_all_element(int arr[],int n){
      
      int sum=0;
      for(int i=0;i<n;i++){
        sum+=arr[i];
      }
       return sum;
}


int main(){
    int arr[100];
    int size;
    cout<<"enter te size of Array"<<endl;
    cin>>size;
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<sum_of_all_element(arr,size);
}
