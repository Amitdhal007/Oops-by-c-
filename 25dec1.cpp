#include<iostream>
using namespace std;

int main()
{
    int arr[7];
    int negnum=0;
    int posinum=0;

      cout << "Enter 7 numbers: " << endl;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];

        if (arr[i]>=0)
        {
            posinum+=1;
        }else{
            negnum+=1;
        }
        
    }
    cout<<"Total number of negative number is :"<<negnum<<endl;
    cout<<"Total number of positive number is :"<<posinum<<endl;
    return 0;
}