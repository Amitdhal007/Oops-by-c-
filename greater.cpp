#include <iostream>
using namespace std;

int main()
{   
     int arr[7];
     int greatest=0;

      cout << "Enter 7 numbers: " << endl;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    
    if (arr[i]>greatest)
    {
        greatest=arr[i];
    }
        
    }

    cout<<"largest number is :"<<greatest;
       
    return 0;
}
