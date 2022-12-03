/* count the number of triplete whose
    sum of equal to the given value x(targete)
*/#include<iostream>
using namespace std;
int find_triplete(int arr[],int size,int target){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int arr[]={3,1,2,4,0,6};
    int size=6;
    int target=6;
    cout<<find_triplete(arr,size,target);
}