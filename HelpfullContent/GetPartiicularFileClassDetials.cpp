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
    friend istream& operator>>(istream& in, ract& r) {
        in >> r.len >> r.bre;
        return in;
    }
    friend ostream& operator<<(ostream& out, ract& r) {
        out << r.len << "  " << r.bre <<endl;
        return out;
    }
};

int main() {
    vector<ract> t;

    ifstream in("Addeleclass.txt");
    while (!in.fail() && !in.eof()) {
        ract temp;
        in >> temp;
        t.push_back(temp);
    }
    for (auto x : t) {
        cout << x;
    }

int i,r=0;
int size=t.size();
// ract temp;

cout<<"To Get Details of perticular class element: ";
cin>>i;

while(size>0)
{
    if(t[r].getl()==i)
    {
        // temp.setl(t[r].getl());
        // temp.setb(t[r].getb());
        cout<<"Elemants of asked class is: "<<endl;
        cout<<"Length: "<<t[r].getl()<<"  "<<"Breadth: "<<t[r].getb()<<endl;
    }
    size--;
    r++;
}


    in.close();
    return 0;
}
