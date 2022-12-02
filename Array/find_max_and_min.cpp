#include<iostream>
#include<limits.h>
using namespace std;
int get_max_from_Array(int arr[],int n){     
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,arr[i]);
    }
    return ans;
}


int get_min_from_Array(int arr[],int n){
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        ans=min(ans,arr[i]);
    }
    return ans;
     
}
int main(){
    int arr[100];
    int n;
    cout<<"enter the element of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum value is "<<get_max_from_Array(arr,n)<<endl;

    cout<<"minmum value is "<<get_min_from_Array(arr,n);

}
