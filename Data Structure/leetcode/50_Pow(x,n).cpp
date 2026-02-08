#include<iostream>
#include<vector>
using namespace std;

class solution
{
    public:
        double myPow(double x , int n)
        {
            //corner condition
            if(n == 0) return 1.0;
            if(x == 0) return 0.0;
            if(x == 1) return 1.0;
            if(x == -1 && n % 2==0) return 1.0;
            if(x == -1 && n % 2!=0) return -1.0;

            long binForm = n;
            double ans = 1;

            if(n < 0)      //condition when power is negative
            {
                x = 1/x;
                binForm = - binForm;
            }

            while(binForm > 0)
            {
                if(binForm%2 == 1)
                {
                    ans *= x;
                }
                x*=x;
                binForm/=2;

            }
            return ans;
        }
};

int main()
{
    solution obj;

    double result;
    double x ;
    int n ;

    cout<<"\n\tEnter the number(x):- ";
    cin>>x;

    cout<<"\n\tEnter the Power(n):- ";
    cin>>n;
    
    result = obj.myPow(x,n);

    cout<<"\n\tThe Pow (3,5) is "<<result;
    return 0;
}
