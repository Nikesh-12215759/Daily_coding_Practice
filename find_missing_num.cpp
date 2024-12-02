//when array is already sorted...

#include<iostream>
using namespace std;

// int missing_num(int arr[],int n)
// {
//   int sum=0;
//   for(int i=0;i<n;i++)
//   {
//     sum+=arr[i];
//   }
//   int s=arr[n-1];
//   int Sum_n_natural=s*(s+1)/2;
//   int missingNum=Sum_n_natural-sum;
//   return missingNum;
// }
void missing_num(int arr[],int n)
{
  int l=arr[0];
  int diff=l-0;
  int missing_n;
  for(int i=0;i<n;i++)
  {
    if(arr[i]-i!=diff)
    {
      missing_n=diff+i;
      cout<< "Missing number is: "<<missing_n;
      break;
    }
  }
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  //cout<<"Missing number is: "<<missing_num(arr,n);
  missing_num(arr,n);
}