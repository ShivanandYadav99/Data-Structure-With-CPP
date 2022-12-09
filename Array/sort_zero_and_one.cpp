// sort the 0's and 1's using  vector

 #include<iostream>
#include<vector>
using namespace std;


void sort_zero_one(vector<int>&v){

    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr){

        if(v[left_ptr]==1 && v[right_ptr]==0){
            
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }

        if(v[left_ptr]==0){
            left_ptr++;
        }

        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;

}

int main(){
    cout<<"Please enter the size of vector"<<endl;
    int  n;
    cin>>n;

    vector<int>v;
    cout<<"Please enter the 0's and 1's for sorting"<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }


    sort_zero_one(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
