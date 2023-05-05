#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class LDRPPR
{
private:
int Enrolment_number;
string Name;
long long int P_number;

public:
LDRPPR(int En=0,string n="",long long int p=0)
{
Enrolment_number=En;
Name=n;
P_number=p;
}

int geten(){return Enrolment_number;}
string getname(){return Name;}
long long int getpnum(){return P_number;}

void seten(int en){Enrolment_number=en;}
void setname(string n){Name=n;}
void setpnum(long long int pn){P_number=pn;}

friend ostream & operator<<(ostream &out,LDRPPR &l);
friend istream & operator>>(istream &in,LDRPPR &l);

};

ostream & operator<<(ostream &out,LDRPPR &l)
{
out<<l.Enrolment_number<<"  "<<l.Name<<"  "<<l.P_number<<endl;
return out;
}
istream & operator>>(istream &in,LDRPPR &l)
{
    in>>l.Enrolment_number>>l.Name>>l.P_number;
    return in;
}


int main()
{
    cout<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"*    Welcome To LDRP Institute of Technology and Research      *"<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"*                                                              *"<<endl;
   cout<<"*    Press 1: Add Student Details                              *"<<endl;
   cout<<"*    Press 2: Get All Student's Details                        *"<<endl;
   cout<<"*    Press 3: Get Particular Student's Details                 *"<<endl;
   cout<<"*    Press 4: Replace Student Details                          *"<<endl;
   cout<<"*    Press 5: Delete Student Details                           *"<<endl;
   cout<<"*                                                              *"<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"                                        Operated By:Patel Het R."<<endl;
   cout<<"                                             E.Num.:22BECE30273 "<<endl<<endl<<endl<<endl<<endl;

   int Selection_1;
   cout<<"Enter Your Choice: ";
   cin>>Selection_1;

   if(Selection_1==1)
   {
    // Press 1: Add Student Details 
    vector<LDRPPR *> ltemp1;
    int Entries;
    cout<<"How Many Student Entries You Want To Enter: ";
    cin>>Entries;
    
    ofstream out("LDRPclassD.txt",ios::app);
    
    for(int i=0;i<Entries;i++)
    {
        int En;
        string n;
        long long int p;

        cout<<"Enter Enrolment Number: ";
        cin>>En;
        cout<<"Enter Enrolment Name: ";
        cin>>n;
        cout<<"Enter Enrolment Price: ";
        cin>>p;

        ltemp1.push_back(new LDRPPR(En,n,p));
        
    }

    for(int i=0;i<Entries;i++)
    {
        out<<ltemp1[i]->geten()<<"  "<<ltemp1[i]->getname()<<"  "<<ltemp1[i]->getpnum()<<endl;
    }

    out.close();
   }

            else if(Selection_1==2)
            {
            // Press 2: Get All Student's Details
            vector<LDRPPR> ltemp2;

            ifstream in("LDRPclassD.txt");

            while(!in.fail() && !in.eof())
            {
                LDRPPR te;
                in>>te;
                ltemp2.push_back(te);
            }

            for(auto x:ltemp2)
            {
            cout<<x; 
            }
            in.close();

            }
                    else if(Selection_1==3)
                    {
                    // Press 3: Get Particular Student's Details 
                    cout<<"****************************************************************"<<endl;
                    cout<<"*                                                              *"<<endl;
                    cout<<"*    Press 1:Going By Enrolment Number                         *"<<endl;
                    cout<<"*    Press 2:Going By Name                                     *"<<endl;
                    cout<<"*    Press 3:Going By Phone Number                             *"<<endl;
                    cout<<"*                                                              *"<<endl;
                    cout<<"****************************************************************"<<endl;
                    int Selection_2;
                    cout<<"Enter Your Choice: ";
                    cin>>Selection_2;
                    if(Selection_2==1)
                      {
                        vector<LDRPPR> ltemp3;
                        ifstream in("LDRPclassD.txt");
                        while(!in.fail() && !in.eof())
                        {
                            LDRPPR temp;
                            in>>temp;
                            ltemp3.push_back(temp);
                        }
                        int TempEnnum;
                        cout<<"Enter Enrolment Number Of a Student: ";
                        cin>>TempEnnum;
                        int r=0;
                        int tr;
                        int size=ltemp3.size();

                        while(size>0)
                        {
                            if(ltemp3[r].geten()==TempEnnum)
                            {
                                cout<<"Asked Details:  "<<endl;
                                cout<<ltemp3[r];
                            }
                                r++;
                                size--;
                        }
                        cout<<":) Happy"<<endl;
                        in.close();
                      }
                    if(Selection_2==2)
                      {
                        vector<LDRPPR> ltemp3;
                        string Tempname;
                        cout<<"Enter Name Of a Student: ";
                        cin>>Tempname;
                        ifstream in("LDRPclassD.txt");
                        while(!in.fail() && !in.eof())
                        {
                            LDRPPR temp;
                            in>>temp;
                            ltemp3.push_back(temp);
                        }
                        int r=0;
                        int size=ltemp3.size();

                        while(size>0)
                        {
                            if(ltemp3[r].getname()==Tempname)
                            {
                                cout<<"Asked Details:  "<<endl;
                                cout<<ltemp3[r];
                            }
                                r++;
                                size--;
                        }
                        cout<<":) Happy"<<endl;
                        in.close();
                      }
                    if(Selection_2==3)
                      {
                        vector<LDRPPR> ltemp3;
                        // int TempEnnum;
                        long long int TempPNumber;
                        cout<<"Enter Enrolment Number Of a Student: ";
                        cin>>TempPNumber;
                        ifstream in("LDRPclassD.txt");
                        while(!in.fail() && !in.eof())
                        {
                            LDRPPR temp;
                            in>>temp;
                            ltemp3.push_back(temp);
                        }
                        int r=0;
                        int size=ltemp3.size();

                        while(size>0)
                        {
                            if(ltemp3[r].getpnum()==TempPNumber)
                            {
                                cout<<"Asked Details:  "<<endl;
                                cout<<ltemp3[r];
                            }
                                size--;
                                r++;
                        }
                        cout<<":) Happy"<<endl;
                        in.close();
                      }
                    }
   else
   {
    cout<<"ERROR :(";
   }
}