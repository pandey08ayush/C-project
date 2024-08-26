#include<iostream>
#include<fstream>
using namespace std;
#include"student.h"
int main()
{
Student S;
fstream F;
F.open("student.txt",ios::out|ios::app|ios::binary);
char ch;
do
{
S.getdata();
F.write((char*)&S,sizeof(S));
cout<<"Add More Records y/n:";
cin>>ch;
}
while(ch=='Y'||ch=='y');

F.close();
}
