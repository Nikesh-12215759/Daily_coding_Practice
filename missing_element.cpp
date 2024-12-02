#include<iostream>
using namespace std;

void missing_element(int arr[],int n)
{
  int l=arr[0];
  int diff=l-0;
  cout<<"Missing numbers are: ";
  for(int i=0;i<n;i++)
  {
    if(arr[i]-i!=diff)
    {
      while(diff<arr[i]-i)
      {
        
        cout<<diff+i<<",";
        diff++;
      }
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
  missing_element(arr,n);

  return 0;
}