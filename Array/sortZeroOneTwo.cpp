// sort an array of 0's,1's , 2's,
// Example given array[]={0,1,2,0,0,1,2,1,2}  after sorting array[]={0,0,0,1,1,1,2,2,2} or {2,2,2,1,1,1,0,0,0}

#include<iostream>
using namespace std;
//sorting array acending order
void sortZeroOneTwo(int arr[],int n){
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else
        two++;
    }
    int i=0;
    while(zero--){
        arr[i]=0;
        i++;
    }
    while(one--){
        arr[i]=1;
        i++;
    }
    while(two--){
        arr[i]=2;
        i++;
    }
}
//sorting in decending order

void sortZeroOneTwoDecendingOrder(int arr[],int n){
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else
        two++;
    }
    int i=0;
    while(two--){
        arr[i]=2;
        i++;
    }
    while(one--){
        arr[i]=1;
        i++;
    }
    while(zero--){
        arr[i]=0;
        i++;
    }
}

int main(){
    int arr[100];
    int n;
    cout<<"enter the number of array size"<<endl;
    cin>>n;
    cout<<"enter the zero one and two number"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortZeroOneTwo(arr,n);
    cout<<"--------------------------------"<<endl;
    cout<<"after the sorting array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sortZeroOneTwoDecendingOrder(arr,n);
    cout<<"--------------------------------"<<endl;
    cout<<"after the sorting array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}