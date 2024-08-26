#include<iostream>
#include<fstream>
using namespace std;
#include"student.h"
int main()
{
Student S;
fstream F;
int rollno;
F.open("student.txt",ios::in|ios::app|ios::binary);
 if(F.bad())
 {
cout<<"fAIL TO OPEN:";
 }
 else
 {  
cout<<"Enter Roll no u wants to search:";
cin>>rollno;
int found;
while(!F.eof())
{
F.read((char*)&S,sizeof(S));
if(F.eof()) break;
found=S.search(rollno);
if(found)
{
S.putdata();
break;
}
}
if(!found)
{
cout<<"Roll no not exist:";
}
}
F.close();
}
