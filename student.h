class Student
{
private:
int rollno,p,c,m;
char name[30];
public:
void getdata()
{
cout<<"Enter Roll no:";
cin>>rollno;
cout<<"Enter Name:";
cin>>name;
cout<<"Enter P,C,M marks:";
cin>>p>>c>>m;
}
void putdata()
{
cout<<"Roll no:"<<rollno<<","<<"Name:"<<name<<","<<"Physics:"<<p<<","<<"Math:"<<m<<","<<"Chemistry:"<<c;
cout<<endl;
}
int search(int rollno)
{
if(rollno==this->rollno)
{
return true;
}
else
{
return false;
}
}
int search(int min,int max)
{
int per=(p+c+m)/3;
cout<<per<<endl;
if(per>=min && per<=max)
{
return true;
}
else 
{
return false;
}
}
};

