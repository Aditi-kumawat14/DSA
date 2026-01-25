#include<iostream>
#include<stdlib.h>
#define ROW 10
#define COL 10
using namespace std;

template<class T>
class Array
{
    private:
           T A[ROW][COL];
           int r,c;
            

    public:
            void get_n();
            void get_array();
            void put_array();
};
 
template<class T>
void Array <T>:: get_n()
{
    cout<<"\n\tEnter the number of row and column in the table: ";
    cin>>r>>c;
}

template<class T>
void Array <T>::  get_array()
{
    
    for(int i=0; i < r; i++)
    {
        for(int j=0 ; j < c; j++)
        {
            cout<<"\n\tEnter the element ["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }

}
template<class T>
void Array<T> ::  put_array()
{
    cout<<"\n\tArray element are: ";

    for(int i=0; i < r; i++)
    {
        cout<<"\n\t";

        for(int j=0 ; j< c; j++)
        {
         cout<<"  "<<A[i][j];

        }
    }
}



int main()
{
    
    system("clear");
    Array <float>obj;
    obj.get_n();
    obj.get_array();
    obj.put_array();

    return 0;
}
