#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    int largest = INT_MIN;
    int size = 6;
    int index;

    int nums[6] = {10,3,2,77,0 , 8};
    
    for(int i=0 ; i<size ; i++)
    {
        // if(nums[i] > largest)
        // {
        //     largest = nums[i];
        //     index = i;
        //     cout<<"\n\t"<<largest<<" at "<<i<<endl;
        // }
        largest = max(nums[i],largest);
        
        
    }
    cout<<"\n\tlargest Element In Array is "<<largest;

}