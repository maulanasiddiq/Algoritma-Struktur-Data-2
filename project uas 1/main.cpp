#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void kode(void);
void nama(void);
void nomer(void);
void tampil(void);
int F,R,pil;
char A[11][5],mn[11][25],op[11][5];
char B[][5]=
{"A1","A2","A3","A4","A5",
"A6","A7","A8","A9","A10"};
char J[][25]=
{"Dwiki ","Mitra ",
"Torik ","Rifai ",
"Irhas ","Fredy ",
"Maulana ","Isna ",
"Dewi  ","Wahyuningsih "};
int main()
{
    F=-1;
    R=-1;
    do
    { system("cls");

        cout<<"================================"<<endl;
        cout<<"|| PENDAFTARAN SISWA SMA NEGERI 3                 ||"<<endl;
        cout<<"|| PEMALANG                                       ||"<<endl;
        cout<<"||================================================||"<<endl;
        cout<<"|| 1.KODE PENDAFTAR                               ||"<<endl;
        cout<<"|| 2.NAMA DAN NOMER PENDAFTAR                     ||"<<endl;
        cout<<"|| 3.ANTRIAN NOMER URUT                           ||"<<endl;
        cout<<"|| 4.TAMPILKAN ANTRIAN PENDAFTAR                  ||"<<endl;
        cout<<"|| 5.SELESAI                                      ||"<<endl;
        cout<<"================================"<<endl<<endl;
        cout<<" PILIHAN [1-5] = ";
        cin>>pil;
    switch(pil)
    {
        case 1: kode();
        break;
        case 2: nama();
        break;
        case 3: nomer();
        break;
        case 4: tampil();
        break;
        default: cout<<endl<<" . . .THANKS YOU...!!!"<<endl<<endl;
        break;
    }
getch();
} while (pil<5);
}
void kode(void)
{
    system("cls");
    cout<<"============================================"<<endl;
    cout<<"|| PENDAFTARAN SISWA SMA NEGERI 3             ||"<<endl;
    cout<<"|| PEMALANG                                   ||"<<endl;
    cout<<"||========================================    ||"<<endl;
    cout<<"|| KODE PENDAFTARAN                           ||"<<endl;
    cout<<"||========================================    ||"<<endl;
    int i;
    for(i=0;i<10;i++)
    {
    cout<<"|| "<<B[i]<<" "<<J[i]<<"||"<<endl;
    }
    cout<<"============================================"<<endl;
}
void nama(void)
{
    char x[4];
    int a,b,c,i;
    system("cls");
    cout<<"==============================="<<endl;
    cout<<"|| PENDAFTARAN SISWA SMA NEGERI 3     ||"<<endl;
    cout<<"|| PEMALANG                           ||"<<endl;
    cout<<"||====================================||"<<endl<<endl;
    cout<<"Masukkan NAMA DAN NOMER PENDAFTAR = ";cin>>x;
    if(R<9)
    {
    for(i=0;i<10;i++)
    {
    a=strcmpi(x,B[i]);if(a==0){c=i;break;};
    }
    for(i=0;i<10;i++)
    {
    b=strcmpi(x,A[i]);if(b==0){break;};
    }
    if(b==0)
    {
    cout<<"PENDAFTAR "<<x<<" PENDAFTAR TELAH TIBA...!!!"<<endl;
    }
    else if(a==0)
    {
    R=R+1; strcpy(A[R],x);strcpy(mn[R],J[c]);
    cout<<"NAMA = "<<J[c]<<endl;
    cout<<"KODE PENDAFTAR "<<x<<" Berada Pada Antrian ke : "<<R+1<<endl;
    }
    else
    {
    cout<<"Kode PENDAFTAR Yang Anda Masukkan Tidak Terdaftar"<<endl;
    }
    }
    else
    {
    cout<<"Antrian PENDAFTAR sudah penuh...!!!"<<endl;
    }
}
void nomer(void)
{
    system("cls");
    char x[4];
    int a,b,c,d,i;
    cout<<"==============================="<<endl;
    cout<<"|| PENDAFTARAN SISWA SMA NEGERI 3   ||"<<endl;
    cout<<"|| PEMALANG                         ||"<<endl;
    cout<<"||==================================||"<<endl<<endl;

    cout<<"Masukkan Kode PENDAFTAR= ";cin>>x;
    if(F<R)
    {
    b=strcmpi(x,A[F+1]);
    for (i=0;i<11;i++)
    {
    d=strcmpi(x,B[i]);if(d==0){break;};
    }
    for (i=0;i<11;i++)
    {
    a=strcmpi(x,op[i]);if(a==0){break;};
    }
    for (i=0;i<11;i++)
    {
    c=strcmpi(x,A[i]);if(c==0){break;};
    }
    if(b==0)
    {
    F=F+1;
    strcpy(op[F],A[F]);
    for (i=0;i<4;i++)
    {
    A[F][i]=NULL;
    }
    cout<<"NAMA = "<<mn[F]<<endl;
    cout<<"KODE PENDAFTAR "<<x<<" Silahkan Ke Tempat Pendaftaran "<<endl;
    }
    else if(c==0)
    {
    cout<<"PENDAFTAR "<<x<<"Tidak bisa mendaftar karena tiidak sesuai dengan nomor antriannya"<<endl;
    }
    else if (a==0)
    {
    cout<<"PENDAFTAR "<<x<<" Pendaftar Sudah selesai mendaftar!!!"<<endl;
    }
    else if(d==0)
    {
    cout<<"PENDAFTAR "<<x<<" Pendaftar Belum Datang ...!!!"<<endl;
    }
    else
    {
    cout<<"Kode Pendaftar Yang Anda Masukkan Tidak Ada"<<endl;
    }
    }
    else
    {
    cout<<"ANTRIAN Tidak ada...!!!"<<endl;
    }
}
void tampil(void)
{
    int i,j;
    system("cls");
    cout<<" ==============================="<<endl;
    cout<<" || PENDAFTARAN SISWA SMA NEGERI 3   ||"<<endl;
    cout<<" || PEMALANG                         ||"<<endl;
    cout<<" ||==================================||"<<endl<<endl;

    cout<<endl<<endl;
    for(i=1;i<=10;i++)
    {
    cout<<" "<<i<<"   ";
    }
    cout<<endl;
    for(i=0;i<10;i++)
    {
    cout<<" ";
    for(j=0;j<4;j++)
    {
    cout<<A[i][j];
    }
    }
    cout<<endl;
}
