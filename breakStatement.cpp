#include<iostream>
using namespace std;

int main()
{
        int number;
        int sum=0;

        while (true)
        {
            cout<< "enter a number ";
            cin>> number;

            if (number<0)
            {
                break;
            }
            sum+= number;
        }
cout<<" the sum is " << sum << endl;
return 0;

}