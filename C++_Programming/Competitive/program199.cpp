#include<iostream>
using namespace std;

template <class T>
T Max(T *Arr, int iSize)
{
    T Max;
    int i = 0;

    Max = Arr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }

    return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};

    int iRet = Max(arr,5);
    cout<<iRet<<endl;

    float fRet = Max(brr,5);
    cout<<fRet<<endl;

    return 0;
}