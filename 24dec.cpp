#include<iostream>
using namespace std;

int main()
{
    int arr[6];
    int sum=0;

      cout << "Enter 6 numbers: " << endl;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];

        sum+=arr[i];
    }
    cout<<"The sum of array element is :"<<sum;
    return 0;
}
