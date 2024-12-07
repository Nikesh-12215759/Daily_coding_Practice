//number using map
#include<iostream>
#include<map>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int q;
  cin>>q;

  map<int,int>mpp;
  for(int i=0;i<n;i++)
  {
    mpp[arr[i]]++;
  }
  for(auto i:mpp)
  {
    cout<<i.first<<"->"<<i.second<<endl;
  }
  while(q--)
  {
    int element;
    cin>>element;
    cout<<mpp[element]<<endl;
  }


  return 0;
}

//charater frequency using map

#include<iostream>
#include<map>
using namespace std;

int main()
{
  string s;
  cin>>s;
  map<char,int>mpp;
  for(int i=0;i<s.size();i++)
  {
    mpp[s[i]]++;
  }
  char ch;
  cin>>ch;
  cout<<mpp[ch]<<endl;

  return 0;
}