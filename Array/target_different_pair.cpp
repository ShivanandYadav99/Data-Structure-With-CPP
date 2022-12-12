/* given a array sorted in increasing order of n size and an integer target find
their exists a pair in the array whose different is exactly  target
*/

#include<iostream>
using namespace std;

bool target_different_pair(int arr[],int size,int target){
    int i=0;
    int j=1;
    

    while(i<size and j<size){
        if(abs(arr[i]-arr[j])==target){
            // we found the pair
            return true;
            break;
        }
        else if(abs(arr[i]-arr[j])<target){
            j++;
        }
        else {
            i--;
        }
    }
    return false;
}
int main(){
    int arr[]={3,6,8,11,12};
    int target_different=6;
    int size=5;

    cout<<target_different_pair(arr,size,target_different);
}