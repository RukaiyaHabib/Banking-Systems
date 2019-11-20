#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class STUDENT
{
public:
    int roll;
    string name;
    string session;
    string semester;
    string batch;

public:
    void add_info()
    {
        cout<<"\nENTER STUDENT'S NAME::";
        cin>>name;

        cout<<"\nENTER STUDENT'S ROLL::";
        cin>>roll;

        getchar();
        cout<<"\nENTER STUDENT'S SESSION::";
        cin>>session;

        cout<<"\nENTER STUDENT'S SEMESTER::";

        cin>>semester;
        cout<<"\nENTER STUDENT'S BATCH::";

        cin>>batch;

    }

    void edit_info(int R)
    {
        if(R==roll)
        {

            cout<<"Edit Roll (Y/N): ";
            char ch = getchar();
            if(ch=='Y') cout<<"Enter the edited information:\n";
            add_info();

        }
    }
    void search_info(int R)
    {
        if(R==roll)
        {
            cout<<"Detail Info given below:\n\n";
            display();
        }
    }
    void display()
    {
        cout<<"Student's roll: "<<roll<<"\nStudent's name: "<<name<<endl;
        cout<<"Student's semester: "<<semester<<"\nStudent's session: "<<session<<"\nStudent's batch: "<<batch<<endl<<endl;
    }
    void exit()
   {

    }
};

int main()
{
    cout<<"1 for add_info::\n2 for edit_info::\n3 for search_info::\n4 for display::\n5 for exit::\n";
    STUDENT s[100];
    int n,nbr,t,i;
        nbr = 0;
    while(cin>>n )
    {
        if(n==1)
        {
            cout<<"NUMBER OF STUDENTS: ";
            cin >> t;
            for(i=0; i<t; i++)
            {
                s[nbr].add_info();
                nbr++;
            }
        }

    if(n==2)
    {
        cout<<"Enter the roll to edit: ";
        cin >> t;
        getchar();
        for(i=0;i<nbr;i++)
        {
            s[i].edit_info(t);
        }
    }
    if(n==3)
    {
        cout<<"Enter the roll to Search: ";
        cin >> t;
        for(i=0;i<nbr;i++)
        {
            s[i].search_info(t);
        }
    }

        if(n==4)
        {
            for(i=0; i<nbr; i++)
            {

                s[i].display();

            }

        }
    if(n==5)
    {
        break;
    }


    cout<<"1 for add_info::\n2 for edit_info::\n3 for search_info::\n4 for display::\n5 for exit::\n";
    }
    return 0;
}


