#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    int smallest = INT_MAX;
    int size = 6;
    int index;

    int nums[6] = {10,3,2,77,0 , 8};
    
    for(int i=0 ; i<size ; i++)
    {
        // if(nums[i] < smallest)
        // {
        //     // smallest = nums[i];
        //     // index = i;
        //     // cout<<"\n\t"<<smallest<<" at "<<i<<endl;
        // }
        smallest = min(nums[i],smallest);
        
        
    }
    cout<<"\n\tSmallest Element In Array is "<<smallest;

}