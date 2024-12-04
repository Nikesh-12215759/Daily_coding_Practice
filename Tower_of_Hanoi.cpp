#include<iostream>
using namespace std;

void TowerOfHanoi(int n,char frompeg,char topeg,char auxpeg)
{
  if(n==1)
  {
    cout<<"move 1 from peg "<<frompeg<<" to "<<topeg<<endl;
    return;
  }
  TowerOfHanoi(n-1,frompeg,auxpeg,topeg);
  cout<<"Move "<<n<<" from "<<frompeg<<" to "<<topeg<<endl;
  TowerOfHanoi(n-1,auxpeg,topeg,frompeg);
}


int main()
{
  int n;
  cin>>n;
  TowerOfHanoi(n,'A','B','C');

  return 0;
}