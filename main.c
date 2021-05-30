#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include "Twootopark.h"
#define dx 36
#define dy 3

int main()
{
    system ("color f1");
    temizle();
    Arac_Bilgi_Cek();
    Bilet_Bilgi_Cek();
    Musteri_Bilgi_Cek();
    Gorevli_Bilgi_Cek();
    int i;

    if(durum_sifirlama==0)
    {
        for(i=0;i<132;i++)
        {
            Bilet[i].durum=0;
        }
        durum_sifirlama=1;
    }

    do
    {
        if(giris==1)
        {
            arayuz_Ana_Menu_Secim_calisan();
        }

        else if(giris==2)
        {
            arayuz_Ana_Menu_Secim_patron();
        }

        else if(giris==0)
        {
            arayuz_Giris_Penceresi();
            arayuz_Giris_Dogrulama();
        }

    }while(hatali_giris<4);

    getch();
}
