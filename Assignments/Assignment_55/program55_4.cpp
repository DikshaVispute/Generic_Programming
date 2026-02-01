#include<iostream>
using namespace std;

template <class T>
class Demo
{
    public:

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Swap
//  Description :   Used to swap two element
//  Input :         two elements
//  Output :        nothing
//  Auther :        Diksha Kadu Vispute
//  Date :          01/02/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////

        void Swap(T Val1, T Val2)
        {
            T temp = 0;

            temp = Val1;
            Val1 = Val2;
            Val2 = temp;

            cout<<"Value of 1st element : "<<Val1<<"\n";
            cout<<"Value of 2nd element : "<<Val2<<"\n";
        }
};

////////////////////////////////////////////////////////////////////////////////
//    Entry point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    Demo<float> *dobj = new Demo<float>();

    float Value1 = 0.0f, Value2 = 0.0f;

    cout<<"Enter First Value : \n";
    cin>>Value1;

    cout<<"Enter second Value : \n";
    cin>>Value2;

    dobj->Swap(Value1,Value2);

    return 0;
}