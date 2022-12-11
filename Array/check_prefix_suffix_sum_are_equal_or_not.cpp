/* check if we can partition the array into two subarray with equal sum
  and check prefix sum of array is equal to suffix sum of array
 example ->>> 1,2,3,4,2 === prefix sum 1,2,3=6  and suffix sum 4,2==6 borth are equal then return true
 */

#include<iostream>
#include<vector>
using namespace std;

bool prefix_suffix_sum(vector<int> &v ){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;

        if(suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;

}

int main(){
    cout<<"enter the size of vector"<<endl;
    int n;
    cin>>n;
    cout<<"enter the element"<<endl;
    vector<int>v;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Answer"<<endl<<prefix_suffix_sum(v)<<endl;
}