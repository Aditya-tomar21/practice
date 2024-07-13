#include<iostream>
using namespace std;
/*reversing usin recursion
void rev(string &str , int i ,int j)
{
if(i>j)
return;

else
{
    swap(str[i],str[j]);
    i++;
    j--;
}

rev(str,i,j);

}

int main (){
    string name= "aditya";
    rev(name,0,name.length()-1);
    cout<<name<<endl;
return 0;
}
*/

//question2 a^b using recursion
/*
int pow(int a, int b)
{
    if(b==0) return 1;
    if(b==1) return a;

    int ans = pow(a,b/2);


    if(b%2==0)
    {
        return ans*ans;
    }
    else
    return ans *ans *a;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = pow(a,b);
    cout<<ans<<endl;
}
*/     