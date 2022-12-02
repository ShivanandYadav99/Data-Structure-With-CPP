// Find the last occurrence of an element x in given array
// ex.. 12322121   x=1 then ,occurrence=7 ,x=2 then , occurence=6'
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    cout<<"Enter the six element of array"<<endl;
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"enter the element to find the occurrence";
    int x;
    cin>>x;
   /* int occurrence;
    for(int i=0;i<6;i++){
       if(v[i]==x){
        occurrence=i;
       }
    }
    cout<<occurrence<<endl;
    */
   int occurrence=-1;
   for(int i=5;i>=0;i--){
      if(v[i]==x){
         occurrence=i;
         break;
        }
    }

   cout<<occurrence<<endl;


}