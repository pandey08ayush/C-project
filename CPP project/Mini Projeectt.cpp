#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
int ch;
do
{
cout<<"Main Menu\n1]Insert Record\n2]Display All\n3]Search by Roll no\n4]Search by Percentage\n5]Exit\n:";
cout<<"Enter your Choice:";
cin>>ch;
switch(ch)
{
case 1:
system("insertrecord.exe");
break;
case 2:
system("display.exe");
break;
case 3:
system("search.exe");
break;
case 4:
system("searchbypp.exe");
break;
case 5:
cout<<"Good Bye:";
break;
default:
cout<<"Wrong Option:";
}
}
while(ch!=5);
}

