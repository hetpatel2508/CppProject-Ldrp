#include<iostream>
#include<fstream>
#include<vector>

#include "LDRPheader.cpp"

using namespace std;

int main()
{
    cout<<endl;
   cout<<"***************************************************************************************************************"<<endl;
   cout<<"*                    LDRP Institute Of Technology & Research Computer Engineering Department                  *"<<endl;
   cout<<"***************************************************************************************************************"<<endl;
   cout<<"*                                                                                                             *"<<endl;
   cout<<"*               Press 1:  Class A                                                                             *"<<endl;
   cout<<"*               Press 2:  Class B                                                                             *"<<endl;
   cout<<"*               Press 3:  Class C                                                                             *"<<endl;
   cout<<"*               Press 4:  Class D                                                                             *"<<endl;
   cout<<"*               Press 5:  Class E                                                                             *"<<endl;
   cout<<"*                                                                                                             *"<<endl;
   cout<<"***************************************************************************************************************"<<endl;
   cout<<"                                        Operated By:Patel Het R."<<endl;
   cout<<"                                             E.Num.:22BECE30273 "<<endl<<endl<<endl<<endl<<endl;
        int fselect;
        cout<<"Enter Your Choice: ";
        cin>>fselect;
if(fselect==1)
{
    cout<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"*                     Welcome To Class - A                     *"<<endl;
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
if(fselect==2)
{
    cout<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"*                     Welcome To Class - B                     *"<<endl;
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
    add_studentB();
    }

            else if(Selection_1==2)
            {
student_details_allB();
            }
                    else if(Selection_1==3)
                    {
student_details_perticularB();
                    }
                            else if(Selection_1==4)
                            {
    replace_student_detailB();
                            }
                                    else if(Selection_1==5)
                                    {
delete_student_detailB();
                                    }
   else
   {
    cout<<"ERROR :(";
   }
}
if(fselect==3)
{
    cout<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"*                     Welcome To Class - C                     *"<<endl;
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
    add_studentC();
    }

            else if(Selection_1==2)
            {
student_details_allC();
            }
                    else if(Selection_1==3)
                    {
student_details_perticularC();
                    }
                            else if(Selection_1==4)
                            {
    replace_student_detailC();
                            }
                                    else if(Selection_1==5)
                                    {
delete_student_detailC();
                                    }
   else
   {
    cout<<"ERROR :(";
   }
}
if(fselect==4)
{
    cout<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"*                     Welcome To Class - D                     *"<<endl;
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
    add_studentD();
    }

            else if(Selection_1==2)
            {
student_details_allD();
            }
                    else if(Selection_1==3)
                    {
student_details_perticularD();
                    }
                            else if(Selection_1==4)
                            {
    replace_student_detailD();
                            }
                                    else if(Selection_1==5)
                                    {
delete_student_detailD();
                                    }
   else
   {
    cout<<"ERROR :(";
   }
}
if(fselect==5)
{
    cout<<endl;
   cout<<"****************************************************************"<<endl;
   cout<<"*                     Welcome To Class - E                     *"<<endl;
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
    add_studentE();
    }

            else if(Selection_1==2)
            {
student_details_allE();
            }
                    else if(Selection_1==3)
                    {
student_details_perticularE();
                    }
                            else if(Selection_1==4)
                            {
    replace_student_detailE();
                            }
                                    else if(Selection_1==5)
                                    {
delete_student_detailE();
                                    }
   else
   {
    cout<<"ERROR :(";
   }
}
}