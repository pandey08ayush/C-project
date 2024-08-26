#include<iostream>
#include<fstream>
using namespace std;
#include"student.h"
int main()
{
Student S;
fstream F;
F.open("student.txt",ios::in|ios::app|ios::binary);
 if(F.bad())
 {
cout<<"fAIL TO OPEN:";
 }
 else
 {
while(!F.eof())
{
F.read((char*)&S,sizeof(S));
if(F.eof()) break;
S.putdata();
}
}
F.close();
}
