#include<iostream>
#include<fstream>
using namespace std;
#include"student.h"
int main()
{
Student S;
fstream F;
int min,max;
F.open("student.txt",ios::in|ios::app|ios::binary);
 if(F.bad())
 {
cout<<"fAIL TO OPEN:";
 }
 else
 {  
cout<<"Enter Min percentage no u wants to search:";
cin>>min;
cout<<"Enter Max Percentsge you wants to search:";
cin>>max;
int found,count;
while(!F.eof())
{
F.read((char*)&S,sizeof(S));
if(F.eof()) break;
found=S.search(min,max);
if(found)
{
S.putdata();
count++;
}
}
if(count==0)
{
cout<<"Records Not EXIST:";
}
else
{
cout<<"Record Found:"<<count<<endl;
}
}
F.close();
}
