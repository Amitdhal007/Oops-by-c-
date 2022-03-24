#include<iostream>
using namespace std;

int main()
{
    int arr[7];
    int sum=0;

      cout << "Enter 7 numbers: " << endl;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];

        sum+=arr[i];
    }
    cout<<"The sum of array element is :"<<sum;
    return 0;
}
