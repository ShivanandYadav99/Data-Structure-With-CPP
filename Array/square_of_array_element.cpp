// square of given array element

#include<iostream>
using namespace std;


int main(){
    int arr[]={-4,-3,-2,-1,0,1,2,3};
    int size=8;

    int i=0,j=size-1,k=size-1;
    int arr1[size];
    while(i<=j && k>=0){
        if(abs(arr[i]>abs(arr[j]))){
          arr1[k]=arr[i]*arr[i];
          i++;
          k--;
        }
        else{
            arr1[k]=arr[j]*arr[j];
            j--;
            k--;
        }
    }
     for(int i=0;i<size;i++){
         cout<<arr1[i]<<" ";
    }
   
}