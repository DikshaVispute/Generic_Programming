#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   Used to find maximum of four element
//  Input :         four elements
//  Output :        maximum value
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T Max(T Val1, T Val2, T Val3, T Val4)
        {
            if((Val1 > Val2) && (Val1 > Val3) && (Val1 > Val4))
            {
                return Val1;
            }
            else if((Val2 > Val1) && (Val2 > Val3) && (Val2 > Val4))
            {
                return Val2;
            }
            else if((Val3 > Val1) && (Val3 > Val2) && (Val2 > Val4))
            {
                return Val3;
            }
            else
            {
                return Val4;
            }
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo<float> *dobj = new Demo<float>();

    float Value1 = 0.0f, Value2 = 0.0f, Value3 = 0.0f, Value4 = 0.0f;
    float iRet = 0;

    cout<<"Enter First Value : \n";
    cin>>Value1;

    cout<<"Enter second Value : \n";
    cin>>Value2;

    cout<<"Enter third Value : \n";
    cin>>Value3;

    cout<<"Enter Fourth Value : \n";
    cin>>Value4;

    iRet = dobj->Max(Value1,Value2,Value3,Value4);

    cout<<"Maximum of given value is : "<<iRet<<"\n";

    return 0;
}