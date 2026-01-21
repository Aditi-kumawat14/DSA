#include<stdlib.h>
#include<iostream>
using namespace std;

class bitwise_op
{
   
    public:
        
        int And(int a , int b);
        int OR(int a , int b);
        int XOR(int a , int b);
        int left_shift(int a , int b);
        int right_shift(int a , int b);   
};
int bitwise_op::And(int a, int b)
{
    cout<<(a & b);

}

int bitwise_op::OR(int a, int b)
{
    cout<<(a | b);
    
}
int bitwise_op::XOR(int a, int b)
{
    cout<<(a ^ b);
    
}
int bitwise_op::left_shift(int a, int b)
{
    cout<<(a << 1);
    
}
int bitwise_op::right_shift(int a, int b)
{
    cout<<(a >> 1);
    
}
int main()
{
    system("cls");
    int result;
    int a , b;
    bitwise_op obj;

    cout<<"\n\tEnter the Number 1: ";
    cin>>a;
    cout<<"\n\tEnter the Number 2: ";
    cin>>b;

    cout<<"\n\t"<<a<<" & "<<b<<" is : ";
    obj.And(a,b);

    cout<<"\n\t"<<a<<" |"<<b<<" is : ";
    obj.OR(a,b);

    cout<<"\n\t"<<a<<" ^ "<<b<<" is : ";
    obj.XOR(a,b);

    cout<<"\n\t"<<a<<" << "<<b<<" is : ";
    obj.left_shift(a,b);

    cout<<"\n\t"<<a<<" >> "<<b<<" is : ";
    obj.right_shift(a,b);
    
    return 0;

   
}