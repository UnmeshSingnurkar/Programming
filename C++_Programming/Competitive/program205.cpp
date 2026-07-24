#include<iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int iSize)
{
    int temp = 0, iStart = 0, iEnd = 0;
    iEnd = iSize-1;

    while( iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<endl;

    Reverse(arr,9);

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<endl;

    return 0;
}