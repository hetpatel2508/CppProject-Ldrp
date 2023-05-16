#include<iostream>
#include<fstream>
#include<vector>

#include "LDRPheader.cpp"

using namespace std;

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
    add_studentA();
    }

            else if(Selection_1==2)
            {
student_details_allA();
            }
                    else if(Selection_1==3)
                    {
student_details_perticularA();
                    }
                            else if(Selection_1==4)
                            {
    replace_student_detailA();
                            }
                                    else if(Selection_1==5)
                                    {
delete_student_detailA();
                                    }
   else
   {
    cout<<"ERROR :(";
   }
}