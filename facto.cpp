#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define NIL -1
int table[MAX];


void inilize(){
for(int i=0;i<MAX;i++)
{
    table[i]=NIL;
}
}
int fib(int n)
{
    if(table[n]==NIL)
    {
        if(n<=1)
            table[n]=n;
        else
            table[n]=fib(n-1)+fib(n-2);
    }

    return table[n];
}
main()
{
    inilize();
    cout<<"Enter number"<<endl;
    int n;
    cin>>n;
   printf("%d",fib(n));
}
