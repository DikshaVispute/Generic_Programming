#include<iostream>
using namespace std;

template<class T>
class Demo
{
    public:
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description :   Used to reverse an array
//  Input :         array, Size of array
//  Output :        nothing
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void Reverse(T Brr[], int iSize)
        {
            int iCnt = 0;

            cout<<"Reversed Array : \n";

            for(iCnt = iSize-1; iCnt >= 0 ; iCnt--)
            {
                cout<<Brr[iCnt]<<"\t";
            }
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo<int> *dobj = new Demo<int>();
    int iCnt = 0, iLength = 0;

    cout<<"Enter the number of elements: \n";
    cin>>iLength;

    int *Arr = new int[iLength];

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Elements in an Array are : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";

    dobj->Reverse(Arr,iLength);

    return 0;
}