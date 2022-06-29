#include<iostream>
using namespace std;
int main(){
    int size;
    int data;
    cin>>size;
    int a[size];
    // creation array
    for(int i=0; i<size;i++){  // begin 0  end 9 if you take size = 10
        cin>>a[i];
    }
    // after creating an arry
    // rondomly i watn to search some data's index
    // case 1 if size =0 return ;
    // case 2 if size>0 and value is not available in array return false
    // case 3 if available in array then it return true and gives it's index number 
    
    cin>>data;
    if(size==0){
        cout<<"array size is 0";
    }
        for(int i=0; i<size;i++){
            if(a[i]==data){
                cout<<i<<endl;
            }
            cout<<"value is not available in the array"<<endl;
        }   
    return 0;
}