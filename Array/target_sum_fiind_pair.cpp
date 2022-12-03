/*Find the total numbers of pairs in the
  given array whose sum is equal to the given value x(target)
*/
#include<iostream>
using namespace std;
int find_pair(int arr[],int size,int target){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                   count++;
            }
        }
    }
    return count;

}
int main(){
    int arr[]={2,4,5,7,3,5,9,7};
      int size=8;
      int target=6;
      cout<<find_pair(arr,size,target);
}