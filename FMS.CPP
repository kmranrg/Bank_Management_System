#include<fstream.h>
#include<conio.h>
/* This function writes on the file */
void writing(int data)
{
 ofstream fout;
 fout.open("file.dat");
 fout<<data;
 fout.close();
}
/* This function reads the file */
void reading(int data)
{
 ifstream fin;
 fin.open("file.dat");
 fin>>data;
 fin.close();
}
void main()
{
 clrscr();
 int data;
 cout<<"Enter the number :"<<endl;
 cin>>data;
 writing(data);
 cout<<"\n\n\t\treading from file...\n\n";
 reading(data);
 cout<<data;
 getch();
}