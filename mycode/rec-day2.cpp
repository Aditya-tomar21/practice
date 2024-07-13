//day 2 recursion]
#include <iostream>
using namespace std;

void reachome(int i,int j)
{
    if (i==j){
    cout<<"reached"<<endl;
return;
}
i++;
reachome(i,j);

}
int main()
{
    int dst=10;
    int src=1;
    cout<<endl;
        reachome(src,dst);
return 0;
}