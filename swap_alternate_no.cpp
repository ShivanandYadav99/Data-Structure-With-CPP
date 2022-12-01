#include<iostream>
using namespace std;
void alternate(int arr[],int n){
    int i=0;
    while(i<n){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
            
            }
            i=i+2;
    }
}
int main(){
    int arr[100],n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    alternate(arr,n);
    cout<<"after swapping value "<<endl;
    for(int i=0;i<n;i++){
    
    cout<<arr[i]<<endl;
    }

    
}
