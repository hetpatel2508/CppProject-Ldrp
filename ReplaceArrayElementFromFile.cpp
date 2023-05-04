#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    int ennum;
    vector<int>t;
    int i,nu,rand=0;

    ifstream in("Addele.txt");
   while(!in.fail() && !in.eof())
    {
        int temp;
        in>>temp;
        t.push_back(temp);
    }
for(auto x: t)
{
    cout<<x<<" ";
}
cout<<"Enter number you want to change: " ;
cin>>i;
cout<<"Enter number you want to replace with: " ;
cin>>nu;
    int size=t.size();
while(size>0)
{
 if(t[rand]==i)
 {
    t[rand]=nu;
 }   
 rand++;
 size--;
}

for(auto x: t)
{
    cout<<x<<" ";
}
    in.close();
    return 0;
}