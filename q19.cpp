#include<iostream>
#include<fstream>
#include<string>
#define max 90
using namespace std;
int main(int args, char*argv[])
{
if(args != 4)
{
cout<<"wrong no. of arguments\n";
return -1;
}ifstream ffile(argv[1]);
if(ffile.fail())
{
cout<<"unable to open file 1";
return -1;
}
cout<<"\nfile with float values :\n";
while(true)
{
float temp;
ffile>>temp;
if(ffile.eof())
break;
cout<<temp<<" ";
}
ifstream sfile(argv[2]);
if(sfile.fail())
{
cout<<"unable to open file 2";
return -1;
}
cout<<"\n\nstring file :\n";
while(true)
{
string temp;
getline(sfile,temp);
if(sfile.eof())
break;
cout<<temp<<endl;
}
ffile.close();
sfile.close();
ffile.open(argv[1],ios::in);
sfile.open(argv[2],ios::in);
ofstream ofile(argv[3]);if(ofile.fail())
{
cout<<"unable to open file 3 ";
return -1;
}
while(true)
{
float f;
ffile>>f;
if(ffile.eof())
break;
ofile<<f<<' ';
string temp;
getline(sfile,temp);
if(sfile.eof() )
break;
ofile<<temp<<'\n';
}
while(true)
{
float f;
ffile>>f;if(ffile.eof())
break;
ofile<<f<<' ';
}
while(true)
{
string temp;
getline(sfile,temp);
if(sfile.eof())
break;
ofile<<temp<<"\n";
}
sfile.close();
ffile.close();
ofile.close();
ifstream out(argv[3]);
if(out.fail())
{
cout<<"unable to open file 3.1 ";
return -1;
}
cout<<"\n\nprinting merged file \n";
while(true)
{
char temp;
out.get(temp);
if(out.eof())
break;
cout<<temp;
}
out.close();
return 0;
}
