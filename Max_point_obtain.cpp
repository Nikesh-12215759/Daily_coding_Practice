#include<iostream>
using namespace std;

int max_points(int nums[],int n,int k)
{
  int lsum=0,rsum=0,Maxsum=0;
  for(int i=0;i<k;i++)
  {
    lsum+=nums[i];
    Maxsum=lsum;
  }
  int R_Index=n-1;
  for(int i=k-1;i>=0;--i)
  {
    lsum-=nums[i];
    rsum+=nums[R_Index];
    R_Index-=1;
    Maxsum=max(Maxsum,lsum+rsum);
  }

  return Maxsum;
}

int main()
{
  int n;
  cin>>n;
  int nums[n];
  for(int i=0;i<n;i++)
  {
    cin>>nums[i];
  }
  int k;
  cout<<"Enter value of K: "<<" ";
  cin>>k;
  cout<<"Maximum points can be obtain: "<<max_points(nums,n,k);
  return 0;
}

