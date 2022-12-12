/* given a array sorted in increasing order of n size and an integer target find
their exists a pair in the array whose sum is exactly  target
*/

#include<iostream>
using namespace std;

bool target_sum_pair(int arr[],int size,int target){
    int i=0;
    int j=size-1;
    

    while(i<j){
        if(arr[i]+arr[j]==target){
            // we found the pair
            return true;
            break;
        }
        else if(arr[i]+arr[j]<target){
            //sum is less than target , increase the sum
            i++;
        }
        else {
            // sum is more han target, decrease the sum
            j--;
        }
    }
    return false;
}
int main(){
    int arr[]={-2,-1,0,3,6,8,11,12};
    int target_sum=17;
    int size=8;

    cout<<target_sum_pair(arr,size,target_sum);
}