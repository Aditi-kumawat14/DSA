#include <iostream>
#include <stdlib.h>
#define SIZE 10

using namespace std;

class  Array
{
private:
        int arr[SIZE];
public:
        int get_n();
        void get_array(int n);
        void display(int n);
        void search(int n , int key);    
};

int Array ::get_n()
{
    int x;
    cin>>x;
    return x;
}

void Array::get_array(int n)
{
    if(n>SIZE || n<=0)
    {
        cout<<"\n\tEnter proper size of array(1-10).";
    }
    else
    {
        for(int i =0 ; i<n ; i++)
        {
            cout<<"\n\tEnter the element["<<i +1<<"] : ";
            cin>>arr[i];
        }
    }
}

void Array::display(int n)
{
    cout<<"\n\tArray Elements are: ";

    for(int i =0 ; i< n ; i++)
    {
        cout<<"\t";
        cout<<"  "<<arr[i]; 
    }
}

void Array ::search (int n , int key)
{
    int x;

    for(int i =0; i <n ; i++)
    {
        if(arr[i] == key)
        {
            x = 1;
            break;
        }
        x=0;
    }
    if(x==1)
    {
        cout<<"\n\tKey is Found";
    }
    else
    {
        cout<<"\n\tKey not Found";
    }
}

int main()
{
    //system("cls");
    int n , key;

    Array obj;

    cout<<"\n\tEnter the number of element in array(1 -10): ";
    n = obj.get_n();

    obj.get_array(n);
    obj.display(n);

    cout<<"\n\tEnter the key you want to search: ";
    key = obj.get_n();
    obj.search(n , key);
    
}
