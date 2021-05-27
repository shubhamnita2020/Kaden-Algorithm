/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int arr[]={10,5,6,7,8};
   int temp[15];
   
   for(int i =0;i<5;i++)
   {
       int sum =0;
       for(int j=i;j<5;j++)
         {
             sum+=arr[j];
             temp[4*i+j]=sum;
         }
       
   }
   
   
   
   for(int i=0;i<15;i++)
      cout<<temp[i];
   
   

    return 0;
}
