/*exp-16_1-Age limit error*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age:"<<endl;
    cin>>age;
   
    try
    {
        if(age>=18)
        {
           cout<<"You are old enough to login";  
        }
        else
        {
            throw age;
        }
    }
    catch(int e)
    {
        cout<<"Your age is "<<e<<"\n Access denied";
    }
    
}
/*output:
Enter age:
15
Your age is 15
 Access denied */