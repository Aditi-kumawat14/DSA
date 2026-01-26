#include<iostream>
#include<stdlib.h>
#define PLANE 10
#define ROW 10
#define COL 10
using namespace std;

class Array
{
    private:
        int A[PLANE][ROW][COL];
      
    public:
        int get_p();
        int get_r();
        int get_c();
        void get_array(int p , int r , int c);
        void put_array(int p , int r , int c);

};

int Array::get_p()
{
    int a;
    cin>>a;
    return a;
}

int Array::get_r()
{
    int b;
    cin>>b;
    return b;
}

int Array ::get_c()
{
    int c;
    cin>>c;
    return c;
}

void Array::get_array(int p , int r , int c)
{
    
    for(int i = 0 ; i<p ;i++)
    {
        for(int j=0 ; j<r ;j++)
        {
            for(int k =0; k<c ; k++)
            {
                cout<<"\n\tEnter the element["<<i<<"]["<<j<<"]["<<k<<"] : ";
                cin>>A[i][j][k];
            }
        }

    }
}

void Array::put_array(int p , int r , int c)
{
    cout<<"\n\tArray element are:  ";

    for(int i =0 ; i<p;i++)
    {
        cout<<"\n\t";
        for(int j=0 ; j<r ;j++)
        {
            cout<<"\n\t";
            for(int k =0; k<c ; k++)
            {
                cout<<"  "<<A[i][j][k];
                
            }
        }
    }
}
int main()
{
    
    system("clear");
    Array obj;
    int p,r,c;
    cout<<"\n\tEnter the number of plane , row and column in the matrix: ";
    p=obj.get_p();
    r=obj.get_r();
    c=obj.get_c();
    obj.get_array(p,r,c);
    obj.put_array(p,r,c);
    return 0;

}
