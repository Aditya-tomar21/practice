 #include <iostream>
 using namespace std;
/*
 //question 1checking sort using recursive funciton
bool issorted(int arr[], int size)
{
if(size==0||size==1) // array size is zero or one
{
    return 1;
}
if(arr[0]<arr[1]) // check element progres
{
return 0;
}
else
{
    int answer = issorted(arr+1,size-1);//recursive function
}

}


int main()
{
    int arr[]= {11,9,6,4,2};
    int size=5;
int ans= issorted(arr ,size);
if(ans){
    cout<<"is sorted"<<endl;

}
else
cout<<"not soretd"<<endl;


return 0;
}
*/








//question 2

int getsum(int arr[],int size)
{
    if(size==0)//base case
    return 0;

    if(size==1)// base case
    return arr[0];

    int remainingpart = getsum(arr+1,size-1);//recurisive part
    int sum = arr[0]+remainingpart;//check recurwsiion tree to understand
return sum;

}
int main()
{
    int arr[]= {11,9,6,4,2};
    int size= sizeof(arr)/sizeof(arr[0]);
int ans= getsum(arr ,size);
cout<<ans<<endl;
return 0;

}



//linaer earch using recursion
//binary serch using recursion check copy 