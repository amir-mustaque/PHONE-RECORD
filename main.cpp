#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
string name[50];
string phoneno[50];
string mobileno[50];
string faxno[50];
string email[50];
string adress[50];
int counter = -1;
int validatecounter(string tmpname)
{
    for(int i=0;i<=counter;i++)
    {
        if(name[i]==tmpname)
        {
            return 0;
        }
    }
    return 1;
}
void addcontact()
{
    string tmpname ="";
    cout<<"enter name: ";
    cin>>tmpname;
    if(validatecounter(tmpname)==1)
    {
        counter++;
        name[counter]=tmpname;
    }
    else 
    {
        cout<<endl<<"contact already exist with this name"<<endl;
        return;
    }
    cout<<"enter phone number :   ";
    cin>>phoneno[counter];
    cout<<"enter mobile number :   ";
    cin>>mobileno[counter];
    cout<<"enter fax number :    ";
    cin>>faxno[counter];
    cout<<"enter email no  :   ";
    cin>>email[counter];
    cout<<"enter adress no :  ";
    cin>>adress[counter];
}
void print(int tmpcounter)
{
    if (name[tmpcounter]=="")
    {
        return;
    }
    if(counter > -1){
        cout<<"name : "<<name[tmpcounter]<<endl;
        cout<<"phone no :  "<<phoneno[tmpcounter]<<endl;
        cout<<"mobileno :  "<<mobileno[tmpcounter]<<endl;
        cout<<"faxno :  "  <<faxno[counter]<<endl;
        cout<<"email :  "  <<email[tmpcounter]<<endl;
        cout<<"address : "<<adress[tmpcounter]<<endl;
        cout<<"PRESS ANY KEY TO VEIW NEXT / CONTINUE....."<<endl<<endl;
        getch();
    }
}
void printall()
{
    if(counter > -1)
    {
        for(int i=0; i<=counter;i++)
        {
            print(i);
        }
    }
}
void updatecontact(int tmpcounter)
{
    string tmpname="";
    cout<<"entee name";
    cin>>tmpname;
    if( validatecounter(tmpname) )
    {
        name[tmpcounter]=tmpname;
    }
    else 
    {
        cout<<endl<<"contact already exist"<<endl;
    }
     cout<<"enter phone number : ";
    cin>>phoneno[tmpcounter];
    cout<<"enter mobile number : ";
    cin>>mobileno[tmpcounter];
    cout<<"enter fax number : ";
    cin>>faxno[tmpcounter];
    cout<<"enter email no";
    cin>>email[tmpcounter];
    cout<<"enter adress no : ";
    cin>>adress[tmpcounter];
}
void deletecontact(int tmpcounter)
{
    name[tmpcounter]="";
    phoneno[tmpcounter]="";
    mobileno[tmpcounter]="";
    faxno[tmpcounter]="";
    email[tmpcounter]="";
    adress[tmpcounter]="";
}
int findcounter()
{
    if( counter <0)
        return -1;
    string tmpname;
    cout<<"enter name";
    cin>>tmpname;
    for(int i=0;i<=counter;i++)
    {
        if(name[i] == tmpname)
        {
            return i;
            
        }
    }
    return 1;
}
int main()
{
    char op;
    do{
        system("cls");
        cout<<"1. add contact"<<endl;
        cout<<"2. list contact"<<endl;
        cout<<"3. search contact"<<endl;
        cout<<"4. update contact"<<endl;
        cout<<"5. delete contact"<<endl;
        cout<<"6. exit"<<endl<<endl;
        cout<<"enter option (1-6) : ";
        cin>>op;
        
        switch(op)
        {
            case '1':
            {
                addcontact();
                cout<<"contact added sucessfully......"<<endl;
                cout<<"press any key to continue";
                getch();
                break;
            }
            case '2':
            {
                printall();
                break;
            }
            case '3' :
            {
                int tmpcounter = findcounter();
                if(tmpcounter > -1)
                {
                    print(tmpcounter);
                }
                break;
            }
            case '4':
            {
                int tmpcounter= findcounter();
                if ( tmpcounter > -1)
                {
                    updatecontact(tmpcounter);
                }
                break;
            }
            case '5' :
            {
                int tmpcounter = findcounter();
                if(tmpcounter > -1)
                {
                    deletecontact(tmpcounter);
                }
                break;
            }
            case '6' :
            {
                continue;
                break;
            }
        }
    } while (op !='6');
    return 0;
}
































































