#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=1;
    while (n>=3)
    {
        if(n%3==0)
        {
            n=n/3;
            sum=sum+1 ;
        }
        else if(n%3==1)
        {
            n=n*2+1;
            sum=sum+1 ;
        }
        else
        {
            n=n*2-1;
            sum=sum+1;
        }
    }
    cout <<sum<<endl;
    return 0;
}

