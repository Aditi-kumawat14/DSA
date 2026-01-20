#include<stdlib.h>
#include<iostream>
using namespace std;

class Dec_to_binary
{
   
    public:
        
        int convert(int decNum);
    
};
int Dec_to_binary::convert(int decNum)
{
    int ans=0 , power=1;

    while(decNum>0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * power);
        power = power * 10;
    }
    return ans;
}

int main()
{
    system("cls");
    int result;
    int num;
    Dec_to_binary obj;

    cout<<"\n\tEnter the Decimal Number: ";
    cin>>num;

    // for(int i = 2 ; i<=9 ; i++ )
    // {
    //     cout<<obj.convert(i)<<endl;
    // }

    result = obj.convert(num);
    cout<<"\n\tThe Binary Number is "<<result;
}