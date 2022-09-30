#include<iostream>
using namespace std;
int main()
{
     int arr[10],sum=0;
   cout<<"enter 10 element of arry"<<endl;
   for(int i=0;i<10;i++)
   cin>>arr[i];
   for(int i=0;i<10;i++)
     sum=sum+arr[i];
   cout<<"sum of array element is "<<sum;
   return 0;
}


