#include<iostream>
#include<vector>
using namespace std;

int main(){
    

    vector<int>v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k=2;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin()+k,v.end());
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
}

