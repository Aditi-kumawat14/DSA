#include<iostream>
#include<stdlib.h>
using namespace std;

int sum_element(int arr[] , int size )
{
    int sum;
    for(int i =0 ; i<size ; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}


int main()
{

    int arr[] = {1,2,3};
    int size = 3;
    int x;
    cout<<"Array elements are:-";

    for(int i =0 ; i<size ; i++)
    {
        cout<<" "<<arr[i];
    }
   
    x= sum_element(arr,size);
    cout<<"\n addition of Array element are: "<<x;

    return 0;
}
