#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize,T Value)
{
    int i = 0, Pos = 0;

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == Value)
        {   
            Pos = i;
        }
    }
    return Pos+1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    
    int iRet = SearchLast(arr,9,40);
    cout<<iRet<<endl;

    return 0;
}