#include "LDRPheader.h"

LDRPPR::LDRPPR()
{
Enrolment_number=0;
Name="None";
P_number=0;
}

LDRPPR::LDRPPR(int En,std::string n,long long int p)
{
Enrolment_number=En;
Name=n;
P_number=p;
}

int LDRPPR::geten(){return Enrolment_number;}

std::string LDRPPR::getname(){return Name;}

long long int LDRPPR::getpnum(){return P_number;}

void LDRPPR::seten(int en){Enrolment_number=en;}

void LDRPPR::setname(std::string n){Name=n;}

void LDRPPR::setpnum(long long int pn){P_number=pn;}

std::ostream & operator<<(std::ostream &out,LDRPPR &l)
{
out<<l.Enrolment_number<<"  "<<l.Name<<"  "<<l.P_number<<"\n";
return out;
}
std::istream & operator>>(std::istream &in,LDRPPR &l)
{
    in>>l.Enrolment_number>>l.Name>>l.P_number;
    return in;
}

void add_studentA()
{
    // Press 1: Add Student Details 
    std::vector<LDRPPR *> ltemp1;
    int Entries;
    std::cout << "How Many Student Entries You Want To Enter: ";
    std::cin >> Entries;
    
    std::ofstream out("LDRPclassD.txt", std::ios::app);
    
    for(int i = 0; i < Entries; i++)
    {
        int En;
        std::string n;
        long long int p;

        std::cout << "Enter Enrolment Number: ";
        std::cin >> En;
        std::cout << "Enter Enrolment Name: ";
        std::cin >> n;
        std::cout << "Enter Enrolment Price: ";
        std::cin >> p;

        ltemp1.push_back(new LDRPPR(En, n, p));
    }

    for(int i = 0; i < Entries; i++)
    {
        out << "\n" << ltemp1[i]->geten() << "  " << ltemp1[i]->getname() << "  " << ltemp1[i]->getpnum();
    }

    out.close();
}

void student_details_allA()

{
            // Press 2: Get All Student's Details
            std::vector<LDRPPR> ltemp2;

            std::ifstream in("LDRPclassD.txt");

            while(!in.fail() && !in.eof())
            {
                LDRPPR te;
                in>>te;
                ltemp2.push_back(te);
            }

            for(auto x:ltemp2)
            {
            std::cout<<x; 
            }
            in.close();

}

void student_details_perticularA()
{
    // Press 3: Get Particular Student's Details
    std::cout << "****************************************************************" << std::endl;
    std::cout << "*                                                              *" << std::endl;
    std::cout << "*    Press 1:Going By Enrolment Number                         *" << std::endl;
    std::cout << "*    Press 2:Going By Name                                     *" << std::endl;
    std::cout << "*    Press 3:Going By Phone Number                             *" << std::endl;
    std::cout << "*                                                              *" << std::endl;
    std::cout << "****************************************************************" << std::endl;
    
    int Selection_2;
    std::cout << "Enter Your Choice: ";
    std::cin >> Selection_2;
    
    if (Selection_2 == 1)
    {
        std::vector<LDRPPR> ltemp3;
        std::ifstream in("LDRPclassD.txt");
        
        while (!in.fail() && !in.eof())
        {
            LDRPPR temp;
            in >> temp;
            ltemp3.push_back(temp);
        }
        
        int TempEnnum;
        std::cout << "Enter Enrolment Number Of a Student: ";
        std::cin >> TempEnnum;
        int r = 0;
        int tr;
        int size = ltemp3.size();
        
        while (size > 0)
        {
            if (ltemp3[r].geten() == TempEnnum)
            {
                std::cout << "Asked Details: " << std::endl;
                std::cout << ltemp3[r];
            }
            r++;
            size--;
        }
        
        std::cout << ":) Happy" << std::endl;
        in.close();
    }
    
    if (Selection_2 == 2)
    {
        std::vector<LDRPPR> ltemp3;
        std::string Tempname;
        std::cout << "Enter Name Of a Student: ";
        std::cin >> Tempname;
        std::ifstream in("LDRPclassD.txt");
        
        while (!in.fail() && !in.eof())
        {
            LDRPPR temp;
            in >> temp;
            ltemp3.push_back(temp);
        }
        
        int r = 0;
        int size = ltemp3.size();
        
        while (size > 0)
        {
            if (ltemp3[r].getname() == Tempname)
            {
                std::cout << "Asked Details: " << std::endl;
                std::cout << ltemp3[r];
            }
            r++;
            size--;
        }
        
        std::cout << ":) Happy" << std::endl;
        in.close();
    }
    
        if(Selection_2==3)
                      {
                        std::vector<LDRPPR> ltemp3;
                        // int TempEnnum;
                        long long int TempPNumber;
                        std::cout<<"Enter Enrolment Number Of a Student: ";
                        std::cin>>TempPNumber;
                        std::ifstream in("LDRPclassD.txt");
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
                                std::cout<<"Asked Details:  "<<std::endl;
                                std::cout<<ltemp3[r];
                            }
                                size--;
                                r++;
                        }
                        std::cout<<":) Happy"<<std::endl;
                        in.close();
                      }
}
void replace_student_detailA()
{
                                int entry;
                                std::cout<<"How Many Detail's Of Student You Wants To Change: ";
                                std::cin>>entry;
                                for(int i=1;i<=entry;i++)
                              {
                                std::cout<<"For "<<i<<" Student"<<std::endl<<std::endl;
                                // Press 4: Replace Student Details
                                std::cout<<"****************************************************************"<<std::endl;
                                std::cout<<"*                                                              *"<<std::endl;
                                std::cout<<"*    Press 1:Going By Enrolment Number                         *"<<std::endl;
                                std::cout<<"*    Press 2:Going By Name                                     *"<<std::endl;
                                std::cout<<"*    Press 3:Going By Phone Number                             *"<<std::endl;
                                std::cout<<"*                                                              *"<<std::endl;
                                std::cout<<"****************************************************************"<<std::endl;
                                
                                int Selection_4;
                                std::cout<<"Enter Your Choice: ";
                                std::cin>>Selection_4;
                                if(Selection_4==1)
                                {
                                    int tempenno;
                                    std::cout<<"Enter Enrolment Number: ";
                                    std::cin>>tempenno;
                                    std::vector<LDRPPR> ltemp4;

                                    std::ifstream in("LDRPclassD.txt");

                                    while(!in.fail() && !in.eof())
                                    {
                                        LDRPPR temp;
                                        in>>temp;
                                        ltemp4.push_back(temp);
                                    }

                                    int size=ltemp4.size();
                                    int t=0,r;

                                    while(size>0)
                                    {
                                        if(ltemp4[t].geten()==tempenno)
                                        {
                                            int en;
                                            std::cout<<"Enter New Enrolment Number For '"<<ltemp4[t].geten()<<"' :  ";
                                            std::cin>>en;
                                            ltemp4[t].seten(en);
                                            r=t;
                                        }
                                        t++;
                                        size--;
                                    }
                                    std::cout<<"After Changes: "<<"\n"<<ltemp4[r].geten()<<"  "
                                                            <<ltemp4[r].getname()<<"  "
                                                            <<ltemp4[r].getpnum()<<std::endl<<std::endl;
                                    

                                    in.close();
                                    std::ofstream out("LDRPclassD.txt");

                                    for(auto x: ltemp4)
                                    {
                                        out<<x;
                                    }

                                    out.close();
                                }
                               
                               else if(Selection_4==2)
                                {
                                    std::string tempen;
                                    std::cout<<"Enter Name: ";
                                    std::cin>>tempen;
                                    std::vector<LDRPPR> ltemp4;

                                    std::ifstream in("LDRPclassD.txt");

                                    while(!in.fail() && !in.eof())
                                    {
                                        LDRPPR temp;
                                        in>>temp;
                                        ltemp4.push_back(temp);
                                    }

                                    int size=ltemp4.size();
                                    int t=0,r;

                                    while(size>0)
                                    {
                                        if(ltemp4[t].getname()==tempen)
                                        {
                                            std::string n;
                                            std::cout<<"Enter New Name For '"<<ltemp4[t].getname()<<"' :  ";
                                            std::cin>>n;
                                            ltemp4[t].setname(n);
                                            r=t;
                                        }
                                        t++;
                                        size--;
                                    }
                                    std::cout<<"After Changes: "<<"\n"<<ltemp4[r].geten()<<"  "
                                                            <<ltemp4[r].getname()<<"  "
                                                            <<ltemp4[r].getpnum()<<std::endl<<std::endl;
                                    
                                    in.close();

                                    std::ofstream out("LDRPclassD.txt");
                                    for(auto y: ltemp4)
                                    {
                                        out<<y;
                                    }

                                    out.close();

                                }

                                else if(Selection_4==3)
                                {
                                    long long int temppn;
                                    std::cout<<"Enter Phone Number: ";
                                    std::cin>>temppn;
                                    std::vector<LDRPPR> ltemp4;

                                    std::ifstream in("LDRPclassD.txt");

                                    while(!in.fail() && !in.eof())
                                    {
                                        LDRPPR temp;
                                        in>>temp;
                                        ltemp4.push_back(temp);
                                    }

                                    int size=ltemp4.size();
                                    int t=0,r=-1;

                                    while(size>0)
                                    {
                                        if(ltemp4[t].getpnum()==temppn)
                                        {
                                            long long int p;
                                            std::cout<<"Enter New Phone Number For '"<<ltemp4[t].getpnum()<<"' :  ";
                                            std::cin>>p;
                                            ltemp4[t].setpnum(p);
                                            r=t;
                                        }
                                        t++;
                                        size--;
                                    }
                                    if(r>=0)
                                    {
                                        std::cout<<"After Changes: "<<"\n"<<ltemp4[r].geten()<<"  "
                                                            <<ltemp4[r].getname()<<"  "
                                                            <<ltemp4[r].getpnum()<<std::endl<<std::endl;
                                    }
                                    
                                    in.close();

                                    std::ofstream out("LDRPclassD.txt");
                                    for(auto z: ltemp4)
                                    {
                                        out<<z;
                                    }

                                    out.close();

                                }
                                else{std::cout<<"ERROR :(";}
                              }
}
void delete_student_detailA()
                                    {
                                    //  Press 5: Delete Student Details   
                                    // t.erase(t.begin()+t);
                                    int choice;
                                    std::cout<<"How Many Student Details You Want To Delete: ";
                                    std::cin>>choice;
                                    for(int i=0;i<choice;i++)
                                    {
                                        std::cout<<"****************************************************************"<<std::endl;
                                        std::cout<<"*                                                              *"<<std::endl;
                                        std::cout<<"*    Press 1:Going By Enrolment Number                         *"<<std::endl;
                                        std::cout<<"*    Press 2:Going By Name                                     *"<<std::endl;
                                        std::cout<<"*    Press 3:Going By Phone Number                             *"<<std::endl;
                                        std::cout<<"*                                                              *"<<std::endl;
                                        std::cout<<"****************************************************************"<<std::endl;
                                        
                                        int chh;
                                        std::cout<<"Enter Your Choice:  ";
                                        std::cin>>chh;
                                        if(chh==1)
                                        {
                                            int ten;
                                            std::cout<<"Enter Enrolment Number: ";
                                            std::cin>>ten;
                                            std::vector<LDRPPR> ltemp5;
                                            std::ifstream in("LDRPclassD.txt");
                                            while(!in.fail() && !in.eof())
                                            {
                                                LDRPPR temp;
                                                in>>temp;
                                                ltemp5.push_back(temp);
                                            }
                                            int size=ltemp5.size();
                                            int t=0;

                                            while(size>0)
                                            {
                                                if(ltemp5[t].geten()==ten)
                                                {
                                                    std::cout<<ltemp5[t].geten()<<" "<<ltemp5[t].getname()<<" "<<ltemp5[t].getpnum()<<"  is  Deleted..."<<std::endl;
                                                    ltemp5.erase(ltemp5.begin()+t);
                                                }
                                                t++;
                                                size--;
                                            }
                                            in.close();

                                            std::ofstream out("LDRPclassD.txt");

                                            for(auto x: ltemp5)
                                            {
                                                out<<x;
                                            }
                                            out.close();
                                        }
                                        else if(chh==2)
                                        {
                                            std::string tname;
                                            std::cout<<"Enter Name: ";
                                            std::cin>>tname;
                                            std::vector<LDRPPR> ltemp5;
                                            std::ifstream in("LDRPclassD.txt");
                                            while(!in.fail() && !in.eof())
                                            {
                                                LDRPPR temp;
                                                in>>temp;
                                                ltemp5.push_back(temp);
                                            }
                                            int size=ltemp5.size();
                                            int t=0;

                                            while(size>0)
                                            {
                                                if(ltemp5[t].getname()==tname)
                                                {
                                                    std::cout<<ltemp5[t].geten()<<" "<<ltemp5[t].getname()<<" "<<ltemp5[t].getpnum()<<"  is  Deleted..."<<std::endl;
                                                    ltemp5.erase(ltemp5.begin()+t);
                                                }
                                                t++;
                                                size--;
                                            }
                                            in.close();

                                            std::ofstream out("LDRPclassD.txt");

                                            for(auto x: ltemp5)
                                            {
                                                out<<x;
                                            }
                                            out.close();
                                        }
                                        if(chh==3)
                                        {
                                            long long int tpn;
                                            std::cout<<"Enter Phone Number: ";
                                            std::cin>>tpn;
                                            std::vector<LDRPPR> ltemp5;
                                            std::ifstream in("LDRPclassD.txt");
                                            while(!in.fail() && !in.eof())
                                            {
                                                LDRPPR temp;
                                                in>>temp;
                                                ltemp5.push_back(temp);
                                            }
                                            int size=ltemp5.size();
                                            int t=0;

                                            while(size>0)
                                            {
                                                if(ltemp5[t].getpnum()==tpn)
                                                {
                                                    std::cout<<ltemp5[t].geten()<<" "<<ltemp5[t].getname()<<" "<<ltemp5[t].getpnum()<<"  is  Deleted..."<<std::endl;
                                                    ltemp5.erase(ltemp5.begin()+t);
                                                }
                                                t++;
                                                size--;
                                            }
                                            in.close();

                                            std::ofstream out("LDRPclassD.txt");

                                            for(auto x: ltemp5)
                                            {
                                                out<<x;
                                            }
                                            out.close();
                                        }
                                        else{std::cout<<"Error :)";}
                                    }

                                    }