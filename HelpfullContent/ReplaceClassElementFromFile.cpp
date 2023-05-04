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
    friend ofstream& operator<<(ofstream& out, ract& r) {
        out << r.len << "  " << r.bre <<endl;
        return out;
    }
};

int main() {
    vector<ract> t;
    int i = 0;

    ifstream in("AddeleClass.txt");
    while (!in.fail() && !in.eof()) {
        ract temp;
        in >> temp;
        t.push_back(temp);
    }
    for (auto x : t) {
        cout << x;
    }
int j,nu,rand=0;
cout<<"Enter number you want to change: " ;
cin>>j;
cout<<"Enter number you want to replace with: " ;
cin>>nu;
    int size=t.size();
while(size>0)
{
 if(t[rand].getl()==j)
 {
    t[rand].setl(nu);
 }   
 rand++;
 size--;
}

    for (auto x : t) {
        cout << x;
    }
    //pachi jo file ma pan replace karve hoy to

ofstream out("AddeleClass.txt"); //Ahi trunc nai lagayu kemke Value change karve 6
for(auto y: t)
{
    out<<y;
}
    out.close();
    in.close();
    return 0;
}
