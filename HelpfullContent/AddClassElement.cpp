#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class ract {
private:
    int len, bre;
public:
    ract(int l=0, int b=0) {
        len = l;
        bre = b;
    }
    void setl(int l){len=l;}
    void setb(int b){bre=b;}
    int getl(){return len;}
    int getb(){return bre;}
};

int main() 
{
    vector<ract *> t;
    int size;
    cout<<"Enter How many entries you wanted to add: ";
    cin>>size;

    ofstream out("AddeleClass.txt",ios::app);
    

    for(int i=0;i<size;i++)
    {
        int l,b;
        cout<<"Enter Length & Breadth :";
        cin>>l>>b;
    t.push_back(new ract(l,b));
    }

    for(auto x: t)
    {
        out<<endl<<x->getl()<<"  "<<x->getb();
    }
    for(auto x: t)
    {
        cout<<endl<<x->getl()<<"  "<<x->getb();
    }

    out.close();
    return 0;
}
