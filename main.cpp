#include <iostream>
#include <cstdlib>
#include <limits>
#include <windows.h>
using namespace std;
int main()
{
    int h, m, s, err, a;
    err=a=0;
    cout<<"Welcome to the clock maker"<<endl;
    while (err<1)
    {
        cout<<"Type the hour: ";
        cin>>h;
        system("cls");
        while(1)
{
if(cin.fail())
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout<<"You have to enter a number, not letters"<<endl;
cout<<"Type the hour: ";
cin>>h;
system("cls");
}
if(!cin.fail())
break;
}
        cout<<"Type the minutes: ";
        cin>>m;
        system("cls");
        while(1)
{
if(cin.fail())
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout<<"You have to enter a number, not letters"<<endl;
cout<<"Type the minutes: ";
cin>>m;
system("cls");
}
if(!cin.fail())
break;
}
        cout<<"Type the seconds: ";
        cin>>s;
        system("cls");
        while(1)
{
if(cin.fail())
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout<<"You have to enter a number, not letters"<<endl;
cout<<"Type the seconds: ";
cin>>s;
system("cls");
}
if(!cin.fail())
break;
}
        if(h>0&&h<24&&m>0&&m<60&&s>0&&s<60)
            {
            err++;
        }
        system("cls");
    }
    while(a<1){
        cout<<h<<":"<<m<<":"<<s;
        Sleep(1000);
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>23){
            h=1;
        }
        system("cls");

    }


    return 0;
}
