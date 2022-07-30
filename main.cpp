/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void bubbleSort(int arr[],int size)
{
    int i,j,k,l=0;
    
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                k=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=k;
            }
        }
        for(l=0;l<size;l++)
        cout<<arr[l]<<" ";
        cout<<endl;
    }
}

int main()
{
    int a[]={5,3,6,10,7,2};
    
    int size=sizeof(a)/sizeof(a[0]);
    
    //cout<<size<<" "<<sizeof(a)<<" "<<sizeof(a[0]);
    
    bubbleSort(a,size);

    return 0;
}

