#include<iostream>
using namespace std;

template <class T>
T Min(T *Arr, int iSize)
{
    T Min;
    int i = 0;

    Min = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Min > Arr[i])
        {
            Min = Arr[i];
        }
    }

    return Min;
}

int main()
{
    int arr[] = {10,9,30,40,50};
    float brr[] = {10.0f,9.0f,30.0f,40.0f,50.0f};

    int iRet = Min(arr,5);
    cout<<iRet<<endl;

    float fRet = Min(brr,5);
    cout<<fRet<<endl;

    return 0;
}