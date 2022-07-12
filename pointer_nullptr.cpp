// Below is C++ program
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    int x=4;

    cout<<"value of x is : "<<x<<endl;
    int * j=nullptr;
    j=&x;
    *j=*j+1;
    cout<<*j<<" "<<x<<endl;
    return 0;
}
