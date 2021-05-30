#ifndef TWOOTOPARK_H_INCLUDED
#define TWOOTOPARK_H_INCLUDED

#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#define dx 36
#define dy 3
int alan[119][30]={0};
int gx=36,gy=3;

int giris=0;

int hatali_giris=0;

int gelir;

int durum_sifirlama=0;

int arac_tipi=4;
int kacak_tipi=207;

int bilet_x[132]={38,38,38,38,38,38,38,38     ,45,45,49,49,53,53,57,57,61,61,65,65,69,69,73,73,77,77,81,81,85,85,89,89,93,93,97,97,101,101,105,105   ,112,112,112,112,112,112,112,112     ,50,50,50,50,50,50    ,52,52,52,52,52,52   ,58,58,58,58,58,58   ,60,60,60,60,60,60      ,66,66,66,66,66,66    ,68,68,68,68,68,68   ,74,74,74,74,74,74     ,76,76,76,76,76,76       ,82,82,82,82,82,82   ,84,84,84,84,84,84    ,90,90,90,90,90,90     ,92,92,92,92,92,92      ,98,98,98,98,98,98       ,100,100,100,100,100,100             };
int bilet_y[132]={12,19,10,21,8,23,6,25    ,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28,3,28     ,12,19,10,21,8,23,6,25     ,12,19,10,21,8,23  ,12,19,10,21,8,23   ,12,19,10,21,8,23    ,12,19,10,21,8,23   ,12,19,10,21,8,23    ,12,19,10,21,8,23   ,12,19,10,21,8,23   ,12,19,10,21,8,23    ,12,19,10,21,8,23   ,12,19,10,21,8,23    ,12,19,10,21,8,23   ,12,19,10,21,8,23   ,12,19,10,21,8,23    ,12,19,10,21,8,23 };
int biletdolux[132];
int biletdoluy[132];

char gorevli_eposta[100];
char gorevli_sifre[100];

struct Musteri_Bilgi{
    char Musteri_AdSoyad[50];
    char Musteri_Eposta[50];
    char Musteri_Telefon_no[20];
};

struct Musteri_Arac_Bilgi{
    char Musteri_AdSoyad[50];
    char Arac_Plaka[20];
    char Arac_Model[50];
    char Arac_Renk[50];
    char Giris_Saati[50];
    int ucret;
};

struct Bilet_Bilgi{
    char Bilet_Sahibi[50];
    int Bilet_Seri_No;
    int Bilet_No;
    int biletyerx;
    int biletyery;
    char Plaka[50];
    int durum;
};

struct Gorevli_Bilgi{
    char Gorevli_AdSoyad[50];
    char Gorevli_Cinsiyet[10];
    char Gorevli_Eposta[50];
    char Gorevli_Sifre[50];
    char Gorevli_Tel_No[20];
    char Gorevli_MaasAylik[50];
};

struct Bilet_Bilgi Bilet[132];
struct Bilet_Bilgi Yedek_Bilet[132];
struct Bilet_Bilgi Bos_Bilet[132];
struct Bilet_Bilgi Silinecek_Bilet[132];
struct Musteri_Arac_Bilgi Kayit[132];
struct Musteri_Arac_Bilgi Bos_Kayit[132];
struct Musteri_Bilgi Musteri[132];
struct Musteri_Bilgi Bos_Musteri[132];
struct Gorevli_Bilgi Gorevli[20];
struct Gorevli_Bilgi Bos_Gorevli[20];
struct Gorevli_Bilgi yedek_yaptim[20];
struct Gorevli_Bilgi silicez[20];
struct Musteri_Arac_Bilgi Yedekteyiz[132];
struct Musteri_Arac_Bilgi Silecegiz[132];


void gotoxy(short x,short y);
void ekran(int x1,int y1,int x2,int y2,int tip);
void ekranYaz();
void arayuz_Giris_Penceresi();
void arayuz_Temel();
void arayuz_Metin();
void temizle();
void buyuk_kucuk_harf(char degistir[]);
void Unlem();
void arayuz_Profil();
void vesikalik_Resim_Erkek();
void vesikalik_Resim_Kadin();
void arayuz_Musteri_listesi();
void arayuz_gorevli_calisan();
void arayuz_plaka_sorgu();
void arayuz_arac_kayit();
void arayuz_gorevli_patron();
void arayuz_Gorevli_listesi();
void arayuz_Giris_Dogrulama();
void arayuz_Ana_Menu_Secim_calisan();
void arayuz_Ana_Menu_Secim_patron();
int main();
void arayuz_Otopark();
void otopark_arac_Hareket(int konum_x,int konum_y,int yol_x,int yol_y,int durum);
void arayuz_Gps();
void arayuz_Musteri();
void musteri_Kayit();
void arayuz_Arac_listesi();
void arayuz_Arac();
void arayuz_Gorevli_detay();

void Gorevli_Bilgi_Cek()
{
    int d;
    for(d=0;d<20;d++)
    {
        strcpy(Gorevli[d].Gorevli_AdSoyad,Bos_Gorevli[d].Gorevli_AdSoyad);
        strcpy(Gorevli[d].Gorevli_Cinsiyet,Bos_Gorevli[d].Gorevli_Cinsiyet);
        strcpy(Gorevli[d].Gorevli_Eposta,Bos_Gorevli[d].Gorevli_Eposta);
        strcpy(Gorevli[d].Gorevli_Sifre,Bos_Gorevli[d].Gorevli_Sifre);
        strcpy(Gorevli[d].Gorevli_Tel_No,Bos_Gorevli[d].Gorevli_Tel_No);
        strcpy(Gorevli[d].Gorevli_MaasAylik,Bos_Gorevli[d].Gorevli_MaasAylik);
    }

	FILE *fptr;
    fptr = fopen("gorevlikayitstruct.txt", "r");
    int gorevlibufferLength = 300;
    char gorevlibuffer[gorevlibufferLength];
    int sayac1=0;
    int sayac2=0;
    while(fgets(gorevlibuffer, gorevlibufferLength, fptr))
    {
        if (sayac1==0)
        {
            strcpy(Gorevli[sayac2].Gorevli_AdSoyad,gorevlibuffer);
        }
        if(sayac1==1)
        {
            strcpy(Gorevli[sayac2].Gorevli_Cinsiyet,gorevlibuffer);
        }
        if (sayac1==2)
        {
            strcpy(Gorevli[sayac2].Gorevli_Eposta,gorevlibuffer);
        }
        if (sayac1==3)
        {
            strcpy(Gorevli[sayac2].Gorevli_Sifre,gorevlibuffer);
        }
        if (sayac1==4)
        {
            strcpy(Gorevli[sayac2].Gorevli_Tel_No,gorevlibuffer);
        }
        if (sayac1==5)
        {
            strcpy(Gorevli[sayac2].Gorevli_MaasAylik,gorevlibuffer);
            sayac1=0;
            sayac2++;
            continue;
        }
        sayac1++;
    }
    fclose(fptr);
}

void Bilet_Bilgi_Cek()
{

    int d,i;

    for(d=0;d<132;d++)
    {
        strcpy(Bilet[d].Bilet_Sahibi,Bos_Bilet[d].Bilet_Sahibi);
        Bilet[d].Bilet_Seri_No=Bos_Bilet[d].Bilet_Seri_No;
        Bilet[d].Bilet_No=Bos_Bilet[d].Bilet_No;
        Bilet[d].biletyerx=Bos_Bilet[d].biletyerx;
        Bilet[d].biletyery=Bos_Bilet[d].biletyery;
        strcpy(Bilet[d].Plaka,Bos_Bilet[d].Plaka);
    }

    FILE *fptr;
    int bufferLength = 255;
    char buffer[bufferLength];
    int sayac1=0;
    int sayac2=0;
    fptr = fopen("biletstruct.txt", "r");
    while(fgets(buffer, bufferLength, fptr))
    {
        if (sayac1==0)
        {
            strcpy(Bilet[sayac2].Bilet_Sahibi,buffer);
        }
        if(sayac1==1)
        {
            Bilet[sayac2].Bilet_Seri_No=atoi(buffer);
        }
        if (sayac1==2)
        {
            Bilet[sayac2].Bilet_No=atoi(buffer);
        }
        if (sayac1==3)
        {
            Bilet[sayac2].biletyerx=atoi(buffer);
        }
        if (sayac1==4)
        {
            Bilet[sayac2].biletyery=atoi(buffer);
        }
        if(sayac1==5)
        {
            strcpy(Bilet[sayac2].Plaka,buffer);
            sayac1=0;
            sayac2++;
            continue;
        }
        if(Bilet[sayac2].durum==0)
        {
            Bilet[sayac2].durum=2;
        }


        sayac1++;
    }
    fclose(fptr);

}

void Musteri_Bilgi_Cek()
{
    int f;
    for(f=0;f<132;f++)
    {
        strcpy(Musteri[f].Musteri_AdSoyad,Bos_Musteri[f].Musteri_AdSoyad);
        strcpy(Musteri[f].Musteri_Eposta,Bos_Musteri[f].Musteri_Eposta);
        strcpy(Musteri[f].Musteri_Telefon_no,Bos_Musteri[f].Musteri_Telefon_no);
    }

    FILE *fptr;
    int bufferLength = 255;
    char buffer[bufferLength];
    int sayac1=0;
    int sayac2=0;
    fptr = fopen("musteribilgileristruct.txt", "r");
    while(fgets(buffer, bufferLength, fptr))
    {
        if (sayac1==0)
        {
            strcpy(Musteri[sayac2].Musteri_AdSoyad,buffer);
        }
        if (sayac1==1)
        {
            strcpy(Musteri[sayac2].Musteri_Eposta,buffer);
        }
        if (sayac1==2)
        {
            strcpy(Musteri[sayac2].Musteri_Telefon_no,buffer);
            sayac1=0;
            sayac2++;
            continue;
        }
        sayac1++;
    }
    fclose(fptr);

}

void Arac_Bilgi_Cek()
{
    int d;
    for(d=0;d<132;d++)
    {
        strcpy(Kayit[d].Musteri_AdSoyad,Bos_Kayit[d].Musteri_AdSoyad);
        strcpy(Kayit[d].Arac_Model,Bos_Kayit[d].Arac_Model);
        strcpy(Kayit[d].Arac_Plaka,Bos_Kayit[d].Arac_Plaka);
        strcpy(Kayit[d].Arac_Renk,Bos_Kayit[d].Arac_Renk);
        Kayit[d].ucret=Bos_Kayit[d].ucret;
        strcpy(Kayit[d].Giris_Saati,Bos_Kayit[d].Giris_Saati);
    }

    FILE *fptr;
    fptr = fopen("aracbilgileri.txt", "r");
    int bufferLength = 255;
    char buffer[bufferLength];
    int sayac1=0;
    int sayac2=0;
    while(fgets(buffer, bufferLength, fptr))
    {
        if (sayac1==0)
        {
            strcpy(Kayit[sayac2].Musteri_AdSoyad,buffer);
        }
        if(sayac1==1)
        {
            strcpy(Kayit[sayac2].Arac_Plaka,buffer);
        }
        if (sayac1==2)
        {
            strcpy(Kayit[sayac2].Arac_Model,buffer);
        }
        if (sayac1==3)
        {
            strcpy(Kayit[sayac2].Arac_Renk,buffer);
        }
        if (sayac1==4)
        {
            strcpy(Kayit[sayac2].Giris_Saati,buffer);
        }
        if (sayac1==5)
        {
            Kayit[sayac2].ucret=atoi(buffer);
            sayac1=0;
            sayac2++;
            continue;
        }
        sayac1++;
    }
    fclose(fptr);
}

void gotoxy(short x,short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_Pos={x-1,y-1};
    hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,Cursor_Pos);
}

void ekran(int x1,int y1,int x2,int y2,int tip)
{
    int i;

    for(i=x1;i<=x2;i++)
    {
        alan[i][y1]=tip;
        alan[i][y2]=tip;
    }
    for(i=y1;i<=y2;i++)
    {
        alan[x1][i]=tip;
        alan[x2][i]=tip;
    }
}

void ekranYaz()
{
    int x,y;

    for(x=0;x<119;x++)
    {
        for(y=0;y<30;y++)
        {
            gotoxy(x+1,y+1);
            if(alan[x][y]!='\0')
                printf("%c",alan[x][y]);
        }
    }
}

void arayuz_Giris_Penceresi()
{

    ekran(0,0,118,29,219);

    ekran(dx-6,dy+2,dx+52,dy+2,220);
    ekran(dx-6,dy+19,dx+52,dy+19,220);
    ekran(dx-6,dy+3,dx-6,dy+19,219);
    ekran(dx+52,dy+3,dx+52,dy+19,219);


    ekran(dx,dy+10,82,dy+10,196);
    ekran(dx,dy+12,82,dy+12,196);

    gotoxy(dx,dy+11);
    printf("%c",218);
    gotoxy(dx,dy+12);
    printf("%c",179);
    gotoxy(dx,dy+13);
    printf("%c",192);

    gotoxy(dx+48,dy+11);
    printf("%c",191);
    gotoxy(dx+48,dy+12);
    printf("%c",179);
    gotoxy(dx+48,dy+13);
    printf("%c",217);


    ekran(dx,dy+14,dx+46,dy+14,196);
    ekran(dx,dy+16,dx+46,dy+16,196);

    gotoxy(dx,dy+15);
    printf("%c",218);
    gotoxy(dx,dy+16);
    printf("%c",179);
    gotoxy(dx,dy+17);
    printf("%c",192);

    gotoxy(dx+48,dy+15);
    printf("%c",191);
    gotoxy(dx+48,dy+16);
    printf("%c",179);
    gotoxy(dx+48,dy+17);
    printf("%c",217);


    gotoxy(dx+18,dy+6);
    printf("TWO OTOPARK");
    gotoxy(dx+15,dy+7);
    printf("%c",192);
    gotoxy(dx+31,dy+7);
    printf("%c",217);
    gotoxy(dx+15,dy+5);
    printf("%c",218);
    gotoxy(dx+31,dy+5);
    printf("%c",191);


    gotoxy(dx+10,dy+8);
    printf("Bir otoparktan daha fazlasi...");

    gotoxy(dx+2,dy+12);
    printf("E-Posta...                                    ");

    gotoxy(dx+2,dy+16);
    printf("Sifre...                                      ");

    ekranYaz();

}

void arayuz_Temel()
{
    ekran(30,0,118,0,223);
    ekran(30,29,118,29,220);
    ekran(30,0,30,29,219);
    ekran(118,0,118,29,219);
    int i,j;
    for(i=0;i<24;i=i+4)
    {
        j=i+2;
        ekran(1,i,28,i,223);
        ekran(1,j,28,j,220);
        ekran(1,i,1,j,219);
        ekran(28,i,28,j,219);
    }

    ekran(1,i,28,i,223);
    ekran(1,i+4,28,i+4,220);
    ekran(1,i,1,i+4,219);
    ekran(28,i,28,i+4,219);

    ekranYaz();
}

void arayuz_Metin()
{
    gotoxy(12,2);
    printf("GOREVLI");
    gotoxy(12,6);
    printf("OTOPARK");
    gotoxy(13,10);
    printf("MUSTERI");
    gotoxy(14,14);
    printf("GPS");
    gotoxy(10,18);
    printf("PLAKA SORGU");
    gotoxy(14,22);
    printf("ARAC");
    gotoxy(9,26);
    printf("Seciminiz :");
    gotoxy(4,27);
}

void temizle()
{
    int x,y;
    for(x=0;x<119;x++)
    {
        for(y=0;y<30;y++)
        {
            gotoxy(x+1,y+1);
            if(alan[x][y]!='\0')
            {
                alan[x][y]='\0';
                printf("%c",alan[x][y]);
            }

        }
    }


    system("cls");

    gotoxy(4,27);
}

void buyuk_kucuk_harf(char degistir[])
{
    int i;

    for(i=0;i<strlen(degistir);i++)
    {
        if(degistir[i]<=90&&degistir[i]>=65)
        {
            degistir[i]=degistir[i]+32;
        }
    }
}

void Unlem()
{
    ekran(0,0,118,29,219);
    Sleep(400);

    int i;

    for(i=0;i<20;i++)
    {
        int j=i+40;
        ekran(j,i+3,80-i,i+3,219);
    }

    for(i=0;i<3;i++)
    {
        ekran(57,i+24,63,i+24,219);
    }
    ekranYaz();

    Sleep(600);
    for(i=0;i<20;i++)
    {
        int j=i+40;
        ekran(j,i+3,80-i,i+3,32);
    }

    for(i=0;i<3;i++)
    {
        ekran(57,i+24,63,i+24,32);
    }
    ekranYaz();
}

void arayuz_Profil()
{
	char islem[100];
    gelir=0;
	int i;
    for(i=0;i<20;i++)
    {
        if(strncmp(gorevli_eposta,Gorevli[i].Gorevli_Eposta,strlen(gorevli_eposta))==0)
        {
            break;
        }
    }
	Gorevli_Bilgi_Cek();
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    ekran(dx+52,dy+3,dx+74,dy+16,219);


    if(strncmp("erkek",Gorevli[i].Gorevli_Cinsiyet,strlen("erkek"))==0)
    {
        vesikalik_Resim_Erkek();
    }

    else if(strncmp("kadin",Gorevli[i].Gorevli_Cinsiyet,strlen("kadin"))==0)
    {
        vesikalik_Resim_Kadin();
    }

    gotoxy(dx+4,dy+6);
    printf("Adi-Soyadi       :%s",Gorevli[i].Gorevli_AdSoyad);
    gotoxy(dx+4,dy+8);
    printf("Cinsiyet         :%s",Gorevli[i].Gorevli_Cinsiyet);
    gotoxy(dx+4,dy+10);
    printf("E-Posta          :%s",Gorevli[i].Gorevli_Eposta);
    gotoxy(dx+4,dy+12);
    printf("Sifre            :%s",Gorevli[i].Gorevli_Sifre);
    gotoxy(dx+4,dy+14);
    printf("Telefon No       :%s",Gorevli[i].Gorevli_Tel_No);

    if(i==0)
    {
        int j;
        for(j=0;j<132;j++)
        {
            if(strlen(Kayit[j].Musteri_AdSoyad)>1)
            {
                gelir+=(time(NULL)-Kayit[j].ucret)/30*10+5;
            }
        }
        for(j=1;j<132;j++)
        {
            if(strlen(Gorevli[j].Gorevli_AdSoyad)>1)
            {
                gelir=gelir-atoi(Gorevli[j].Gorevli_MaasAylik);
            }
        }
        sprintf(Gorevli[i].Gorevli_MaasAylik,"%d",gelir);
    }

    gotoxy(dx+4,dy+16);
    printf("Maas             :%s",Gorevli[i].Gorevli_MaasAylik);

    ekranYaz();

    gotoxy(dx-32,dy+24);
    gets(islem);
    buyuk_kucuk_harf(islem);

    if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_Profil();
    }

}

void vesikalik_Resim_Erkek()
{

    int a=17;
    int b=56;


    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",220);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);


    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+(--b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(--b),dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(--b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+(++b),dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",220);

}

void vesikalik_Resim_Kadin()
{
    int a=17;
    int b=56;


    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);
    gotoxy(dx+b+3,dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b-3),dy+a);
    printf("%c",220);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+(--b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(--b),dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(--b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",219);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",219);

    gotoxy(dx+(++b),dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",223);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",223);

    gotoxy(dx+b,dy+(--a));
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b),dy+a);
    printf("%c",220);

    gotoxy(dx+(++b),dy+a);
    printf("%c",220);

    gotoxy(dx+b-4,dy+(++a));
    printf("%c",219);
    gotoxy(dx+56+(72-b+4),dy+a);
    printf("%c",219);

    gotoxy(dx+b-5,dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b+5),dy+a);
    printf("%c",220);

    gotoxy(dx+b-5,dy+(++a));
    printf("%c",219);
    gotoxy(dx+56+(72-b+5),dy+a);
    printf("%c",219);

    gotoxy(dx+b-5,dy+(++a));
    printf("%c",219);
    gotoxy(dx+56+(72-b+5),dy+a);
    printf("%c",219);

    gotoxy(dx+b-5,dy+(++a));
    printf("%c",219);
    gotoxy(dx+56+(72-b+5),dy+a);
    printf("%c",219);

    gotoxy(dx+b-6,dy+a);
    printf("%c",220);
    gotoxy(dx+56+(72-b+6),dy+a);
    printf("%c",220);
}

void arayuz_gorevli_calisan()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    char islem[100];

    int x;

    for(x=dy+3;x<=dy+14;x=x+11)
        ekran(dx-4,x,dx+79,x+8,219);

    gotoxy(dx+21,dy+1);
    printf("Hangi islemi yapmak istersiniz?");
    gotoxy(dx+8,dy+8);
    printf("Profil");
    gotoxy(dx+8,dy+19);
    printf("Cikis Yap");

    ekranYaz();

    gotoxy(dx-32,dy+24);
    gets(islem);

    buyuk_kucuk_harf(islem);


    if(strcmp(islem,"profil")==0)
    {
        arayuz_Profil();
    }

    else if(strcmp(islem,"cikis yap")==0)
    {
        giris=0;
        main();
    }

    else if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_gorevli_calisan();
    }
}

void arayuz_Giris_Dogrulama()
{
    int i;
	Gorevli_Bilgi_Cek();

    gotoxy(dx+2,dy+12);
    gets(gorevli_eposta);
    gotoxy(dx+2,dy+16);
    gets(gorevli_sifre);

    if(strlen(gorevli_eposta)>1&&strlen(gorevli_sifre)>1)
    {
        for (i=1;i<20;i++)
        {
            if(strncmp(gorevli_eposta,Gorevli[i].Gorevli_Eposta,strlen(gorevli_eposta))==0&&strncmp(gorevli_sifre,Gorevli[i].Gorevli_Sifre,strlen(gorevli_sifre))==0)

            {
                giris=1;
                temizle();

                ekran(0,0,118,29,219);
                ekran(dx-6,dy+2,dx+52,dy+2,220);
                ekran(dx-6,dy+19,dx+52,dy+19,220);
                ekran(dx-6,dy+3,dx-6,dy+19,219);
                ekran(dx+52,dy+3,dx+52,dy+19,219);


                gotoxy(dx+10,dy+10);
                printf("Hos geldiniz %s",Gorevli[i].Gorevli_AdSoyad);
                ekranYaz();
                Sleep(900);

                gotoxy(dx+10,dy+10);
                printf("  Sisteme giris yapiliyor...            ");

                int x;

                for(x=dx;x<dx+47;x++)
                {
                    ekran(dx,dy+13,dx+46,dy+13,205);
                    ekran(dx,dy+15,dx+46,dy+15,205);

                    gotoxy(dx,dy+14);
                    printf("%c",201);
                    gotoxy(dx,dy+15);
                    printf("%c",186);
                    gotoxy(dx,dy+16);
                    printf("%c",200);

                    gotoxy(dx+48,dy+14);
                    printf("%c",187);
                    gotoxy(dx+48,dy+15);
                    printf("%c",186);
                    gotoxy(dx+48,dy+16);
                    printf("%c",188);

                    gotoxy(x+1,dy+15);
                    printf("%c",219);

                    ekranYaz();
                    Sleep(100);

                }

                main();
            }

            else if(strncmp(gorevli_eposta,Gorevli[0].Gorevli_Eposta,strlen(gorevli_eposta))==0&&strncmp(gorevli_sifre,Gorevli[0].Gorevli_Sifre,strlen(gorevli_sifre))==0)
            {
                giris=2;
                temizle();

                ekran(0,0,118,29,219);
                ekran(dx-6,dy+2,dx+52,dy+2,220);
                ekran(dx-6,dy+19,dx+52,dy+19,220);
                ekran(dx-6,dy+3,dx-6,dy+19,219);
                ekran(dx+52,dy+3,dx+52,dy+19,219);


                gotoxy(dx+10,dy+10);
                printf("Hos geldiniz %s",Gorevli[0].Gorevli_AdSoyad);
                ekranYaz();
                Sleep(900);

                gotoxy(dx+10,dy+10);
                printf("  Sisteme giris yapiliyor...            ");
                int x;

                for(x=dx;x<dx+47;x++)
                {
                    ekran(dx,dy+13,dx+46,dy+13,205);
                    ekran(dx,dy+15,dx+46,dy+15,205);

                    gotoxy(dx,dy+14);
                    printf("%c",201);
                    gotoxy(dx,dy+15);
                    printf("%c",186);
                    gotoxy(dx,dy+16);
                    printf("%c",200);

                    gotoxy(dx+48,dy+14);
                    printf("%c",187);
                    gotoxy(dx+48,dy+15);
                    printf("%c",186);
                    gotoxy(dx+48,dy+16);
                    printf("%c",188);

                    gotoxy(x+1,dy+15);
                    printf("%c",219);

                    ekranYaz();
                    Sleep(100);
                }
                main();
            }
        }
    }

    gotoxy(dx+1,dy+18);
    printf("Yanlis kullanici adi veya sifre!");
    gotoxy(dx+1,dy+19);
    printf("Deneme hakki : %d",2-hatali_giris);
    hatali_giris++;

    if(hatali_giris>2)
    {
        temizle();

        while(hatali_giris>2)
        {
            Unlem();

        }

    }
}

void arayuz_arac_kayit()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();
    Arac_Bilgi_Cek();
    Bilet_Bilgi_Cek();

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    gotoxy(dx+14,dy+5);
    printf("Kaydetmek istediginiz aracin ozelliklerini giriniz:");

    int x;

    for(x=7;x<23;x=x+4)
    {
        ekran(dx+16,dy+x,dx+60,dy+x,205);
        ekran(dx+16,dy+x+2,dx+60,dy+x+2,205);

        gotoxy(dx+16,dy+x+1);
        printf("%c",201);
        gotoxy(dx+16,dy+x+2);
        printf("%c",186);
        gotoxy(dx+16,dy+x+3);
        printf("%c",200);

        gotoxy(dx+62,dy+x+1);
        printf("%c",187);
        gotoxy(dx+62,dy+x+2);
        printf("%c",186);
        gotoxy(dx+62,dy+x+3);
        printf("%c",188);
    }

    gotoxy(dx+35,dy+9);
    printf("Sahip...");
    gotoxy(dx+35,dy+13);
    printf("Plaka...");
    gotoxy(dx+35,dy+17);
    printf("Model...");
    gotoxy(dx+35,dy+21);
    printf("Renk...");

    int sira=0;
    int i;
    for ( i = 0; i < 132; i++)
    {
        if (strlen(Kayit[i].Musteri_AdSoyad)>1)
        {
            sira++;
        }
    }


    ekranYaz();
    char adsoyad[50];
    char plaka[50];
    char model[50];
    char renk[50];

    gotoxy(dx+20,dy+9);
    gets(adsoyad);
    gotoxy(dx+20,dy+13);
    gets(plaka);
    gotoxy(dx+20,dy+17);
    gets(model);
    gotoxy(dx+20,dy+21);
    gets(renk);

    int f;
    int dogrulama=0;
    for(f=0;f<132;f++)
    {
       if(strncmp(adsoyad,Musteri[f].Musteri_AdSoyad,strlen(adsoyad))==0)
       {
           dogrulama=1;
           break;
       }
    }

    if(dogrulama==1)
    {
        strcpy(Kayit[sira].Musteri_AdSoyad,adsoyad);
        strcpy(Kayit[sira].Arac_Plaka,plaka);
        strcpy(Kayit[sira].Arac_Model,model);
        strcpy(Kayit[sira].Arac_Renk,renk);
        time_t ltime;
        time(&ltime);
        strcpy(Kayit[sira].Giris_Saati,ctime(&ltime));
        Kayit[sira].ucret=time(NULL);
        int biletsayac=0;

        char zaman[200];

        strcpy(zaman,ctime(&ltime));

        for (i = 0;zaman[i] != '\0';i++)
        {
            if (zaman[i] == ' ')
                zaman[i]='-';
        }

        int q;
        for (i = 0;i<132;i++)
        {
            for (q = 0;q<132;q++)
            {
                if(Bilet[i].biletyerx==bilet_x[q]&&Bilet[i].biletyery==bilet_y[q])
                {
                    biletdolux[q]=bilet_x[q];
                    biletdoluy[q]=bilet_y[q];
                }
            }
        }

        for(i=0;i<132;i++)
        {
            if(biletdolux[i]==NULL)
            {
                Bilet[sira].biletyerx=bilet_x[i];
                Bilet[sira].biletyery=bilet_y[i];
                Bilet[sira].Bilet_No=i+1;
                Bilet[sira].durum=1;
                break;
            }
        }

        strcpy(Bilet[sira].Plaka,Kayit[sira].Arac_Plaka);
        strcpy(Bilet[sira].Bilet_Sahibi,Kayit[sira].Musteri_AdSoyad);
        srand(time(NULL));
        Bilet[sira].Bilet_Seri_No=rand()%100000000;
        FILE *fptr;
        fptr=(fopen("aracbilgileri.txt","a"));
        if(fptr == NULL)
        {
            fptr = fopen("aracbilgileri.txt", "a");
        }
        fprintf(fptr,"%s\n%s\n%s\n%s\n%s%d\n",Kayit[sira].Musteri_AdSoyad,Kayit[sira].Arac_Plaka,Kayit[sira].Arac_Model,Kayit[sira].Arac_Renk,zaman,Kayit[sira].ucret);
        fclose(fptr);

        fptr=(fopen("biletstruct.txt","a"));
        if(fptr == NULL)
        {
            fptr = fopen("biletstruct.txt", "a");
        }
        fprintf(fptr,"%s\n%d\n%d\n%d\n%d\n%s\n",Bilet[sira].Bilet_Sahibi,Bilet[sira].Bilet_Seri_No,Bilet[sira].Bilet_No,Bilet[sira].biletyerx,Bilet[sira].biletyery,Bilet[sira].Plaka);
        fclose(fptr);
    }

    else
    {
        temizle();
        arayuz_Temel();
        arayuz_Metin();
        int i,j,t;

        ekran(dx+10,dy+3,dx+66,dy+3,220);
        ekran(dx+10,dy+20,dx+66,dy+20,223);
        ekran(dx+10,dy+4,dx+10,dy+19,219);
        ekran(dx+66,dy+4,dx+66,dy+19,219);
        gotoxy(dx+31,dy+8);
        printf("MUSTERI BULUNAMADI");
        for(t=0;t<4;t++)
        {
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,219);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,219);
            }
            ekranYaz();

            Sleep(300);
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,32);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,32);
            }
            ekranYaz();
            Sleep(600);
        }

        arayuz_Arac();
    }


    ekranYaz();

    arayuz_Arac();
}

void arayuz_plaka_sorgu()
{
    Arac_Bilgi_Cek();
    Bilet_Bilgi_Cek();

    char plaka[100];
    char islem[100];

    temizle();
    arayuz_Temel();
    arayuz_Metin();

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    ekran(dx+16,dy+11,dx+60,dy+11,205);
    ekran(dx+16,dy+13,dx+60,dy+13,205);
    ekranYaz();

    gotoxy(dx+16,dy+12);
    printf("%c",201);
    gotoxy(dx+16,dy+13);
    printf("%c",186);
    gotoxy(dx+16,dy+14);
    printf("%c",200);

    gotoxy(dx+62,dy+12);
    printf("%c",187);
    gotoxy(dx+62,dy+13);
    printf("%c",186);
    gotoxy(dx+62,dy+14);
    printf("%c",188);

    gotoxy(dx+21,dy+9);
    printf("Aradiginiz aracin plakasini giriniz:");
    gotoxy(dx+33,dy+13);
    printf("Plaka...");

    gotoxy(dx+33,dy+13);

    gets(plaka);
    int karsilastirma=1;
    int ucrethesap=0;
    int i,a;
    for (i = 0; i < 132; i++)
    {
        if(strlen(plaka)>1)
        {
            karsilastirma=strncmp(plaka,Kayit[i].Arac_Plaka,strlen(plaka));
            if(karsilastirma==0)
            {
                a=i;
                strcpy(plaka,Kayit[i].Arac_Plaka);
                ucrethesap=(time(NULL)-Kayit[i].ucret)/30*10+5;
                break;
            }
        }
    }



    if(karsilastirma==0)
    {
        temizle();
        arayuz_Temel();
        arayuz_Metin();


        ekran(dx-4,dy-2,dx+80,dy-2,220);
        ekran(dx-4,dy+25,dx+80,dy+25,223);
        ekran(dx-4,dy-1,dx-4,dy+24,219);
        ekran(dx+80,dy-1,dx+80,dy+24,219);

        ekran(dx+52,dy+3,dx+74,dy+16,219);
        gotoxy(dx+58,dy+9);
        printf("Araciniza ait");
        gotoxy(dx+60,dy+10);
        printf("fotograf");
        gotoxy(dx+57,dy+11);
        printf("bulunmamaktadir");

        gotoxy(dx+4,dy+6);
        printf("Sahip              :%s",Kayit[a].Musteri_AdSoyad);
        gotoxy(dx+4,dy+8);
        printf("Model              :%s",Kayit[a].Arac_Model);
        gotoxy(dx+4,dy+10);
        printf("Renk               :%s",Kayit[a].Arac_Renk);
        gotoxy(dx+4,dy+12);
        printf("Bilet seri no      :%d",Bilet[a].Bilet_Seri_No);
        gotoxy(dx+4,dy+14);
        printf("Birakildigi Tarih  :%s",Kayit[a].Giris_Saati);
        gotoxy(dx+4,dy+16);
        printf("Borc               :%d",ucrethesap);

        ekranYaz();

        gotoxy(dx-32,dy+24);
        gets(islem);
        buyuk_kucuk_harf(islem);

        if(strcmp(islem,"ana menu")==0)
        {
            main();
        }

        else
        {
            arayuz_plaka_sorgu();
        }
    }

    else
    {
        temizle();
        arayuz_Temel();
        arayuz_Metin();
        int i,j,t;

        ekran(dx+10,dy+3,dx+66,dy+3,220);
        ekran(dx+10,dy+20,dx+66,dy+20,223);
        ekran(dx+10,dy+4,dx+10,dy+19,219);
        ekran(dx+66,dy+4,dx+66,dy+19,219);
        gotoxy(dx+31,dy+8);
        printf("PLAKA BULUNAMADI");
        for(t=0;t<4;t++)
        {
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,219);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,219);
            }
            ekranYaz();

            Sleep(300);
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,32);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,32);
            }
            ekranYaz();
            Sleep(600);
        }

        main();
    }

    gotoxy(dx-32,dy+24);
    gets(islem);
    buyuk_kucuk_harf(islem);

    if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_plaka_sorgu();
    }
}

void arayuz_gorevli_patron()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    char islem[100];

    int x;

    for(x=dy+3;x<=dy+20;x=x+8)
        ekran(dx-4,x,dx+79,x+6,219);

    gotoxy(dx+21,dy+1);
    printf("Hangi islemi yapmak istersiniz?");
    gotoxy(dx+7,dy+7);
    printf("Profil");
    gotoxy(dx+7,dy+15);
    printf("Calisan");
    gotoxy(dx+7,dy+23);
    printf("Cikis Yap");

    ekranYaz();

    gotoxy(dx-32,dy+24);
    gets(islem);

    buyuk_kucuk_harf(islem);


    if(strcmp(islem,"profil")==0)
    {
        arayuz_Profil();
    }

    else if(strcmp(islem,"calisan")==0)
    {
        arayuz_Gorevli_detay();
    }

    else if(strcmp(islem,"cikis yap")==0)
    {
        giris=0;
        main();
    }

    else if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_gorevli_patron();
    }
}

void arayuz_Gorevli_detay()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    char islem[100];

    int x;

    for(x=dy+3;x<=dy+20;x=x+8)
        ekran(dx-4,x,dx+79,x+6,219);

    gotoxy(dx+21,dy+1);
    printf("Hangi islemi yapmak istersiniz?");
    gotoxy(dx+7,dy+7);
    printf("Yeni Calisan Ekle");
    gotoxy(dx+7,dy+15);
    printf("Calisan Cikar");
    gotoxy(dx+7,dy+23);
    printf("Calisan Listesi");

    ekranYaz();

    gotoxy(dx-32,dy+24);
    gets(islem);

    buyuk_kucuk_harf(islem);


    if(strcmp(islem,"yeni calisan ekle")==0)
    {
        arayuz_Gorevli_calisan_ekle();
    }

    else if(strcmp(islem,"calisan cikar")==0)
    {
        arayuz_Gorevli_calisan_sil();
    }

    else if(strcmp(islem,"calisan listesi")==0)
    {
        arayuz_Gorevli_listesi();
    }

    else if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_Gorevli_detay();
    }
}

void arayuz_Gorevli_listesi()
{
	Gorevli_Bilgi_Cek();
    int limit=1;
    char liste[20];
    gelir=0;
    int gorevli_maas;
	int i;
	for(i=0;i<20;i++)
    {
	    if(strncmp(gorevli_eposta,Gorevli[i].Gorevli_Eposta,strlen(gorevli_eposta))==0)
	    {
	        break;
	    }
    }
    do
    {

        temizle();
        arayuz_Temel();
        arayuz_Metin();
        gotoxy(38,17);

        Sleep(400);

        int sayfa;

        for(sayfa=limit*2-1;sayfa<limit*2+1;sayfa++)
        {

            ekran(32,gy-1,115,gy+8,219);
            ekranYaz();
            gotoxy(dx,gy+2);
            printf("Isim :%s",Gorevli[sayfa-1].Gorevli_AdSoyad);
            gotoxy(dx,gy+3);
            printf("Cinsiyet :%s",Gorevli[sayfa-1].Gorevli_Cinsiyet);
            gotoxy(dx,gy+4);
            printf("E posta :%s",Gorevli[sayfa-1].Gorevli_Eposta);
            gotoxy(dx,gy+5);
            printf("Sifre :%s",Gorevli[sayfa-1].Gorevli_Sifre);
            gotoxy(dx,gy+6);
            printf("Telefon No :%s",Gorevli[sayfa-1].Gorevli_Tel_No);

            if(i==0)
            {
                gelir=0;
                gorevli_maas=0;
                int j;
                for(j=0;j<132;j++)
                {
                    if(strlen(Kayit[j].Musteri_AdSoyad)>1)
                    {
                        gelir+=(time(NULL)-Kayit[j].ucret)/30*10+5;
                    }
                }
                for(j=1;j<132;j++)
                {
                    if(strlen(Gorevli[j].Gorevli_AdSoyad)>1)
                    {
                        gorevli_maas=atoi(Gorevli[j].Gorevli_MaasAylik);
                        gelir-=gorevli_maas;
                    }
                }
                sprintf(Gorevli[i].Gorevli_MaasAylik,"%d",gelir);
            }

            gotoxy(dx,gy+7);
            printf("Maas :%s",Gorevli[sayfa-1].Gorevli_MaasAylik);

            gy+=12;

        }
        gx=dx,gy=dy;

        sprintf(liste,"%d",limit);

        gotoxy(dx+31,dy+24);
        if(liste==49)
        {
            printf("  Sayfa %s %c",liste,16);
        }

        else if(liste>49)
        {
            printf("%c Sayfa %s %c",17,liste,16);
        }

        gotoxy(dx-32,dy+24);

        scanf("%d",&limit);


    }while(limit>=1&&limit<=100);

    arayuz_Gorevli_detay();
}

void arayuz_Gorevli_calisan_ekle()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    char sahip[100];

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    gotoxy(dx+14,dy+1);
    printf("Kaydetmek istediginiz calisanin ozelliklerini giriniz:");

    int x;

    for(x=2;x<26;x=x+4)
    {
        ekran(dx+16,dy+x,dx+60,dy+x,205);
        ekran(dx+16,dy+x+2,dx+60,dy+x+2,205);

        gotoxy(dx+16,dy+x+1);
        printf("%c",201);
        gotoxy(dx+16,dy+x+2);
        printf("%c",186);
        gotoxy(dx+16,dy+x+3);
        printf("%c",200);

        gotoxy(dx+62,dy+x+1);
        printf("%c",187);
        gotoxy(dx+62,dy+x+2);
        printf("%c",186);
        gotoxy(dx+62,dy+x+3);
        printf("%c",188);
    }

    gotoxy(dx+35,dy+4);
    printf("Isim...");
    gotoxy(dx+35,dy+8);
    printf("Cinsiyet...");
    gotoxy(dx+35,dy+12);
    printf("E posta...");
    gotoxy(dx+35,dy+16);
    printf("Sifre...");
    gotoxy(dx+35,dy+20);
    printf("Telefon no...");
    gotoxy(dx+35,dy+24);
    printf("Maas..");





    ekranYaz();
    int sira=0;
    int i;
    for ( i = 0; i < 20; i++)
    {
        if (strlen(Gorevli[i].Gorevli_AdSoyad)>1)
        {
            sira++;
        }
    }

    gotoxy(dx+20,dy+4);
    gets(Gorevli[sira].Gorevli_AdSoyad);
    gotoxy(dx+20,dy+8);
    gets(Gorevli[sira].Gorevli_Cinsiyet);
    gotoxy(dx+20,dy+12);
    gets(Gorevli[sira].Gorevli_Eposta);
    gotoxy(dx+20,dy+16);
    gets(Gorevli[sira].Gorevli_Sifre);
    gotoxy(dx+20,dy+20);
    gets(Gorevli[sira].Gorevli_Tel_No);
    gotoxy(dx+20,dy+24);
    gets(Gorevli[sira].Gorevli_MaasAylik);

    FILE *fptr2;

    fptr2 = fopen("gorevlikayitstruct.txt","a");
    if(fptr2 == NULL)
    {
        fptr2 = fopen("gorevlikayitstruct.txt", "a");
    }

    fprintf(fptr2,"%s\n%s\n%s\n%s\n%s\n%s\n"
	,Gorevli[sira].Gorevli_AdSoyad,Gorevli[sira].Gorevli_Cinsiyet,Gorevli[sira].Gorevli_Eposta,Gorevli[sira].Gorevli_Sifre,Gorevli[sira].Gorevli_Tel_No,Gorevli[sira].Gorevli_MaasAylik);

    fclose(fptr2);
    ekranYaz();

    arayuz_Gorevli_detay();
}

void arayuz_Gorevli_calisan_sil()
{
    char islem[100];
    char e_mail_yaptim[50];


    temizle();
    arayuz_Temel();
    arayuz_Metin();

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    ekran(dx+16,dy+11,dx+60,dy+11,205);
    ekran(dx+16,dy+13,dx+60,dy+13,205);
    ekranYaz();

    gotoxy(dx+16,dy+12);
    printf("%c",201);
    gotoxy(dx+16,dy+13);
    printf("%c",186);
    gotoxy(dx+16,dy+14);
    printf("%c",200);

    gotoxy(dx+62,dy+12);
    printf("%c",187);
    gotoxy(dx+62,dy+13);
    printf("%c",186);
    gotoxy(dx+62,dy+14);
    printf("%c",188);

    gotoxy(dx+16,dy+9);
    printf("Silmek istediginiz calisanin e-postasini giriniz:");
    gotoxy(dx+34,dy+13);
    printf("E-posta...");

    gotoxy(dx+26,dy+13);

    gets(e_mail_yaptim);

    int f;
    int dogrulama=0;
    for(f=0;f<132;f++)
    {
        if(strlen(e_mail_yaptim)>1)
        {
           if(strncmp(e_mail_yaptim,Gorevli[f].Gorevli_Eposta,strlen(e_mail_yaptim))==0)
           {
               dogrulama=1;
               break;
           }
        }
    }

    if(dogrulama==1)
    {
        FILE *gorevlikayitstructt;
        gorevlikayitstructt=fopen("gorevlikayitstruct.txt","r");
        int abcde=0,usa=0,hangi_bolum;
        int gorevlibufferLength = 300;
        char gorevlibuffer[gorevlibufferLength];
        int sayac1=0;
        int sayac2=0;
        while(fgets(gorevlibuffer, gorevlibufferLength, gorevlikayitstructt))
        {
            if (sayac1==0)
            {
                strcpy(yedek_yaptim[sayac2].Gorevli_AdSoyad,gorevlibuffer);
            }
            if(sayac1==1)
            {
                strcpy(yedek_yaptim[sayac2].Gorevli_Cinsiyet,gorevlibuffer);
            }
            if (sayac1==2)
            {
                strcpy(yedek_yaptim[sayac2].Gorevli_Eposta,gorevlibuffer);
            }
            if (sayac1==3)
            {
                strcpy(yedek_yaptim[sayac2].Gorevli_Sifre,gorevlibuffer);
            }
            if (sayac1==4)
            {
                strcpy(yedek_yaptim[sayac2].Gorevli_Tel_No,gorevlibuffer);
            }
            if (sayac1==5)
            {
                strcpy(yedek_yaptim[sayac2].Gorevli_MaasAylik,gorevlibuffer);
                sayac1=0;
                sayac2++;
                continue;
            }
            sayac1++;
        }
        for(usa=0;usa<(sayac2);usa++)
		{
            if(strncmp(e_mail_yaptim,yedek_yaptim[usa].Gorevli_Eposta,strlen(e_mail_yaptim))==0)
            {
                hangi_bolum=usa;
            }
        }
        for(usa=0;usa<(hangi_bolum);usa++)
		{
            strcpy(silicez[usa].Gorevli_AdSoyad,yedek_yaptim[usa].Gorevli_AdSoyad);
            strcpy(silicez[usa].Gorevli_Cinsiyet,yedek_yaptim[usa].Gorevli_Cinsiyet);
            strcpy(silicez[usa].Gorevli_Eposta,yedek_yaptim[usa].Gorevli_Eposta);
            strcpy(silicez[usa].Gorevli_Sifre,yedek_yaptim[usa].Gorevli_Sifre);
            strcpy(silicez[usa].Gorevli_Tel_No,yedek_yaptim[usa].Gorevli_Tel_No);
            strcpy(silicez[usa].Gorevli_MaasAylik,yedek_yaptim[usa].Gorevli_MaasAylik);
        }
    	for(usa=(hangi_bolum+1);usa<=(sayac2-1);usa++)
		{
            strcpy(silicez[usa-1].Gorevli_AdSoyad,yedek_yaptim[usa].Gorevli_AdSoyad);
            strcpy(silicez[usa-1].Gorevli_Cinsiyet,yedek_yaptim[usa].Gorevli_Cinsiyet);
            strcpy(silicez[usa-1].Gorevli_Eposta,yedek_yaptim[usa].Gorevli_Eposta);
            strcpy(silicez[usa-1].Gorevli_Sifre,yedek_yaptim[usa].Gorevli_Sifre);
            strcpy(silicez[usa-1].Gorevli_Tel_No,yedek_yaptim[usa].Gorevli_Tel_No);
            strcpy(silicez[usa-1].Gorevli_MaasAylik,yedek_yaptim[usa].Gorevli_MaasAylik);
		}
    	fclose(gorevlikayitstructt);

    	FILE *gorevlikayitstruct2;
        gorevlikayitstruct2=fopen("gorevlikayitstruct.txt","w");
        int usa2;
        for(usa2=0;usa2<(sayac2-1);usa2++)
        {
            fprintf(gorevlikayitstruct2,"%s%s%s%s%s%s",silicez[usa2].Gorevli_AdSoyad,silicez[usa2].Gorevli_Cinsiyet,silicez[usa2].Gorevli_Eposta,silicez[usa2].Gorevli_Sifre,
            silicez[usa2].Gorevli_Tel_No,silicez[usa2].Gorevli_MaasAylik);
        }
        fclose(gorevlikayitstruct2);
        arayuz_Gorevli_detay();
    }

    else
    {
        temizle();
        arayuz_Temel();
        arayuz_Metin();
        int i,j,t;

        ekran(dx+10,dy+3,dx+66,dy+3,220);
        ekran(dx+10,dy+20,dx+66,dy+20,223);
        ekran(dx+10,dy+4,dx+10,dy+19,219);
        ekran(dx+66,dy+4,dx+66,dy+19,219);
        gotoxy(dx+31,dy+8);
        printf("E-POSTA BULUNAMADI");
        for(t=0;t<4;t++)
        {
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,219);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,219);
            }
            ekranYaz();

            Sleep(300);
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,32);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,32);
            }
            ekranYaz();
            Sleep(600);
        }

        arayuz_Gorevli_detay();
    }

}

void arayuz_Ana_Menu_Secim_calisan()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();
    char islem[100];

    gets(islem);

    buyuk_kucuk_harf(islem);

    if(strcmp("otopark",islem)==0)
    {
        arayuz_Otopark();
    }

    else if(strcmp("gorevli",islem)==0)
    {
        arayuz_gorevli_calisan();
    }

    else if(strcmp("musteri",islem)==0)
    {
        arayuz_Musteri();
    }

    else if(strcmp("gps",islem)==0)
    {
        arayuz_Gps();
    }
    else if(strcmp("plaka sorgu",islem)==0)
    {
        arayuz_plaka_sorgu();
    }

    else if(strcmp("arac",islem)==0)
    {
        arayuz_Arac();
    }

    else
    {
        arayuz_Ana_Menu_Secim_calisan();
    }

}

void arayuz_Ana_Menu_Secim_patron()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();
    char islem[100];

    gets(islem);

    buyuk_kucuk_harf(islem);

    if(strcmp("otopark",islem)==0)
    {
        arayuz_Otopark();
    }

    else if(strcmp("gorevli",islem)==0)
    {
        arayuz_gorevli_patron();
    }

    else if(strcmp("musteri",islem)==0)
    {
        arayuz_Musteri();
    }

    else if(strcmp("gps",islem)==0)
    {
        arayuz_Gps();
    }
    else if(strcmp("plaka sorgu",islem)==0)
    {
        arayuz_plaka_sorgu();
    }

    else if(strcmp("arac",islem)==0)
    {
        arayuz_Arac();
    }

    else
    {
        arayuz_Ana_Menu_Secim_patron();
    }

}

void arayuz_Otopark()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();
    char islem[100];
    Bilet_Bilgi_Cek();

    ekran(dx,dy-2,dx+76,dy-2,220);
    ekran(dx,dy+25,dx+76,dy+25,223);
    ekran(dx,dy-1,dx,dy+9,219);
    ekran(dx,dy+14,dx,dy+24,219);
    ekran(dx+76,dy-1,dx+76,dy+9,219);
    ekran(dx+76,dy+14,dx+76,dy+24,219);

    int t,i,j;

    for(j=14;j<63;j=j+8)
    {
        ekran(dx+j,dy+3,dx+j,dy+9,219);
        ekran(dx+j,dy+14,dx+j,dy+20,219);
    }

    for(j=10;j<76;j=j+4)
    {

        ekran(dx-4+j,dy-1,dx-4+j,dy-1,179);
        ekran(dx-4+j,dy+24,dx-4+j,dy+24,179);
    }

    for(j=1;j<23;j=j+2)
    {
        if(j==11)
        {
            j=j+3;
        }
        ekran(dx+1,dy+j,dx+2,dy+j,196);
        ekran(dx+74,dy+j,dx+75,dy+j,196);
    }

    for(t=0;t<2;t++)
    {
        for(i=3;i<11;i=i+2)
        {
            for(j=14;j<63;j=j+8)
            {
                ekran(dx+j-2,dy+i+t*11,dx+j-1,dy+i+t*11,196);
                ekran(dx+j+1,dy+i+t*11,dx+j+2,dy+i+t*11,196);
            }
        }
    }

    gotoxy(dx,dy+10);
    printf("%c",205);
    gotoxy(dx-1,dy+10);
    printf("%c",205);
    gotoxy(dx-2,dy+10);
    printf("%c",200);
    gotoxy(dx-2,dy+9);
    printf("%c",186);
    gotoxy(dx-2,dy+8);
    printf("%c",201);
    gotoxy(dx-1,dy+8);
    printf("%c",205);
    gotoxy(dx,dy+8);
    printf("%c",205);
    gotoxy(dx-1,dy+9);
    printf("%c",242);

    gotoxy(dx+78,dy+10);
    printf("%c",205);
    gotoxy(dx+79,dy+10);
    printf("%c",205);
    gotoxy(dx+80,dy+10);
    printf("%c",188);
    gotoxy(dx+80,dy+9);
    printf("%c",186);
    gotoxy(dx+80,dy+8);
    printf("%c",187);
    gotoxy(dx+79,dy+8);
    printf("%c",205);
    gotoxy(dx+78,dy+8);
    printf("%c",205);
    gotoxy(dx+79,dy+9);
    printf("%c",242);

    gotoxy(dx+1,dy+11);
    printf("%c",220);
    ekran(dx,dy+11,dx,dy+13,179);

    gotoxy(dx+77,dy+11);
    printf("%c",220);
    ekran(dx+76,dy+11,dx+76,dy+13,179);


    ekranYaz();

    int arac_x=dx+2,arac_y=dy+9;

    for(i=0;i<132;i++)
    {
        arac_x=Bilet[i].biletyerx;
        arac_y=Bilet[i].biletyery;

        if(Bilet[i].durum==2)
        {
            gotoxy(arac_x,arac_y);
            printf("%c",arac_tipi);
        }
    }

    for(i=0;i<132;i++)
    {
        arac_x=Bilet[i].biletyerx;
        arac_y=Bilet[i].biletyery;

        if(arac_y==dy)
        {
            if(Bilet[i].durum==3)
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+70,dy+2,i);
            }
            else
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+8,dy+2,i);
            }
        }

        else if(arac_y==dy+25)
        {
            if(Bilet[i].durum==3)
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+70,dy+23,i);
            }
            else
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+8,dy+23,i);
            }

        }

        else if(arac_x==dx+2 ||arac_x==dx+14)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+8,dy+2,i);
        }

        else if(arac_x==dx+16||arac_x==dx+22)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+19,dy+2,i);
        }

        else if(arac_x==dx+24||arac_x==dx+30)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+27,dy+2,i);
        }

        else if(arac_x==dx+32||arac_x==dx+38)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+35,dy+2,i);
        }

        else if(arac_x==dx+40||arac_x==dx+46)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+43,dy+2,i);
        }

        else if(arac_x==dx+48||arac_x==dx+54)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+51,dy+2,i);
        }

        else if(arac_x==dx+56||arac_x==dx+62)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+59,dy+2,i);
        }

        else if(arac_x==dx+64 || arac_x==dx+76)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+70,dy+2,i);
        }
    }

    gotoxy(dx-32,dy+24);
    gets(islem);
    buyuk_kucuk_harf(islem);


    if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_Otopark();
    }
}

void arayuz_Otopark_arac_cikis()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();
    char islem[100];
    Bilet_Bilgi_Cek();

    ekran(dx,dy-2,dx+76,dy-2,220);
    ekran(dx,dy+25,dx+76,dy+25,223);
    ekran(dx,dy-1,dx,dy+9,219);
    ekran(dx,dy+14,dx,dy+24,219);
    ekran(dx+76,dy-1,dx+76,dy+9,219);
    ekran(dx+76,dy+14,dx+76,dy+24,219);

    int t,i,j;

    for(j=14;j<63;j=j+8)
    {
        ekran(dx+j,dy+3,dx+j,dy+9,219);
        ekran(dx+j,dy+14,dx+j,dy+20,219);
    }

    for(j=10;j<76;j=j+4)
    {

        ekran(dx-4+j,dy-1,dx-4+j,dy-1,179);
        ekran(dx-4+j,dy+24,dx-4+j,dy+24,179);
    }

    for(j=1;j<23;j=j+2)
    {
        if(j==11)
        {
            j=j+3;
        }
        ekran(dx+1,dy+j,dx+2,dy+j,196);
        ekran(dx+74,dy+j,dx+75,dy+j,196);
    }

    for(t=0;t<2;t++)
    {
        for(i=3;i<11;i=i+2)
        {
            for(j=14;j<63;j=j+8)
            {
                ekran(dx+j-2,dy+i+t*11,dx+j-1,dy+i+t*11,196);
                ekran(dx+j+1,dy+i+t*11,dx+j+2,dy+i+t*11,196);
            }
        }
    }

    gotoxy(dx,dy+10);
    printf("%c",205);
    gotoxy(dx-1,dy+10);
    printf("%c",205);
    gotoxy(dx-2,dy+10);
    printf("%c",200);
    gotoxy(dx-2,dy+9);
    printf("%c",186);
    gotoxy(dx-2,dy+8);
    printf("%c",201);
    gotoxy(dx-1,dy+8);
    printf("%c",205);
    gotoxy(dx,dy+8);
    printf("%c",205);
    gotoxy(dx-1,dy+9);
    printf("%c",242);

    gotoxy(dx+78,dy+10);
    printf("%c",205);
    gotoxy(dx+79,dy+10);
    printf("%c",205);
    gotoxy(dx+80,dy+10);
    printf("%c",188);
    gotoxy(dx+80,dy+9);
    printf("%c",186);
    gotoxy(dx+80,dy+8);
    printf("%c",187);
    gotoxy(dx+79,dy+8);
    printf("%c",205);
    gotoxy(dx+78,dy+8);
    printf("%c",205);
    gotoxy(dx+79,dy+9);
    printf("%c",242);

    gotoxy(dx+1,dy+11);
    printf("%c",220);
    ekran(dx,dy+11,dx,dy+13,179);

    gotoxy(dx+77,dy+11);
    printf("%c",220);
    ekran(dx+76,dy+11,dx+76,dy+13,179);


    ekranYaz();

    int arac_x=dx+2,arac_y=dy+9;

    for(i=0;i<132;i++)
    {
        arac_x=Bilet[i].biletyerx;
        arac_y=Bilet[i].biletyery;

        if(Bilet[i].durum==2)
        {
            gotoxy(arac_x,arac_y);
            printf("%c",arac_tipi);
        }
    }


    for(i=0;i<132;i++)
    {
        arac_x=Bilet[i].biletyerx;
        arac_y=Bilet[i].biletyery;

        if(arac_y==dy)
        {
            if(Bilet[i].durum==3)
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+70,dy+2,i);
            }
            else
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+8,dy+2,i);
            }
        }

        else if(arac_y==dy+25)
        {
            if(Bilet[i].durum==3)
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+70,dy+23,i);
            }
            else
            {
                otopark_arac_Hareket(arac_x,arac_y,dx+8,dy+23,i);
            }

        }

        else if(arac_x==dx+2 ||arac_x==dx+14)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+8,dy+2,i);
        }

        else if(arac_x==dx+16||arac_x==dx+22)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+19,dy+2,i);
        }

        else if(arac_x==dx+24||arac_x==dx+30)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+27,dy+2,i);
        }

        else if(arac_x==dx+32||arac_x==dx+38)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+35,dy+2,i);
        }

        else if(arac_x==dx+40||arac_x==dx+46)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+43,dy+2,i);
        }

        else if(arac_x==dx+48||arac_x==dx+54)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+51,dy+2,i);
        }

        else if(arac_x==dx+56||arac_x==dx+62)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+59,dy+2,i);
        }

        else if(arac_x==dx+64 || arac_x==dx+76)
        {
            otopark_arac_Hareket(arac_x,arac_y,dx+70,dy+2,i);
        }
    }

}

void arayuz_Otopark_giris_kapi_acilis()
{
    ekran(dx,dy+11,dx,dy+13,32);
    ekranYaz();

    gotoxy(dx+1,dy+12);
    printf("%c",179);
    gotoxy(dx+1,dy+13);
    printf("%c",192);
    gotoxy(dx+2,dy+13);
    printf("%c",191);
    gotoxy(dx+2,dy+14);
    printf("%c",179);
    Sleep(401);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+1,dy+13);
    printf("%c",32);
    gotoxy(dx+2,dy+13);
    printf("%c",32);
    gotoxy(dx+2,dy+14);
    printf("%c",32);

    gotoxy(dx+1,dy+12);
    printf("%c",192);
    gotoxy(dx+2,dy+12);
    printf("%c",191);
    gotoxy(dx+2,dy+13);
    printf("%c",192);
    gotoxy(dx+3,dy+13);
    printf("%c",191);
    gotoxy(dx+3,dy+14);
    printf("%c",192);
    Sleep(402);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+13);
    printf("%c",32);
    gotoxy(dx+3,dy+13);
    printf("%c",32);
    gotoxy(dx+3,dy+14);
    printf("%c",32);

    gotoxy(dx+1,dy+12);
    printf("%c",192);
    gotoxy(dx+2,dy+12);
    printf("%c",196);
    gotoxy(dx+3,dy+12);
    printf("%c",191);
    gotoxy(dx+3,dy+13);
    printf("%c",192);
    gotoxy(dx+4,dy+13);
    printf("%c",191);
    Sleep(403);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+12);
    printf("%c",32);
    gotoxy(dx+3,dy+12);
    printf("%c",32);
    gotoxy(dx+3,dy+13);
    printf("%c",32);
    gotoxy(dx+4,dy+13);
    printf("%c",32);

    gotoxy(dx+1,dy+12);
    printf("%c",192);
    gotoxy(dx+2,dy+12);
    printf("%c",196);
    gotoxy(dx+3,dy+12);
    printf("%c",196);
    gotoxy(dx+4,dy+12);
    printf("%c",196);
    gotoxy(dx+5,dy+12);
    printf("%c",196);
    Sleep(404);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+12);
    printf("%c",32);
    gotoxy(dx+3,dy+12);
    printf("%c",32);
    gotoxy(dx+4,dy+12);
    printf("%c",32);
    gotoxy(dx+5,dy+12);
    printf("%c",32);

    gotoxy(dx+2,dy+11);
    printf("%c",95);
    gotoxy(dx+3,dy+11);
    printf("%c",95);
    gotoxy(dx+4,dy+11);
    printf("%c",95);
    gotoxy(dx+5,dy+11);
    printf("%c",95);
    gotoxy(dx+6,dy+11);
    printf("%c",95);
    Sleep(405);
}

void arayuz_Otopark_giris_kapi_kapanis()
{
    gotoxy(dx+2,dy+11);
    printf("%c",32);
    gotoxy(dx+3,dy+11);
    printf("%c",32);
    gotoxy(dx+4,dy+11);
    printf("%c",32);
    gotoxy(dx+5,dy+11);
    printf("%c",32);
    gotoxy(dx+6,dy+11);
    printf("%c",32);

    gotoxy(dx+1,dy+12);
    printf("%c",192);
    gotoxy(dx+2,dy+12);
    printf("%c",196);
    gotoxy(dx+3,dy+12);
    printf("%c",196);
    gotoxy(dx+4,dy+12);
    printf("%c",196);
    gotoxy(dx+5,dy+12);
    printf("%c",196);
    Sleep(402);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+12);
    printf("%c",32);
    gotoxy(dx+3,dy+12);
    printf("%c",32);
    gotoxy(dx+4,dy+12);
    printf("%c",32);
    gotoxy(dx+5,dy+12);
    printf("%c",32);

    gotoxy(dx+1,dy+12);
    printf("%c",192);
    gotoxy(dx+2,dy+12);
    printf("%c",196);
    gotoxy(dx+3,dy+12);
    printf("%c",191);
    gotoxy(dx+3,dy+13);
    printf("%c",192);
    gotoxy(dx+4,dy+13);
    printf("%c",191);
    Sleep(403);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+12);
    printf("%c",32);
    gotoxy(dx+3,dy+12);
    printf("%c",32);
    gotoxy(dx+3,dy+13);
    printf("%c",32);
    gotoxy(dx+4,dy+13);
    printf("%c",32);

    gotoxy(dx+1,dy+12);
    printf("%c",192);
    gotoxy(dx+2,dy+12);
    printf("%c",191);
    gotoxy(dx+2,dy+13);
    printf("%c",192);
    gotoxy(dx+3,dy+13);
    printf("%c",191);
    gotoxy(dx+3,dy+14);
    printf("%c",192);
    Sleep(404);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+12);
    printf("%c",32);
    gotoxy(dx+2,dy+13);
    printf("%c",32);
    gotoxy(dx+3,dy+13);
    printf("%c",32);
    gotoxy(dx+3,dy+14);
    printf("%c",32);

    gotoxy(dx+1,dy+12);
    printf("%c",179);
    gotoxy(dx+1,dy+13);
    printf("%c",192);
    gotoxy(dx+2,dy+13);
    printf("%c",191);
    gotoxy(dx+2,dy+14);
    printf("%c",179);
    Sleep(405);
    gotoxy(dx+1,dy+12);
    printf("%c",32);
    gotoxy(dx+1,dy+13);
    printf("%c",32);
    gotoxy(dx+2,dy+13);
    printf("%c",32);
    gotoxy(dx+2,dy+14);
    printf("%c",32);

    ekran(dx,dy+11,dx,dy+13,179);
    ekranYaz();
}

void arayuz_Otopark_cikis_kapi_acilis()
{
    ekran(dx+76,dy+11,dx+76,dy+13,32);
    ekranYaz();

    gotoxy(dx+77,dy+12);
    printf("%c",179);
    gotoxy(dx+77,dy+13);
    printf("%c",217);
    gotoxy(dx+76,dy+13);
    printf("%c",218);
    gotoxy(dx+76,dy+14);
    printf("%c",179);
    Sleep(405);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+77,dy+13);
    printf("%c",32);
    gotoxy(dx+76,dy+13);
    printf("%c",32);
    gotoxy(dx+76,dy+14);
    printf("%c",32);

    gotoxy(dx+77,dy+12);
    printf("%c",217);
    gotoxy(dx+76,dy+12);
    printf("%c",218);
    gotoxy(dx+76,dy+13);
    printf("%c",217);
    gotoxy(dx+75,dy+13);
    printf("%c",218);
    gotoxy(dx+75,dy+14);
    printf("%c",217);
    Sleep(404);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+13);
    printf("%c",32);
    gotoxy(dx+75,dy+13);
    printf("%c",32);
    gotoxy(dx+75,dy+14);
    printf("%c",32);

    gotoxy(dx+77,dy+12);
    printf("%c",217);
    gotoxy(dx+76,dy+12);
    printf("%c",196);
    gotoxy(dx+75,dy+12);
    printf("%c",218);
    gotoxy(dx+75,dy+13);
    printf("%c",217);
    gotoxy(dx+74,dy+13);
    printf("%c",218);
    Sleep(403);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+12);
    printf("%c",32);
    gotoxy(dx+75,dy+12);
    printf("%c",32);
    gotoxy(dx+75,dy+13);
    printf("%c",32);
    gotoxy(dx+74,dy+13);
    printf("%c",32);

    gotoxy(dx+77,dy+12);
    printf("%c",217);
    gotoxy(dx+76,dy+12);
    printf("%c",196);
    gotoxy(dx+75,dy+12);
    printf("%c",196);
    gotoxy(dx+74,dy+12);
    printf("%c",196);
    gotoxy(dx+73,dy+12);
    printf("%c",196);
    Sleep(402);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+12);
    printf("%c",32);
    gotoxy(dx+75,dy+12);
    printf("%c",32);
    gotoxy(dx+74,dy+12);
    printf("%c",32);
    gotoxy(dx+73,dy+12);
    printf("%c",32);

    gotoxy(dx+76,dy+11);
    printf("%c",95);
    gotoxy(dx+75,dy+11);
    printf("%c",95);
    gotoxy(dx+74,dy+11);
    printf("%c",95);
    gotoxy(dx+73,dy+11);
    printf("%c",95);
    gotoxy(dx+72,dy+11);
    printf("%c",95);
    Sleep(401);

}

void arayuz_Otopark_cikis_kapi_kapanis()
{
    gotoxy(dx+76,dy+11);
    printf("%c",95);
    gotoxy(dx+75,dy+11);
    printf("%c",95);
    gotoxy(dx+74,dy+11);
    printf("%c",95);
    gotoxy(dx+73,dy+11);
    printf("%c",95);
    gotoxy(dx+72,dy+11);
    printf("%c",95);
    Sleep(401);
    gotoxy(dx+76,dy+11);
    printf("%c",32);
    gotoxy(dx+75,dy+11);
    printf("%c",32);
    gotoxy(dx+74,dy+11);
    printf("%c",32);
    gotoxy(dx+73,dy+11);
    printf("%c",32);
    gotoxy(dx+72,dy+11);
    printf("%c",32);

    gotoxy(dx+77,dy+12);
    printf("%c",217);
    gotoxy(dx+76,dy+12);
    printf("%c",196);
    gotoxy(dx+75,dy+12);
    printf("%c",196);
    gotoxy(dx+74,dy+12);
    printf("%c",196);
    gotoxy(dx+73,dy+12);
    printf("%c",196);
    Sleep(402);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+12);
    printf("%c",32);
    gotoxy(dx+75,dy+12);
    printf("%c",32);
    gotoxy(dx+74,dy+12);
    printf("%c",32);
    gotoxy(dx+73,dy+12);
    printf("%c",32);

    gotoxy(dx+77,dy+12);
    printf("%c",217);
    gotoxy(dx+76,dy+12);
    printf("%c",196);
    gotoxy(dx+75,dy+12);
    printf("%c",218);
    gotoxy(dx+75,dy+13);
    printf("%c",217);
    gotoxy(dx+74,dy+13);
    printf("%c",218);
    Sleep(403);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+12);
    printf("%c",32);
    gotoxy(dx+75,dy+12);
    printf("%c",32);
    gotoxy(dx+75,dy+13);
    printf("%c",32);
    gotoxy(dx+74,dy+13);
    printf("%c",32);

    gotoxy(dx+77,dy+12);
    printf("%c",217);
    gotoxy(dx+76,dy+12);
    printf("%c",218);
    gotoxy(dx+76,dy+13);
    printf("%c",217);
    gotoxy(dx+75,dy+13);
    printf("%c",218);
    gotoxy(dx+75,dy+14);
    printf("%c",217);
    Sleep(404);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+12);
    printf("%c",32);
    gotoxy(dx+76,dy+13);
    printf("%c",32);
    gotoxy(dx+75,dy+13);
    printf("%c",32);
    gotoxy(dx+75,dy+14);
    printf("%c",32);

    gotoxy(dx+77,dy+12);
    printf("%c",179);
    gotoxy(dx+77,dy+13);
    printf("%c",217);
    gotoxy(dx+76,dy+13);
    printf("%c",218);
    gotoxy(dx+76,dy+14);
    printf("%c",179);
    Sleep(405);
    gotoxy(dx+77,dy+12);
    printf("%c",32);
    gotoxy(dx+77,dy+13);
    printf("%c",32);
    gotoxy(dx+76,dy+13);
    printf("%c",32);
    gotoxy(dx+76,dy+14);
    printf("%c",32);

    ekran(dx+76,dy+11,dx+76,dy+13,179);
    ekranYaz();
}

void otopark_arac_Hareket(int konum_x,int konum_y,int yol_x,int yol_y,int i)
{
    int arac_sayisi=1;
    int giris_x=dx-4,giris_y=dy+13;
    int cikis_x=dx+82,cikis_y=dy+13;

    int j;

    if(Bilet[i].durum==1)
    {
        for(j=giris_x;j<=yol_x;j++)
        {
            gotoxy(j,giris_y);
            printf("%c",arac_tipi);

            if(j==dx)
            {
                arayuz_Otopark_giris_kapi_acilis();
            }

            Sleep(100);
            gotoxy(j,giris_y);
            printf(" ");
        }

        if(konum_y==dy||konum_y==dy+25)
        {
            if(yol_y>giris_y)
            {
                for(j=giris_y;j<=yol_y;j++)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }

                for(j=yol_x;j<=konum_x;j++)
                {
                    gotoxy(j,yol_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,yol_y);
                    printf(" ");
                }

                for(j=yol_y;j<=konum_y;j++)
                {
                    gotoxy(konum_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(konum_x,j);
                    printf(" ");
                }
            }

            else if(yol_y<giris_y)
            {
                for(j=giris_y;j>=yol_y;j--)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }

                for(j=yol_x;j<=konum_x;j++)
                {
                    gotoxy(j,yol_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,yol_y);
                    printf(" ");
                }

                for(j=yol_y;j>=konum_y;j--)
                {
                    gotoxy(konum_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(konum_x,j);
                    printf(" ");
                }
            }
        }

        else
        {
            if(konum_y>giris_y)
            {
                for(j=giris_y;j<=konum_y;j++)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }
            }

            else if(konum_y<giris_y)
            {
                for(j=giris_y;j>=konum_y;j--)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }
            }

            if(konum_x<yol_x)
            {
                for(j=yol_x;j>=konum_x;j--)
                {
                    gotoxy(j,konum_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,konum_y);
                    printf(" ");
                }
            }

            else if(konum_x>yol_x)
            {
                for(j=yol_x;j<=konum_x;j++)
                {
                    gotoxy(j,konum_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,konum_y);
                    printf(" ");
                }
            }
        }

        Bilet[i].durum=2;
        gotoxy(konum_x,konum_y);
        printf("%c",arac_tipi);

        arayuz_Otopark_giris_kapi_kapanis();
        Sleep(300);
    }

    else if(Bilet[i].durum==3)
    {
        gotoxy(konum_x,konum_y);
        printf(" ");

        if(konum_y==dy||konum_y==dy+25)
        {
            if(yol_y>cikis_y)
            {
                for(j=konum_y;j>=yol_y;j--)
                {
                    gotoxy(konum_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(konum_x,j);
                    printf(" ");
                }

                for(j=konum_x;j<=yol_x;j++)
                {
                    gotoxy(j,yol_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,yol_y);
                    printf(" ");
                }

                for(j=yol_y;j>=cikis_y;j--)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }
            }

            else if(yol_y<cikis_y)
            {
                for(j=konum_y;j<=yol_y;j++)
                {
                    gotoxy(konum_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(konum_x,j);
                    printf(" ");
                }

                for(j=konum_x;j<=yol_x;j++)
                {
                    gotoxy(j,yol_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,yol_y);
                    printf(" ");
                }

                for(j=yol_y;j<=cikis_y;j++)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }

            }
        }

        else
        {

            if(konum_x<yol_x)
            {
                for(j=konum_x;j<=yol_x;j++)
                {
                    gotoxy(j,konum_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,konum_y);
                    printf(" ");
                }
            }

            else if(konum_x>yol_x)
            {
                for(j=konum_x;j>=yol_x;j--)
                {
                    gotoxy(j,konum_y);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(j,konum_y);
                    printf(" ");
                }
            }

            if(konum_y>cikis_y)
            {
                for(j=konum_y;j>=cikis_y;j--)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }
            }

            else if(konum_y<cikis_y)
            {
                for(j=konum_y;j<=cikis_y;j++)
                {
                    gotoxy(yol_x,j);
                    printf("%c",arac_tipi);
                    Sleep(100);
                    gotoxy(yol_x,j);
                    printf(" ");
                }
            }

        }

        for(j=yol_x;j<=cikis_x;j++)
        {
            gotoxy(j,cikis_y);
            printf("%c",arac_tipi);

            if(j==dx+72)
            {
                arayuz_Otopark_cikis_kapi_acilis();
            }

            Sleep(100);
            gotoxy(j,cikis_y);
            printf(" ");
        }

        arayuz_Otopark_cikis_kapi_kapanis();

        Bilet[i].durum=0;
    }
}

void arayuz_Arac_listesi()
{
    Arac_Bilgi_Cek();
    int limit=1;
    char liste[20];

    do
    {

        temizle();
        arayuz_Temel();
        arayuz_Metin();
        gotoxy(38,17);

        Sleep(400);

        int sayfa;

        for(sayfa=limit*2-1;sayfa<limit*2+1;sayfa++)
        {

            ekran(32,gy-1,115,gy+7,219);
            ekranYaz();
            gotoxy(dx,gy+2);
            printf("Sahip :%s",Kayit[sayfa-1].Musteri_AdSoyad);
            gotoxy(dx,gy+3);
            printf("Plaka :%s",Kayit[sayfa-1].Arac_Plaka);
            gotoxy(dx,gy+4);
            printf("Model :%s",Kayit[sayfa-1].Arac_Model);
            gotoxy(dx,gy+5);
            printf("Renk :%s",Kayit[sayfa-1].Arac_Renk);
            gotoxy(dx,gy+6);
            printf("giris saati :%s",Kayit[sayfa-1].Giris_Saati);

            gy+=11;

        }
        gx=dx,gy=dy;

        sprintf(liste,"%d",limit);

        gotoxy(dx+31,dy+24);
        if(liste==49)
        {
            printf("  Sayfa %s %c",liste,16);
        }

        else if(liste>49)
        {
            printf("%c Sayfa %s %c",17,liste,16);
        }

        gotoxy(dx-32,dy+24);

        scanf("%d",&limit);


    }while(limit>=1&&limit<=100);

    arayuz_Arac();
}

void arayuz_Arac()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    char islem[100];

    int x;

    for(x=dy+3;x<=dy+20;x=x+8)
        ekran(dx-4,x,dx+79,x+6,219);

    gotoxy(dx+21,dy+1);
    printf("Hangi islemi yapmak istersiniz?");
    gotoxy(dx+7,dy+7);
    printf("Yeni Arac Kayit");
    gotoxy(dx+7,dy+15);
    printf("Arac Cikis islemi");
    gotoxy(dx+7,dy+23);
    printf("Arac listesi");

    ekranYaz();

    gotoxy(dx-32,dy+24);
    gets(islem);

    buyuk_kucuk_harf(islem);


    if(strcmp(islem,"yeni arac kayit")==0)
    {
        arayuz_arac_kayit();
    }

    else if(strcmp(islem,"arac cikis islemi")==0)
    {
        arayuz_arac_cikis_islemi();
    }

    else if(strcmp(islem,"arac listesi")==0)
    {
        arayuz_Arac_listesi();
    }

    else if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_Arac();
    }
}

void arayuz_arac_cikis_islemi()
{
    char islem[100];
    char plaka_bul[50];

    temizle();
    arayuz_Temel();
    arayuz_Metin();

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    ekran(dx+16,dy+11,dx+60,dy+11,205);
    ekran(dx+16,dy+13,dx+60,dy+13,205);
    ekranYaz();

    gotoxy(dx+16,dy+12);
    printf("%c",201);
    gotoxy(dx+16,dy+13);
    printf("%c",186);
    gotoxy(dx+16,dy+14);
    printf("%c",200);

    gotoxy(dx+62,dy+12);
    printf("%c",187);
    gotoxy(dx+62,dy+13);
    printf("%c",186);
    gotoxy(dx+62,dy+14);
    printf("%c",188);

    gotoxy(dx+14,dy+9);
    printf("Cikisini yapmak istediginiz aracin plakasini giriniz:");
    gotoxy(dx+34,dy+13);
    printf("Plaka...");

    gotoxy(dx+34,dy+13);

    gets(plaka_bul);

    int f;
    int dogrulama=0;
    for(f=0;f<132;f++)
    {
        if(strlen(plaka_bul)>1)
        {
           if(strncmp(plaka_bul,Kayit[f].Arac_Plaka,strlen(plaka_bul))==0)
           {
                dogrulama=1;
                Bilet[f].durum=3;
                break;
           }
        }
    }

    if(dogrulama==1)
    {
        arayuz_Otopark_arac_cikis();
        FILE *aracbilgileridosya;
        aracbilgileridosya=fopen("aracbilgileri.txt","r");
        int adir=0,usk=0,hangisi;
        int bufferLength = 255;
        char buffer[bufferLength];
        int sayac1=0;
        int sayac2=0;
        while(fgets(buffer, bufferLength, aracbilgileridosya))
        {
            if (sayac1==0)
            {
                strcpy(Yedekteyiz[sayac2].Musteri_AdSoyad,buffer);
            }
            if(sayac1==1)
            {
                strcpy(Yedekteyiz[sayac2].Arac_Plaka,buffer);
            }
            if (sayac1==2)
            {
                strcpy(Yedekteyiz[sayac2].Arac_Model,buffer);
            }
            if (sayac1==3)
            {
                strcpy(Yedekteyiz[sayac2].Arac_Renk,buffer);
            }
            if (sayac1==4)
            {
                strcpy(Yedekteyiz[sayac2].Giris_Saati,buffer);
            }
            if (sayac1==5)
            {
                Yedekteyiz[sayac2].ucret=atoi(buffer);
                sayac1=0;
                sayac2++;
                continue;
            }
            sayac1++;
        }
        for(usk=0;usk<(sayac2);usk++)
        {
            if(strncmp(plaka_bul,Yedekteyiz[usk].Arac_Plaka,strlen(plaka_bul))==0)
             {
                hangisi=usk;
             }
        }

        for(usk=0;usk<(hangisi);usk++)
        {
            strcpy(Silecegiz[usk].Arac_Model,Yedekteyiz[usk].Arac_Model);
            strcpy(Silecegiz[usk].Arac_Plaka,Yedekteyiz[usk].Arac_Plaka);
            strcpy(Silecegiz[usk].Arac_Renk,Yedekteyiz[usk].Arac_Renk);
            strcpy(Silecegiz[usk].Giris_Saati,Yedekteyiz[usk].Giris_Saati);
            strcpy(Silecegiz[usk].Musteri_AdSoyad,Yedekteyiz[usk].Musteri_AdSoyad);
            Silecegiz[usk].ucret=Yedekteyiz[usk].ucret;
        }

        for(usk=(hangisi+1);usk<=(sayac2-1);usk++)
        {
            strcpy(Silecegiz[usk-1].Arac_Model,Yedekteyiz[usk].Arac_Model);
            strcpy(Silecegiz[usk-1].Arac_Plaka,Yedekteyiz[usk].Arac_Plaka);
            strcpy(Silecegiz[usk-1].Arac_Renk,Yedekteyiz[usk].Arac_Renk);
            strcpy(Silecegiz[usk-1].Giris_Saati,Yedekteyiz[usk].Giris_Saati);
            strcpy(Silecegiz[usk-1].Musteri_AdSoyad,Yedekteyiz[usk].Musteri_AdSoyad);
            Silecegiz[usk-1].ucret=Yedekteyiz[usk].ucret;
        }

        fclose(aracbilgileridosya);

        FILE *aracbilgileridosya2;
        aracbilgileridosya2=fopen("aracbilgileri.txt","w");
        int usk2;
        for(usk2=0;usk2<(sayac2-1);usk2++)
        {
            fprintf(aracbilgileridosya2,"%s%s%s%s%s%d\n",Silecegiz[usk2].Musteri_AdSoyad,Silecegiz[usk2].Arac_Plaka,Silecegiz[usk2].Arac_Model,Silecegiz[usk2].Arac_Renk,
            Silecegiz[usk2].Giris_Saati,Silecegiz[usk2].ucret);
        }

        fclose(aracbilgileridosya2);
        FILE *biletbilgileridosya;
        sayac1=0;
        sayac2=0;
        biletbilgileridosya = fopen("biletstruct.txt", "r");
        while(fgets(buffer, bufferLength, biletbilgileridosya))
        {
            if (sayac1==0)
            {
                strcpy(Yedek_Bilet[sayac2].Bilet_Sahibi,buffer);
            }
            if(sayac1==1)
            {
                Yedek_Bilet[sayac2].Bilet_Seri_No=atoi(buffer);
            }
            if (sayac1==2)
            {
                Yedek_Bilet[sayac2].Bilet_No=atoi(buffer);
            }
            if (sayac1==3)
            {
                Yedek_Bilet[sayac2].biletyerx=atoi(buffer);
            }
            if (sayac1==4)
            {
                Yedek_Bilet[sayac2].biletyery=atoi(buffer);
            }
            if(sayac1==5)
            {
                strcpy(Yedek_Bilet[sayac2].Plaka,buffer);
                sayac1=0;
                sayac2++;
                continue;
            }

            sayac1++;
        }
        for(usk=0;usk<(sayac2);usk++)
        {
            if(strcmp(plaka_bul,Yedek_Bilet[usk].Plaka)==0)
            {
                hangisi=usk;
            }
        }

        for(usk=0;usk<(hangisi);usk++)
        {
            strcpy(Silinecek_Bilet[usk].Bilet_Sahibi,Yedek_Bilet[usk].Bilet_Sahibi);
            Silinecek_Bilet[usk].Bilet_Seri_No=Yedek_Bilet[usk].Bilet_Seri_No;
            Silinecek_Bilet[usk].Bilet_No=Yedek_Bilet[usk].Bilet_No;
            Silinecek_Bilet[usk].biletyerx=Yedek_Bilet[usk].biletyerx;
            Silinecek_Bilet[usk].biletyery=Yedek_Bilet[usk].biletyery;
            strcpy(Silinecek_Bilet[usk].Plaka,Yedek_Bilet[usk].Plaka);
        }

        for(usk=(hangisi+1);usk<=(sayac2-1);usk++)
        {
            strcpy(Silinecek_Bilet[usk-1].Bilet_Sahibi,Yedek_Bilet[usk].Bilet_Sahibi);
            Silinecek_Bilet[usk-1].Bilet_Seri_No=Yedek_Bilet[usk].Bilet_Seri_No;
            Silinecek_Bilet[usk-1].Bilet_No=Yedek_Bilet[usk].Bilet_No;
            Silinecek_Bilet[usk-1].biletyerx=Yedek_Bilet[usk].biletyerx;
            Silinecek_Bilet[usk-1].biletyery=Yedek_Bilet[usk].biletyery;
            strcpy(Silinecek_Bilet[usk-1].Plaka,Yedek_Bilet[usk].Plaka);
        }

        fclose(biletbilgileridosya);

        FILE *biletbilgileridosya2;
        biletbilgileridosya2=fopen("biletstruct.txt","w");
        for(usk2=0;usk2<(sayac2-1);usk2++)
        {
            fprintf(biletbilgileridosya2,"%s%d\n%d\n%d\n%d\n%s",Silinecek_Bilet[usk2].Bilet_Sahibi,Silinecek_Bilet[usk2].Bilet_Seri_No,Silinecek_Bilet[usk2].Bilet_No,Silinecek_Bilet[usk2].biletyerx,
            Silinecek_Bilet[usk2].biletyery,Silinecek_Bilet[usk2].Plaka);
        }
        fclose(biletbilgileridosya2);

        arayuz_Arac();
    }

    else
    {
        temizle();
        arayuz_Temel();
        arayuz_Metin();
        int i,j,t;

        ekran(dx+10,dy+3,dx+66,dy+3,220);
        ekran(dx+10,dy+20,dx+66,dy+20,223);
        ekran(dx+10,dy+4,dx+10,dy+19,219);
        ekran(dx+66,dy+4,dx+66,dy+19,219);
        gotoxy(dx+31,dy+8);
        printf("PLAKA BULUNAMADI");
        for(t=0;t<4;t++)
        {
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,219);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,219);
            }
            ekranYaz();

            Sleep(300);
            for(i=0;i<5;i++)
            {
                int j=i+8;
                ekran(j+61,i+13,78-i,i+13,32);
            }

            for(i=0;i<1;i++)
            {
                ekran(73,i+19,74,i+19,32);
            }
            ekranYaz();
            Sleep(600);
        }

        arayuz_Arac();
    }
}

void musteri_Kayit()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    gotoxy(dx+14,dy+5);
    printf("Kaydetmek istediginiz musterinin bilgilerini giriniz:");

    int x;

    for(x=7;x<19;x=x+4)
    {
        ekran(dx+16,dy+x,dx+60,dy+x,205);
        ekran(dx+16,dy+x+2,dx+60,dy+x+2,205);

        gotoxy(dx+16,dy+x+1);
        printf("%c",201);
        gotoxy(dx+16,dy+x+2);
        printf("%c",186);
        gotoxy(dx+16,dy+x+3);
        printf("%c",200);

        gotoxy(dx+62,dy+x+1);
        printf("%c",187);
        gotoxy(dx+62,dy+x+2);
        printf("%c",186);
        gotoxy(dx+62,dy+x+3);
        printf("%c",188);
    }

    gotoxy(dx+35,dy+9);
    printf("Ad...");
    gotoxy(dx+33,dy+13);
    printf("E posta...");
    gotoxy(dx+29,dy+17);
    printf("Telefon numarasi...");


    ekranYaz();

    int sira=0;
    int i;
    for ( i = 0; i < 20; i++)
    {
        if (strlen(Musteri[i].Musteri_AdSoyad)>1)
        {
            sira++;
        }
    }

    gotoxy(dx+20,dy+9);
    gets(Musteri[sira].Musteri_AdSoyad);
    gotoxy(dx+20,dy+13);
    gets(Musteri[sira].Musteri_Eposta);
    gotoxy(dx+20,dy+17);
    gets(Musteri[sira].Musteri_Telefon_no);

    FILE *fptr;
    fptr=(fopen("musteribilgileristruct.txt","a"));
    if(fptr == NULL)
    {
        fptr = fopen("musteribilgileristruct.txt", "a");
    }
    fprintf(fptr,"%s\n%s\n%s\n",Musteri[sira].Musteri_AdSoyad,Musteri[sira].Musteri_Eposta,Musteri[sira].Musteri_Telefon_no);
    fclose(fptr);

    ekranYaz();
    arayuz_Musteri();

}

void arayuz_Musteri()
{
    temizle();
    arayuz_Temel();
    arayuz_Metin();

    char islem[100];

    int x;

    for(x=dy+3;x<=dy+14;x=x+11)
        ekran(dx-4,x,dx+79,x+8,219);

    gotoxy(dx+21,dy+1);
    printf("Hangi islemi yapmak istersiniz?");
    gotoxy(dx+8,dy+8);
    printf("Yeni Musteri Ekle");
    gotoxy(dx+8,dy+19);
    printf("Musteri Listesi");

    ekranYaz();

    gotoxy(dx-32,dy+24);
    gets(islem);

    buyuk_kucuk_harf(islem);


    if(strcmp(islem,"yeni musteri ekle")==0)
    {
        musteri_Kayit();
    }

    else if(strcmp(islem,"musteri listesi")==0)
    {
        arayuz_Musteri_listesi();
    }

    else if(strcmp(islem,"ana menu")==0)
    {
        main();
    }

    else
    {
        arayuz_Musteri();
    }
}

void arayuz_Musteri_listesi()
{
    Musteri_Bilgi_Cek();
    Arac_Bilgi_Cek();

    int limit=1;
    char liste[20];

    do
    {
        temizle();
        arayuz_Temel();
        arayuz_Metin();
        gotoxy(38,17);

        Sleep(400);

        int sayfa;
        int karsilastirma;
        int ucrethesap;
        char plaka[50];
        char butunplakalar[100];
        char str3[100];

        for(sayfa=limit*3-2;sayfa<limit*3+1;sayfa++)
        {

            ekran(32,gy-1,115,gy+6,219);
            ekranYaz();
            gotoxy(dx,gy+2);
            printf("Isim :%s",Musteri[sayfa-1].Musteri_AdSoyad);
            gotoxy(dx,gy+3);
            printf("Numara :%s",Musteri[sayfa-1].Musteri_Telefon_no);
            gotoxy(dx,gy+4);
            karsilastirma=1;
            strcpy(plaka,"");
            strcpy(butunplakalar,"");
            strcpy(str3,"");
            ucrethesap=0;
            int i=0;
            int a=0;
            int q=0,w=0;
            if(strlen(Musteri[sayfa-1].Musteri_AdSoyad)>1)
            {
            for (i = 0; i < 132; i++)
                {
                    karsilastirma=strncmp(Musteri[sayfa-1].Musteri_AdSoyad,Kayit[i].Musteri_AdSoyad,strlen(Musteri[sayfa-1].Musteri_AdSoyad));
                    if(karsilastirma==0)
                    {
                        if(a==0)
                        {
                            strcpy(butunplakalar,Kayit[i].Arac_Plaka);
                            strcpy(str3,Kayit[i].Arac_Plaka);
                        }
                        else
                        {

                            strcpy(plaka,Kayit[i].Arac_Plaka);
                            while (butunplakalar[q] != '\n') {
                            str3[w] = butunplakalar[q];
                            q++;
                            w++; }
                            str3[w] = ',';
                            w++;
                            q = 0;
                            while (plaka[q] != '\n') {
                            str3[w] = plaka[q];
                            q++;
                            w++;  }

                            str3[w] = '\n';
                        }


                        ucrethesap+=(time(NULL)-Kayit[i].ucret)/30*10+5;
                        karsilastirma=1;
                        a++;
                    }
                }
            }

            printf("Plaka :%s",str3);
            gotoxy(dx,gy+5);
            if(strlen(Musteri[sayfa-1].Musteri_AdSoyad)>1)printf("Borc :%d",ucrethesap);
            else printf("Borc :");


            gy+=7;

        }
        gx=dx,gy=dy;


        sprintf(liste,"%d",limit);

        gotoxy(dx+31,dy+24);
        if(liste==49)
        {
            printf("  Sayfa %s %c",liste,16);
        }

        else if(liste>49)
        {
            printf("%c Sayfa %s %c",17,liste,16);
        }

        gotoxy(dx-32,dy+24);

        scanf("%d",&limit);


    }while(limit>=1&&limit<=100);

    arayuz_Musteri();
}

void arayuz_Gps()
{
    int sure,baslangic;

    temizle();
    arayuz_Temel();
    arayuz_Metin();

    ekran(dx-4,dy-2,dx+80,dy-2,220);
    ekran(dx-4,dy+25,dx+80,dy+25,223);
    ekran(dx-4,dy-1,dx-4,dy+24,219);
    ekran(dx+80,dy-1,dx+80,dy+24,219);

    ekran(dx+16,dy+11,dx+60,dy+11,205);
    ekran(dx+16,dy+13,dx+60,dy+13,205);
    ekranYaz();

    gotoxy(dx+16,dy+12);
    printf("%c",201);
    gotoxy(dx+16,dy+13);
    printf("%c",186);
    gotoxy(dx+16,dy+14);
    printf("%c",200);

    gotoxy(dx+62,dy+12);
    printf("%c",187);
    gotoxy(dx+62,dy+13);
    printf("%c",186);
    gotoxy(dx+62,dy+14);
    printf("%c",188);

    gotoxy(dx+21,dy+9);
    printf("Oynu ne kadar sure oynamak istersiniz:");
    gotoxy(dx+34,dy+13);
    printf("Sure...");

    gotoxy(dx+34,dy+13);

    scanf("%d",&sure);
    baslangic=time(NULL);
    sure+=time(NULL);

    temizle();
    arayuz_Temel();
    arayuz_Metin();
    int i,j,kovalamaca=0,yakalama=0,yon;
    int takip_x,takip_y,hareket_x,hareket_y;
    int kacak_x,kacak_y,kacis_x,kacis_y;

    srand(time(NULL));

    ekran(dx-3,dy-2,dx+79,dy-2,220);
    ekran(dx-3,dy+25,dx+79,dy+25,223);
    ekran(dx-3,dy-1,dx-3,dy+24,219);
    ekran(dx+79,dy-1,dx+79,dy+24,219);

    for(j=0;j<2;j++)
    {
        for(i=8;i<74;i=i+18)
        {
            ekran(dx+i+j*6,dy-1,dx+i+j*6,dy+4,219);
            ekran(dx+i+j*6,dy+8,dx+i+j*6,dy+14,219);
            ekran(dx+i+j*6,dy+18,dx+i+j*6,dy+24,219);
            ekran(dx+i+3,dy-1,dx+i+3,dy+4,124);
            ekran(dx+i+3,dy+8,dx+i+3,dy+14,124);
            ekran(dx+i+3,dy+18,dx+i+3,dy+24,124);
        }
    }

    for(j=0;j<2;j++)
    {
        for(i=4;i<20;i=i+10)
        {
            ekran(dx-2,dy+i+j*4,dx+7,dy+i+j*4,220+j*3);
            ekran(dx+15,dy+i+j*4,dx+25,dy+i+j*4,220+j*3);
            ekran(dx+33,dy+i+j*4,dx+43,dy+i+j*4,220+j*3);
            ekran(dx+51,dy+i+j*4,dx+61,dy+i+j*4,220+j*3);
            ekran(dx+69,dy+i+j*4,dx+78,dy+i+j*4,220+j*3);
            ekran(dx-2,dy+i+2,dx+8,dy+i+2,240);
            ekran(dx+14,dy+i+2,dx+26,dy+i+2,240);
            ekran(dx+32,dy+i+2,dx+44,dy+i+2,240);
            ekran(dx+50,dy+i+2,dx+62,dy+i+2,240);
            ekran(dx+68,dy+i+2,dx+78,dy+i+2,240);
        }
    }

    ekranYaz();

    takip_x=dx-1;
    takip_y=dy+8;
    hareket_x=1;
    hareket_y=0;

    kacak_x=dx+47;
    kacak_y=dy+12;
    kacis_x=0;
    kacis_y=1;

    do
    {
        unsigned char tus;

        if(kovalamaca%2==0)
        {
            if(hareket_x==1&&hareket_y==0)
            {
                if(takip_x==dx+11||takip_x==dx+29||takip_x==dx+47||takip_x==dx+65)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }
                    }

                }


                if(takip_x==dx+13||takip_x==dx+31||takip_x==dx+49||takip_x==dx+67)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }

                    }
                }

            }

            if(hareket_x==-1&&hareket_y==0)
            {
                if(takip_x==dx+13||takip_x==dx+31||takip_x==dx+49||takip_x==dx+67)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }
                    }

                }


                if(takip_x==dx+11||takip_x==dx+29||takip_x==dx+47||takip_x==dx+65)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }

                    }
                }

            }

            if(hareket_x==0&&hareket_y==1)
            {
                if(takip_y==dy+6||takip_y==dy+16)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }
                    }

                }


                if(takip_y==dy+8||takip_y==dy+18)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }

                    }
                }

            }

            if(hareket_x==0&&hareket_y==-1)
            {
                if(takip_y==dy+8||takip_y==dy+18)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }
                    }

                }


                if(takip_y==dy+6||takip_y==dy+16)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }

                    }
                }

            }


            if(kacis_x==1&&kacis_y==0)
            {
                if(kacak_x==dx+11||kacak_x==dx+29||kacak_x==dx+47||kacak_x==dx+65)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=1;
                    }

                }


                if(kacak_x==dx+13||kacak_x==dx+31||kacak_x==dx+49||kacak_x==dx+67)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=-1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=1;
                    }
                }
            }

            if(kacis_x==-1&&kacis_y==0)
            {
                if(kacak_x==dx+13||kacak_x==dx+31||kacak_x==dx+49||kacak_x==dx+67)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=-1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=-1;
                    }
                }

                if(kacak_x==dx+11||kacak_x==dx+29||kacak_x==dx+47||kacak_x==dx+65)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=-1;
                    }

                }
            }

            if(kacis_x==0&&kacis_y==1)
            {
                if(kacak_y==dy+6||kacak_y==dy+16)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=-1;
                    }
                }

                if(kacak_y==dy+8||kacak_y==dy+18)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=1;
                    }

                }

            }

            if(kacis_x==0&&kacis_y==-1)
            {
                if(kacak_y==dy+8||kacak_y==dy+18)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=-1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=1;
                    }
                }


                if(kacak_y==dy+6||kacak_y==dy+16)
                {
                    yon=rand()%2;

                    if(yon==1)
                    {
                        kacis_y=-1;
                        kacis_x=0;
                    }

                    if(yon==0)
                    {
                        kacis_y=0;
                        kacis_x=-1;
                    }
                }
            }

            kacak_x=kacak_x+kacis_x;
            kacak_y=kacak_y+kacis_y;

            takip_x=takip_x+hareket_x;
            takip_y=takip_y+hareket_y;

            if(takip_x>dx+79)
            {
                takip_x=dx-1;
            }

            if(takip_x<dx-1)
            {
                takip_x=dx+79;
            }

            if(takip_y>dy+25)
            {
                takip_y=dy;
            }

            if(takip_y<dy)
            {
                takip_y=dy+25;
            }


            if(kacak_x>dx+79)
            {
                kacak_x=dx-1;
            }

            if(kacak_x<dx-1)
            {
                kacak_x=dx+79;
            }

            if(kacak_y>dy+25)
            {
                kacak_y=dy;
            }

            if(kacak_y<dy)
            {
                kacak_y=dy+25;
            }



            gotoxy(takip_x,takip_y);
            printf("%c",arac_tipi);
            gotoxy(kacak_x,kacak_y);
            printf("%c",kacak_tipi);

            Sleep(300);

            gotoxy(takip_x,takip_y);
            printf(" ");
            gotoxy(kacak_x,kacak_y);
            printf(" ");
        }

        else
        {

            if(hareket_x==1&&hareket_y==0)
            {
                if(takip_x==dx+11||takip_x==dx+29||takip_x==dx+47||takip_x==dx+65)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }
                    }

                }


                if(takip_x==dx+13||takip_x==dx+31||takip_x==dx+49||takip_x==dx+67)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }

                    }
                }

            }

            if(hareket_x==-1&&hareket_y==0)
            {
                if(takip_x==dx+13||takip_x==dx+31||takip_x==dx+49||takip_x==dx+67)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }
                    }

                }


                if(takip_x==dx+11||takip_x==dx+29||takip_x==dx+47||takip_x==dx+65)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }

                    }
                }

            }

            if(hareket_x==0&&hareket_y==1)
            {
                if(takip_y==dy+6||takip_y==dy+16)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }
                    }

                }


                if(takip_y==dy+8||takip_y==dy+18)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 80: hareket_y=1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }

                    }
                }

            }

            if(hareket_x==0&&hareket_y==-1)
            {
                if(takip_y==dy+8||takip_y==dy+18)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 77:hareket_y=0; hareket_x=1;
                                break;
                            }
                        }
                    }

                }


                if(takip_y==dy+6||takip_y==dy+16)
                {
                    if(kbhit())
                    {
                        tus=getch();
                        if(tus==224)
                        {
                            tus=getch();
                            switch(tus)
                            {
                                case 72:hareket_y=-1; hareket_x=0;
                                break;
                                case 75: hareket_y=0; hareket_x=-1;
                                break;
                            }
                        }

                    }
                }

            }

            takip_x=takip_x+hareket_x;
            takip_y=takip_y+hareket_y;

            if(takip_x>dx+79)
            {
                takip_x=dx-1;
            }

            if(takip_x<dx-1)
            {
                takip_x=dx+79;
            }

            if(takip_y>dy+25)
            {
                takip_y=dy;
            }

            if(takip_y<dy)
            {
                takip_y=dy+25;
            }




            gotoxy(takip_x,takip_y);
            printf("%c",arac_tipi);
            gotoxy(kacak_x,kacak_y);
            printf("%c",kacak_tipi);

            Sleep(300);

            gotoxy(takip_x,takip_y);
            printf(" ");
            gotoxy(kacak_x,kacak_y);
            printf(" ");
        }

        kovalamaca++;

        if(takip_x==kacak_x&&takip_y==kacak_y)
        {
            yakalama=1;
        }

    }while((time(NULL)!=sure)&&yakalama==0);

    temizle();
    arayuz_Temel();
    arayuz_Metin();

    ekran(dx+10,dy+4,dx+66,dy+4,220);
    ekran(dx+10,dy+21,dx+66,dy+21,223);
    ekran(dx+10,dy+5,dx+10,dy+20,219);
    ekran(dx+66,dy+5,dx+66,dy+20,219);

    if(yakalama==1)
    {
        gotoxy(dx+34,dy+11);
        printf("TEBRIKLER");
        gotoxy(dx+24,dy+12);
        printf("HIRSIZI BASARIYLA YAKALADINIZ");
        ekran(dx+26,dy+14,dx+30,dy+14,219);
        ekran(dx+30,dy+14,dx+30,dy+18,219);
        ekran(dx+26,dy+16,dx+30,dy+16,219);
        ekran(dx+26,dy+18,dx+30,dy+18,219);
        ekran(dx+32,dy+14,dx+36,dy+18,219);
        ekran(dx+38,dy+14,dx+42,dy+18,219);
        ekran(dx+44,dy+14,dx+48,dy+14,219);
        ekran(dx+44,dy+14,dx+44,dy+16,219);
        ekran(dx+44,dy+16,dx+48,dy+16,219);
        ekran(dx+48,dy+16,dx+48,dy+18,219);
        ekran(dx+44,dy+18,dx+48,dy+18,219);
        ekran(dx+46,dy+13,dx+46,dy+19,219);
        gelir+=3000;
    }
    else
    {
        gotoxy(dx+34,dy+11);
        printf("MAALESEF");
        gotoxy(dx+24,dy+12);
        printf("   HIRSIZI YAKALAYAMADINIZ");
    }



    ekranYaz();
    Sleep(2000);
    getch();
}

















#endif // TWOOTOPARK_H_INCLUDED
