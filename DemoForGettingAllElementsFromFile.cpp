#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int ennum;
    int t;

    ifstream in("Addele.txt");
   while(!in.fail() && !in.eof())
    {in>>t;
    cout<<"Entered Number = "<<t<<endl;
    }
    in.close();
    return 0;
}