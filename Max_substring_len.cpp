#include<iostream>
using namespace std;

int max_substring_len(int arr[],int n,int k)
{
  int l=0,r=0,sum=0;
  int Maxlen=0;
  while(r<n)
  {
    sum+=arr[r];
    while(sum>k)
    {
      sum=sum-arr[l];
      l=l+1;
    }
    if(sum<=k)
    {
      Maxlen=max(Maxlen,r-l+1);

    }
    r=r+1;
  }
  return Maxlen;
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
  int k;
  cout<<"Enter the Value of K: "<<" ";
  cin>>k;
  cout<<"Max substring Len: "<<max_substring_len(arr,n,k);
}