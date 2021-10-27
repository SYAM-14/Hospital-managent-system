#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>


void details();
using namespace std;

class one
{
    public:
        virtual void get()=0;
        virtual void show()=0;

};

class krishna:public one
{
 public:
    char all[1000];
    char name[50],age[20],appt[30],appn[20];

    void get()
    {
        ofstream out("krishna.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter patients name:";
            cin.getline(name,50);
            cout<<"\nEnter patients age:";
            cin.getline(age,20);
            cout<<"\nAppointment time:";
            cin.getline(appt,30);
            cout<<"\nEnter your appointment number:";
            cin.getline(appn,20);
        }
        out<<"\nNAME: "<<name<<"\nAGE: "<<age<<"\nAPPT TIME: "<<appt<<"\nAPPT NUMBER: "<<appn<<"\n\n";
        out.close();
        cout<<"\n\n!!DATA SAVED SUCCESFULLY!!";
        getch();
        details();
    } 
    void show()
    {
        ifstream in("krishna.txt");
        if(!in)
        {
            cout<<"ERROR OPENING!!";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;
        }

        in.close();
        cout<<"\n\nTO CONTINUE PRESS ANY KEY: ";
        getch();
        details();
    }


};
class krishnaprasad:public one
{
 public:
    char all[1000];
    char name[50],age[20],appt[30],appn[20];

    void get()
    {
        ofstream out("krishnaprasad.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter patients name:";
            cin.getline(name,50);
            cout<<"\nEnter patients age:";
            cin.getline(age,20);
            cout<<"\nAppointment time:";
            cin.getline(appt,30);
            cout<<"\nEnter your appointment number:";
            cin.getline(appn,20);
        }
        out<<"\nNAME: "<<name<<"\nAGE: "<<age<<"\nAPPT TIME: "<<appt<<"\nAPPT NUMBER: "<<appn<<"\n\n";
        out.close();
        cout<<"\n\n!!DATA SAVED SUCCESFULLY!!";
        getch();
        details();
    } 
    void show()
    {
        ifstream in("krishnaprasad.txt");
        if(!in)
        {
            cout<<"ERROR OPENING!!";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;
        }

        in.close();
        cout<<"\n\nTO CONTINUE PRESS ANY KEY: ";
        getch();
        details();
    }


};
class jayakumari:public one
{
 public:
    char all[1000];
    char name[50],age[20],appt[30],appn[20];

    void get()
    {
        ofstream out("jayakumari.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter patients name:";
            cin.getline(name,50);
            cout<<"\nEnter patients age:";
            cin.getline(age,20);
            cout<<"\nAppointment time:";
            cin.getline(appt,30);
            cout<<"\nEnter your appointment number:";
            cin.getline(appn,20);
        }
        out<<"\nNAME: "<<name<<"\nAGE: "<<age<<"\nAPPT TIME: "<<appt<<"\nAPPT NUMBER: "<<appn<<"\n\n";
        out.close();
        cout<<"\n\n!!DATA SAVED SUCCESFULLY!!";
        getch();
        details();
    } 
    void show()
    {
        ifstream in("jayakumari.txt");
        if(!in)
        {
            cout<<"ERROR OPENING!!";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;
        }

        in.close();
        cout<<"\n\nTO CONTINUE PRESS ANY KEY: ";
        getch();
        details();
    }


};
class gafoor:public one
{
 public:
    char all[1000];
    char name[50],age[20],appt[30],appn[20];

    void get()
    {
        ofstream out("gafoor.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter patients name:";
            cin.getline(name,50);
            cout<<"\nEnter patients age:";
            cin.getline(age,20);
            cout<<"\nAppointment time:";
            cin.getline(appt,30);
            cout<<"\nEnter your appointment number:";
            cin.getline(appn,20);
        }
        out<<"\nNAME: "<<name<<"\nAGE: "<<age<<"\nAPPT TIME: "<<appt<<"\nAPPT NUMBER: "<<appn<<"\n\n";
        out.close();
        cout<<"\n\n!!DATA SAVED SUCCESFULLY!!";
        getch();
        details();
    } 
    void show()
    {
        ifstream in("gafoor.txt");
        if(!in)
        {
            cout<<"ERROR OPENING!!";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;
        }

        in.close();
        cout<<"\n\nTO CONTINUE PRESS ANY KEY: ";
        getch();
        details();
    }


};


class staff:public one
{
 public:
    char all[1000];
    char name[50],age[20],sal[30],pos[20];

    void get()
    {
        ofstream out("staff.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter your name:";
            cin.getline(name,50);
            cout<<"\nEnter your age:";
            cin.getline(age,20);
            cout<<"\nEnter your salary:";
            cin.getline(sal,30);
            cout<<"\nEnter your job position:";
            cin.getline(pos,20);
        }
        out<<"\nNAME: "<<name<<"\nAGE: "<<age<<"\nSALARY: "<<sal<<"\nJOB POSITION: "<<pos<<"\n\n";
        out.close();
        cout<<"\n\n!!DATA SAVED SUCCESFULLY!!";
        getch();
        details();
    } 
    void show()
    {
        ifstream in("staff.txt");
        if(!in)
        {
            cout<<"ERROR OPENING!!";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;
        }

        in.close();
        cout<<"\n\nTO CONTINUE PRESS ANY KEY: ";
        getch();
        details();
    }


};

class information
{
    public:
        void dr_info()
        {
            system("cls");
            system("color F3");
            cout<<"\n========================================================================================\n";
            cout<<"\n\n\t\tAVAILABLE DOCTORS AND THIER TIMINGS\n\n\n";
            cout<<"\n-----------------------------------------------------------\n";


            cout<<"\nDr .krisha viswakumar (pediatrician | child specialist)\n\n";
            cout<<"\t\t\t[[timings]]:\n\n";
            cout<<"monday to friday\t\t\t9AM TO 4.30PM\n";
            cout<<"saturday        \t\t\t9AM TO 1.30PM\n";
            cout<<"sunday           \t\t\tOFF\n";
            cout<<"\n-----------------------------------------------------------\n";

            cout<<"\nDr .krishaprasad K G (Orthopedic | bone specialist)\n\n";
            cout<<"\t\t\t[[timings]]:\n\n";
            cout<<"monday to friday\t\t\t9AM TO 3.30PM\n";
            cout<<"saturday        \t\t\t9AM TO 1.30PM\n";
            cout<<"sunday           \t\t\tOFF\n";
            cout<<"\n-----------------------------------------------------------\n";


            cout<<"\nDr .jayakumari p (cardiologist | heart specialist)\n\n";
            cout<<"\t\t\t[[timings]]:\n\n";
            cout<<"monday to friday\t\t\t9AM TO 7.30PM\n";
            cout<<"saturday        \t\t\t9AM TO 3.30PM\n";
            cout<<"sunday           \t\t\tOFF\n";
            cout<<"\n-----------------------------------------------------------\n";


            cout<<"\nDr .Mohammed Gafoor (general doctor)\n\n";
            cout<<"\t\t\t[[timings]]:\n\n";
            cout<<"monday to friday\t\t\t9AM TO 8.30PM\n";
            cout<<"saturday        \t\t\t9AM TO 3.30PM\n";
            cout<<"sunday           \t\t\tOFF\n";
            cout<<"\n-----------------------------------------------------------\n";
            
            cout<<"\n\nTO CONTINUE PRESS ANY KEY: ";
            getch();
            details();            
            
        }
        
};
void dr_call()
    {
        system("cls");
        int choice;
        cout<<"\n\n\n\t press 1 for Dr. krisha viswakumar\n\n \n\n\n\t press 2 for Dr .krishaprasad K G \n\n \n\n\n\t press 3 for Dr .jayakumari p\n\n \n\n\n\t press 4 for Dr. Mohammed Gafoor\n\n ";
        cin>>choice;

        one*ptr;
        krishna s2;
        krishnaprasad s3;
        jayakumari s4;
        gafoor s5;

        if(choice==1)
            {
                ptr=&s2;
                ptr->get();
            }
        if(choice==2)
            {
                ptr=&s3;
                ptr->get();
            }
        if(choice==3)
            {
                ptr=&s4;
                ptr->get();
            }
        if(choice==4)
            {
                ptr=&s5;
                ptr->get();
            }
        else
            {
                cout<<"INVALID CHOICE: ";
                getch();
                details();
            }

    }
void patient_info()
    {
        system("cls");
        int choice;
        cout<<"\n\n\n\t press 1 for Dr. krisha viswakumar patient info\n\n \n\n\n\t press 2 for Dr .krishaprasad K G patient info \n\n \n\n\n\t press 3 for Dr .jayakumari patient info patient info\n\n \n\n\n\t press 4 for Dr. Mohammed Gafoor patient info\n\n ";
        cin>>choice;

        one*ptr;
        krishna s2;
        krishnaprasad s3;
        jayakumari s4;
        gafoor s5;

        if(choice==1)
            {
                ptr=&s2;
                ptr->show();
            }
        if(choice==2)
            {
                ptr=&s3;
                ptr->show();
            }
        if(choice==3)
            {
                ptr=&s4;
                ptr->show();
            }
        if(choice==4)
            {
                ptr=&s5;
                ptr->show();
            }
        else
            {
                cout<<"INVALID CHOICE: ";
                getch();
                details();
            }

}

void details()
	{
		system("cls");
		system("color FC");
        
		cout<<"\n\n|********WELCOME TO NIRMA HOSPITAL*********|\n";
        cout<<"         hospital management system        \n";
        cout<<"===============================================\n\n";
		
		cout<<" please select an option \n";
		
		cout<<"\n\n";
        cout<<"\nPress 1 for checking avialable Doctor information\n";
        cout<<"\nPress 2 for doctors appointment\n";
        cout<<"\nPress 3 for saving staff information\n";
        cout<<"\nPress 4 for checking patient appointment menu\n";
        cout<<"\nPress 5 for checking staff information menu\n";
        cout<<"======================================================\n\n";
        cout<<"\n\n Entet your choice: ";
		
        information a1;
        one *ptr;
        staff a2;
        int a;
        cin>>a;
        if(a==1)
        {
            a1.dr_info();
        }
        else if(a==2)
        {
            dr_call();
        }
		else if(a==3)
        {
            ptr=&a2;        
            ptr->get();    
        }
        else if(a==4)
        {
            patient_info();   
        }
    
        else if(a==5)
        {
            ptr=&a2;
            ptr->show();
        }
		else
        {
            cout<<"invalid choice";
        }
		
    }
int main()
{
    details();
    system("pause");
}
