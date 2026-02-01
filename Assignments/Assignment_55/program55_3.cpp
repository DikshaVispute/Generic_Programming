#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Div
//  Description :   Used to return Division of two element
//  Input :         two elements
//  Output :        Division
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T Div(T Val1, T Val2)
        {
            T Sum = 0;
            Sum = Val1 / Val2;
            return Sum;
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo<float> *dobj = new Demo<float>();

    float Value1 = 0.0f, Value2 = 0.0f;
    float iRet = 0;

    cout<<"Enter First Value : \n";
    cin>>Value1;

    cout<<"Enter second Value : \n";
    cin>>Value2;

    iRet = dobj->Div(Value1,Value2);

    cout<<"Division of given value is : "<<iRet<<"\n";

    return 0;
}