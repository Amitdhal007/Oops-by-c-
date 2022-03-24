#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter number of Days."<<endl;
    cin>>num;

    num= floor(num/7);
    cout<<"No of weeks are "<<num<<endl;
}