/* given a array sorted in increasing order of n size and an integer target find
 the total nunber of pair    ex-->>> a={1,2,3,4,5,6}  sum=7 ,total pair is {2,5},{3,4},{1,6} tatal 3 pair
 */

#include<iostream>
using namespace std;

int count_pair(int arr[],int size,int target){
    int i=0;
    int j=size-1;
    
    int count=0;
    while(i<j){
        if(arr[i]+arr[j]==target){
            count+=1;
            i++;
            j--;
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
    return count;
}
int main(){
    int arr[]={-2,-1,0,1,3,4,6,8,11,12};
    int target_sum=12;
    int size=10;

    cout<<count_pair(arr,size,target_sum);
}