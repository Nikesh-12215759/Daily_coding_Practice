// #include <iostream>
// using namespace std;

// int count_elements(int arr[], int n,int element)
// {
//   int Hash_arr[n+1];
//   for(int i=0; i<n; i++)
//   {
//     Hash_arr[i] = 0;
//   }
//   for(int i=0; i<n; i++)
//   {
//     Hash_arr[arr[i]]++;
//   }
//   return Hash_arr[element];
// }
// int main()
// {
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }
  
//   int element;
//   cout<<"Enter the element to find frequency: ";
//   cin>>element;
//   cout<<"Frequency of "<<element<<" is: "<<count_elements(arr,n,element);
//   return 0;
// }

//
#include <iostream>
using namespace std;


int main()
{
  string s;
  cin>>s;
  int Hash[256]={0};
  for(int i=0;i<s.size();i++)
  {
    Hash[s[i]]++;
  }
  // int q;
  // cin>>q;
  // while(q--)
  // {
    char c;
    cin>>c;
    cout<<Hash[c]<<endl;
  //}
  return 0;
}
