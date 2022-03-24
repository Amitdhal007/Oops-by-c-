#include<iostream>
using namespace std;


int main(){
    char ch;
    cin>>ch;
   if (ch>=97 && ch<=123){
       cout<<"0"<<endl;
   }
    else if(ch>=67 && ch<=91){
       cout<<"1"<<endl;
   }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
