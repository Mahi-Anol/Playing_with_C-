#include<iostream>


using namespace std;


int main()
{

    int **p=new int * [5];


    for(int i=0;i<5;i++)
    {

        *(p+i)=new int[5];
    }


    for(int i=0;i<5;i++)
    {

        for(int j=0;j<5;j++)
        {

            p[i][j]=i;
        }
    }


    for(int i=0;i<5;i++)
    {

        for(int j=0;j<5;j++)
        {

            cout<<p[i][j]<<" \n"[j==4];
        }
    }

    for(int i=0;i<5;i++)
    {

        delete [] p[i];
    }

    delete [] p;

    p =nullptr;


}
