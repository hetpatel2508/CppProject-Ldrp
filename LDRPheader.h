#ifndef _LDRPheader_H_
#define _LDRPheader_H_

#include<iostream>
#include<fstream>
#include<vector>


class LDRPPR
{
private:
int Enrolment_number;
std::string Name;
long long int P_number;

public:

LDRPPR();
LDRPPR(int En,std::string n,long long int p);

int geten();

std::string getname();
long long int getpnum();

void seten(int en);
void setname(std::string n);
void setpnum(long long int pn);

friend std::ostream & operator<<(std::ostream &out,LDRPPR &l);
friend std::istream & operator>>(std::istream &in,LDRPPR &l);

};


#endif