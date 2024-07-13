#include <iostream>
using namespace std;

//code1 for factorial usig recurssion
/*int fact(int n)
{
    if(n ==0)
    return 1;

    int choti = fact(n-1);
    int badi = n * choti ;
     return badi;

}
int main()
{int n;
    cout<<"enter your number"<<endl;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
*/
//code2 power of 2 using recursion
int pow(int n)
{
  if(n==0)
    return 1;

int i = 2 * pow(n-1);
return i;
}
int main(){
   int n;
    cout<<"enter power number"<<endl;
    cin>>n;
    int ans = pow(n);
    cout<<ans<<endl;
    return 0;
}