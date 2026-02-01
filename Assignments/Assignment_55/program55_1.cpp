#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Add
//  Description :   Used to return Addition of two element
//  Input :         two elements
//  Output :        addition
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        T Add(T Val1, T Val2)
        {
            T Sum = 0;
            Sum = Val1 + Val2;
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

    cout<<"Enter second Value : ";
    cin>>Value2;

    iRet = dobj->Add(Value1,Value2);

    cout<<"Addition of given value is : "<<iRet<<"\n";

    return 0;
}