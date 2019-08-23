#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define max 7

using namespace std;

int data[max];
int head=-1, tail=-1,a;

//membuat fungsi IsEmpty
bool IsEmpty(){
if(head == -1 && tail == -1)
return true;
else
return false;
}

//membuat fungsi IsFull
bool IsFull(){
if(tail == max-1)
return true;
else
return false;
}

//membuat enqueue, untuk memasukkan data kedalam queue / antrian
void Enqueue(){
if(IsFull()) {
cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
} else {
if (IsEmpty()){
head=tail=0;
cout<<"Masukkan data : ";cin>>data[tail];
} else {
tail++;
cout<<"Masukkan data : ";cin>>data[tail];
}
}
}

//Membuat fungsi Dequeue
void Dequeue(){
if(IsEmpty()){
cout<<"Antrian kosong ! ";
getch();
} else {
cout<<"Data yang diambil : "<<data[head];
for(a=head;a<=tail-1;a++)
data[a]=data[a+1];
tail--;
if(tail == -1)
head = -1;
getch();
}
}

//Membuat Prosedur clear
void Clear(){
head=tail=-1;
cout<<"Antrian sudah dikosongkan ! ";getch();
}

//Membuat Prosedur View
void View(){
if(IsEmpty()){
cout<<"Antrian kosong ! ";
getch();
} else {
for(a=head;a<=tail;a++)
cout<<"Data pada antrian ke "<<a<<" = "<<data[a]<<endl;
getch();
}
}

main(){
int jawab;
do{
system("cls");
cout<<"--------- Program Stack by adeethunix ------------"<<endl;
cout<<"1. Enqueue "<<endl;
cout<<"2. Dequeue "<<endl;
cout<<"3. Clear "<<endl;
cout<<"4. View "<<endl;
cout<<"5. Exit "<<endl;
cout<<"Masukkan pilihan Anda : ";
cin>>jawab;
switch(jawab){
case 1:
Enqueue();break;
case 2:
Dequeue();break;
case 3:
Clear();break;
case 4:
View();break;
}
}while (jawab != 5);
}
