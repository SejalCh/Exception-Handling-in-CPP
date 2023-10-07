/*Exp-16-Exception Handling
  exp-16_1-Error in division*/
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
    
    try
    {
        if(b!=0)
        {
           c=a/b;
           cout<<"Division="<<c;  
        }
        else
        {
            throw b;
        }
    }
    catch(int e)
    {
        cout<<"Divided by "<<e<<"\nerror.";
    }
    
}
/*output:
Enter value of a:
6
Enter value of b:
0
Divided by 0
error.*/