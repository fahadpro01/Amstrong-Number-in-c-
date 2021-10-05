#include <iostream>
#include<math.h>
using namespace std;

int main()
 {
  int n;
  cin>>n;
  int last,sum=0;
  int orignal=n;

  while(n>0){
    last=n%10;
    sum += pow(last,3);
    n=n/10;
    }
    if(sum==orignal)
    {
    cout<<"Amstrong number";
    }
    else
    {
     cout<<"not Amstrong number";
    }
    return 0;

}
    

    





