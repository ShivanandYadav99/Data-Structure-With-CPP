#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        //swap(arr[i],arr[j]); // inbuilt finction
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
        for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
