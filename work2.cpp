
//2. Initialize an integer array of 10 elements and print how many numbers are odd and how many numbers are even.


#include<iostream>
using namespace std;
int main()
{
   int arr[10], even=0, odd=0, i;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         even++;
      else
         odd++;
   }

   cout<<"\nTotal Number of Even Numbers = "<<even;
   cout<<"\nTotal Number of Odd Numbers = "<<odd;
   cout<<endl;
   return 0;
}
