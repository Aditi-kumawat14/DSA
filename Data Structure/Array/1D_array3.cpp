#include<iostream>
#include<stdlib.h>
#define SIZE 10
using namespace std;

class Array{

private: 
        int arr[SIZE];
public:
        int get_n();
        void get_array(int n);
        void display_array(int n);
};

int Array::get_n()
{
    int x;
    cin>>x;
    return x;
}

void Array::get_array(int n)
{
    if(n>SIZE || n<=0)
    {
        cout<<"\n\tPlease Enter proper size of array:- ";
    }
    else{
    for(int i=0 ; i<n; i++)
    {
        cout<<"\n\t Enter the elment["<<i+1<<"]: ";
        cin>>arr[i];
    }
    }
}

void Array:: display_array(int n)
{
    cout<<"\n\tArray element are: ";

    for(int i=0; i <n; i++)
    {
        cout<<"\n\t";
        cout<<"  "<<arr[i]; 
    }
}
int main()
{
    system("clear");
    Array obj;

    int n;
    cout<<"\n\tEnter the no. of element from 1-"<<SIZE<<" in array: ";
    n= obj.get_n();
    obj.get_array( n);
    obj.display_array( n);
    return 0;
}