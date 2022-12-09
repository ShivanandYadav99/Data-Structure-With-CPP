// sort the even and odd number using  vector

 #include<iostream>
#include<vector>
using namespace std;


void sort_even_odd(vector<int>&v){

    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr){

        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }

        if(v[left_ptr]%2==0){
            left_ptr++;
        }

        if(v[right_ptr]%2==1){
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


    sort_even_odd(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
