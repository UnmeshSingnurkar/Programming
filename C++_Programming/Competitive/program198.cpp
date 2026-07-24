#include<iostream>
using namespace std;

template <class T>
T AddN(T *Arr, int iSize)
{
    T sum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        sum = sum + Arr[i];
    }

    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};

    int iRet = AddN(arr,5);
    cout<<iRet<<endl;

    float fRet = AddN(brr,5);
    cout<<fRet<<endl;

    return 0;
}