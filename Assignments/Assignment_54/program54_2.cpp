#include<iostream>
using namespace std;

template<class T>
class Demo
{
    public:
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumEven
//  Description :   Used to return sum of even numbers in an array
//  Input :         array, Size of array
//  Output :        sum 
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T SumEven(T Brr[], int iSize)
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
                if((Brr[iCnt] % 2) == 0)
                {
                    iSum = iSum + Brr[iCnt];
                }
            }

            return iSum;
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

    iRet = dobj->SumEven(Arr,iLength);

    cout<<"Sum of even elements is : "<<iRet<<"\n";

    return 0;
}