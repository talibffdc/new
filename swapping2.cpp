#include<iostream>

using namespace std;

int main()
{
int a=5;
int b=10;

        cout<<"before swapping "<<endl;
        cout<<"a is "<< a << endl;
        cout<<"b is "<< b << endl;

        a=a+b;
        b=a-b;
        a=a-b;

        cout<<" \n after swapping" << endl;
        cout<<" a is " <<a<<  endl;
        cout<< "b is "<<b<< endl;

        return 0; 
}