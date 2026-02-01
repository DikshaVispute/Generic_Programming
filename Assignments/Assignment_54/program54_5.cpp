#include<iostream>
using namespace std;

template<class T>
class Demo
{
    public:
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Min
//  Description :   Used to reverse an array
//  Input :         array, Size of array
//  Output :        nothing
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T Min(T Brr[], int iSize)
        {
            int iCnt = 0, iMin = 0;

            for(iCnt = 0, iMin = Brr[0]; iCnt < iSize ; iCnt++)
            {
                if((Brr[iCnt]) < iMin)
                {
                    iMin = Brr[iCnt];
                }
            }

            return iMin;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo<int> *dobj = new Demo<int>();
    int iCnt = 0, iLength = 0;
    int iRet = 0;

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

    iRet = dobj->Min(Arr,iLength);

    cout<<"Smallest Element is : "<<iRet<<"\n";

    return 0;
}