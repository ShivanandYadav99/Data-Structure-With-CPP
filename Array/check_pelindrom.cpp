// check pelindrom number 123454321--->Yes pelindrom
#include<iostream>
using namespace std;
bool checkPalindrom (int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}
int main(){
    int n,arr[100],p;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    p=checkPalindrom(arr,n);
    cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<p;
}
