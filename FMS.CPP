#include<fstream.h>
#include<conio.h>
/* This function writes on the file */
void writing(char data[10])
{
 ofstream fout;
 fout.open("file.dat");
 fout<<data;
 fout.close();
}
/* This function reads the file */
void reading(char data[10])
{
 ifstream fin;
 fin.open("file.dat");
 fin>>data;
 fin.close();
}
void main()
{
 clrscr();
 char data[10];
 cout<<"Enter the number :"<<endl;
 cin.getline(data,10);
 writing(data);
 cout<<"\n\n\t\treading from file...\n\n";
 reading(data);
 cout<<data;
 getch();
}