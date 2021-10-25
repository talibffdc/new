#include<iostream>
using namespace std;

int main ()
{
        int a=6 , b=9, temp;
        cout<< "before swapping."<< endl;
        cout<< "a= "<<a<<" , b= "<<b<< endl;
        temp = a;
        a=b;
        b=a;

         cout<< "after swapping."<< endl;
        cout<< "a= "<<a<<" , b= "<<b<< endl;
        return 0;
}