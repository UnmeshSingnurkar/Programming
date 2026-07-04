#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Parameterized Constructor
        ArrayX(int x)
        {   
            cout<<"Inside Constructor\n";

            iSize = x;                  // Characteristics Initialisation
            Arr = new int[iSize];       // Resourse Allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destrcutor\n";
            
            delete []Arr;               // Resourse Deallocation
        }
};

int main()
{
    ArrayX aobj1(5); 
    


    return 0;
}