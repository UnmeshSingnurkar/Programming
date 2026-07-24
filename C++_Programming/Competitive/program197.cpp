#include<iostream>
using namespace std;

template <class T>
T Max(T No1, T No2, T No3)
{
    T Max;

    Max = No1;

    if(Max < No2)
    {
        Max = No2;
    }
    if(Max < No3)
    {
        Max = No3;
    }

    return Max;
}

int main()
{
    int iRet = Max(10,20,11);
    cout<<iRet<<endl;

    return 0;
}