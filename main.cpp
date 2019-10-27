#include <iostream>
using namespace std;
int main()
{
    //defining integers
    int n;
    int arr[n];
    cout<<"Enter the elements of array"<<"\n";
    // for loop, increment till the value n
    for(int k=0;k<n;k++) 
        
    {
    cin>>arr[k];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int x;
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }

        }
         cout<<arr[i]<<"\n";
    }

    return 0;
}
