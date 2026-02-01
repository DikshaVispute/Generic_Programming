#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Search
//  Description :   Used to check whether given value is present or not
//  Input :         array, Size of array, value to search
//  Output :        boolean value
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        bool Search(T Brr[], int iSize, T No)
        {
            int iCnt = 0 ,iCount = -1;

            for(iCnt = 0; iCnt <iSize; iCnt++)
            {
                if(Brr[iCnt] == No)
                {
                    iCount++;
                    break;
                }
            }

            if(iCount == -1)
            {
                return false;
            }
            else
            {
                return true;
            }           
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo <int> *dobj = new Demo<int>();
    int iLength = 0, iCnt = 0;
    int Value = 0;
    bool bRet = false;

    cout<<"Enter  the number of elements :\n";
    cin>> iLength;

    int *Arr = new int[iLength];

    cout<<"Enter the elements: \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"\n";

    cout<<"Enter value to search :\n";
    cin>> Value;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";

    bRet = dobj->Search(Arr, iLength, Value);
    
    if(bRet == true)
    {
        cout<<"Value is present\n";
    }
    else
    {
        cout<<"Value is not present\n";
    }

    delete[] Arr;

    return 0;
}