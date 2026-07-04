#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Default Constructor
        ArrayX()
        {

        }

        // Parameterized Constructor
        ArrayX(int x)
        {

        }
};

int main()
{
    ArrayX aobj1;               // Default
    ArrayX aobj2(5);            // Parameterized

    cout<<sizeof(aobj1)<<endl;       

    return 0;
}