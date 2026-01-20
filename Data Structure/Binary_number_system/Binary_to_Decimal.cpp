#include<stdlib.h>
#include<iostream>
using namespace std;

class Binary_to_decimal
{
   
    public:
        
        int convert(int binNum);
    
};
int Binary_to_decimal::convert(int binNum)
{
    int ans=0 , power=1;

    while(binNum>0)
    {
        int rem = binNum % 10;
        binNum = binNum/10;
        ans += rem * power;
        power *= 2;
    }
    return ans;
}

int main()
{
    system("cls");
    int result;
    int num;
    Binary_to_decimal obj;

    cout<<"\n\tEnter the Binary Number: ";
    cin>>num;

    // for(int i = 2 ; i<=9 ; i++ )
    // {
    //     cout<<obj.convert(i)<<endl;
    // }

    result = obj.convert(num);
    cout<<"\n\tThe Decimal Number is "<<result;
}