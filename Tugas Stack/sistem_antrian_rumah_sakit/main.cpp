#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
  using namespace std;
 char password [20];
char username [20];
char pil;
int jml;
void awal(){
	cout<<"________________________________________________________________________________"<<endl;}

void mulai()
{
     awal();
	cout<<"\t\tprogram by Tofa Riyadi, Haslina, M. Isa Anshari"<<endl;
	awal();
	cout<<"\t\t\tMahasiswa Universitas Ahmad Dahlan"<<endl<<endl;
	awal();
    }



void delay();

struct node
{
   char kar;
   node *next;
};
   node *tail;   //ekor
   node *now;
   node *head;

void clrscr()
{
system("cls");
}
void gotoxy(int x, int y)
{
HANDLE hConsoleOutput;
COORD dwCursorPosition;
cout.flush();
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}


void buatnodebaru()
{
  tail=NULL;
  head=NULL;
}
void push(char ch)
{
 now=new node;
 if(head==NULL)
 {
   now->kar=ch;
   now->next=NULL;
   tail=now;
  head=now;

 }
 else
 {
   now->kar=ch;
   now->next=NULL;
   tail->next = now;
   tail=now;
 }
}

void enqueue()
{
 int i;
 int temp;
 gotoxy(1,6);
 cout<<"          ";
 gotoxy(1,8);
 cout<<"        ";
 gotoxy(1,8);
 cout<<"         ";
    temp=1;

 push(temp);
   for(i=1;i<= 75-jml*6;i++)
   {
     gotoxy(i+1,20);cout<<" O";
     gotoxy(i,21); cout<<"=("<<now->kar<<")=";
    gotoxy(i+1,22);cout<<"| |";
    delay();
    if(i!=75-jml*6)
    {
     gotoxy(i+1,20);cout<<"  ";
         gotoxy(i,21);cout<<"      ";
       gotoxy(i+1,22);cout<<"   ";
    }

   }
}

void dequeue()
{
 if(head==NULL)
 {
  gotoxy(40,13); cout<<"antrean kosong !";
   delay();

 }
 else
 {
   jml=jml-1;
   char delete_element=head->kar;
   node *temp;
   temp=head;
   head=head->next;
   delete temp;
 for(int i=69;i<=76;i++)
 {
  gotoxy(i+1,20); cout<<" O";
  gotoxy(i,21); cout<<"=("<<delete_element<<")=";
  gotoxy(i+1,22); cout<<"| |";
  delay();
  gotoxy(i+1,20); cout<<"  ";
  gotoxy(i,21); cout<<"      ";
  gotoxy(i+1,22); cout<<"   ";
 }
 int byk=0;

 while(byk!=jml)
 {
   byk=byk+1;
  for(int i=69-byk*6;i<=75-byk*6;i++)
  {
      gotoxy(i+1,20); cout<<" O";
    gotoxy(i,21); cout<<"=("<<head->kar<<")=";
    gotoxy(i+1,22); cout<<"| |";
    delay();
      if(i!=75-byk*6)
      {
       gotoxy(i+1,20); cout<<"  ";
     gotoxy(i,21); cout<<"      ";
     gotoxy(i+1,22); cout<<"   ";
      }
  }
 }
 }
}


void input()
{
 gotoxy(1,9);cout<<"1.Tambah Antrian";
 gotoxy(1,10);cout<<"2.Hapus Antrian";
 gotoxy(1,11);cout<<"3.Exit";
 int n=1;
 int x=1;
 do
 {
   gotoxy(1,12);cout<<"masukkan pilihan\t:\t";
   gotoxy(32,12);cin>>pil;
   gotoxy(32,12);cout<<"  ";
   switch(pil)
   {
   case '1':
   {  gotoxy(1,13);cout<<"antrian no\t\t:\t"<<x;
     if(jml<10)
     {
       jml=jml+1;
       enqueue();
     }
     else
     {
      gotoxy(40,14); cout<<"antrian penuh  !";
      delay();
      gotoxy(1,8); cout<<"     ";
     }
     x++;
     break;
    }
   case '2':
   {
        int pilih;
   gotoxy(1,14);cout<<"room kosong\t\t:\t";
   gotoxy(32,14);cin>>pilih;
   gotoxy(32,14);cout<<"  ";
   {
                 gotoxy(40,17);cout<<"no antrian "<<n;
                 gotoxy(40,18);cout<<"________________________________________";
               if(pilih==1){
               gotoxy(55,17);cout<<"silahkan masuk ke room 1"<<endl;}
               else if(pilih==2){
               gotoxy(55,17);cout<<"silahkan masuk ke room 2"<<endl;}
               else{
               gotoxy(55,17);cout<<"silahkan masuk ke room 3"<<endl;}
               }
   dequeue();
   n++;

    break;
   }
   case '3':
   {
      exit(1);
    break;
   }
  }
 }while(1);
}


int main()
{  char ulang;
char y;
    buatnodebaru();
  jml=0;
  clrscr();

        do{
            mulai();
            awal();
	cout<<"\t\t\tLOGIN"<<endl;
	cout<<"username\t";cin>>username;
	awal();
	cout<<"password\t";cin>>password;
cout<<endl<<endl;
	if((strcmp(username,"tofa")==0)&&(strcmp(password,"riyadi")==0))
do{

  clrscr();
  {
    mulai();
    cout<<endl;
    gotoxy(1,8);cout<<"\t\t\t   selamat anda berhasil masuk\n";
    }
input();
  getch();
  cout<<"untuk mengulang program ini tekan (k)"<
cout<<" jika tidak masukkan sembarang:";cin>>y;
cout<<endl<<endl;
}while(y=='k');
else
  {
       cout<<"username atau password yang anda masukkan salah\n";
       cout<<"silahkan masukkan kembali\n";
       }

cout<<"tekan y:";cin>>ulang;
clrscr();
}while(ulang=='y');

       return 0;

}
void delay()
{
 for(int y=1;y<100;y++)
 for(int x=1;x<100;x++)
 for(int p=1;p<100;p++)
 cout<<"";
}

