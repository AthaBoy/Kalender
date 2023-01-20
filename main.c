#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int fungsi_tahun(int tahun)
{
    int awal_tahun,jumlah_hari;
    jumlah_hari=0;
    awal_tahun=1899;
    while(awal_tahun<tahun)
    {
        if (awal_tahun==1900)
        jumlah_hari=jumlah_hari+365;

        else if((awal_tahun%4==0)||(awal_tahun%100==0)||(awal_tahun%400==0))
        jumlah_hari=jumlah_hari+366;

        else
        jumlah_hari=jumlah_hari+365;
        awal_tahun++;
    }
    return(jumlah_hari);
}

int fungsi_bulan(int tahun, int bulan_angka)
{
    int awal_bulan,jumlah_hari;
    jumlah_hari=0;
    awal_bulan=1;
    while(awal_bulan<bulan_angka)
    {
        if((awal_bulan==1)||(awal_bulan==3)||(awal_bulan==5)||(awal_bulan==7)||(awal_bulan==8)||(awal_bulan==10)||(awal_bulan==12))
        jumlah_hari=jumlah_hari+31;

        else if((awal_bulan==4)||(awal_bulan==6)||(awal_bulan==9)||(awal_bulan==11))
        jumlah_hari=jumlah_hari+30;

        else
        {
            if(tahun%100==0)
            {
                if(tahun%400==0)
                jumlah_hari=jumlah_hari+29;

                else
                jumlah_hari=jumlah_hari+28;
            }
            else if(tahun%4==0)
            jumlah_hari=jumlah_hari+29;

            else
            jumlah_hari=jumlah_hari+28;
        }
        awal_bulan++;
    }
    return(jumlah_hari);
}

int fungsi_hitung_hari(int bulan_angka, int tahun)
{
    int mulai_hari;
    mulai_hari=0;

    if(bulan_angka==1||bulan_angka==3||bulan_angka==5||bulan_angka==7||bulan_angka==8||bulan_angka==10||bulan_angka==12)
    mulai_hari=mulai_hari+31;

    else if(bulan_angka==4||bulan_angka==6||bulan_angka==9||bulan_angka==11)
    mulai_hari=mulai_hari+30;

    else
    {
        if(tahun%100==0)
        {
            if(tahun%400==0)
            mulai_hari=mulai_hari+29;

            else
            mulai_hari=mulai_hari+28;
        }
        else if(tahun%4==0)
        mulai_hari=mulai_hari+29;

        else
        mulai_hari=mulai_hari+28;
    }
    return(mulai_hari);
}

int fungsi_hitung_strip(int jumlah_hari)
{
     int sebelum_tanggal;
     sebelum_tanggal=jumlah_hari%7;
     return(sebelum_tanggal);
}

int fungsi_pilihan_bulan(int bulan_angka,char pilih)
{
    if((pilih == 'N')||(pilih == 'n'))
    {
        bulan_angka=bulan_angka+1;
        if(bulan_angka == 13)
        {
            bulan_angka=bulan_angka-12;
        }
    }
    else
    {
        bulan_angka=bulan_angka-1;
        if(bulan_angka == 0)
        {
            bulan_angka=bulan_angka+12;
        }
    }
    return(bulan_angka);
}

int fungsi_pilihan_tahun(int tahun,int bulan_angka,char pilih)
{
    if((pilih == 'N')||(pilih == 'n'))
    {
        bulan_angka=bulan_angka+1;
        if(bulan_angka == 13)
        {
            bulan_angka=bulan_angka-12;
            tahun=tahun+1;
        }
    }
    else
    {
        bulan_angka=bulan_angka-1;
        if(bulan_angka == 0)
        {
            bulan_angka=bulan_angka+12;
            tahun=tahun-1;
        }
    }
    return(tahun);
}

int fungsi_cek_bulan(int huruf)
{
    int bulan_angka;
    if(strncmp(huruf,"JANUARI",7)==0)
    bulan_angka=1;

    else if(strncmp(huruf,"FEBRUARI",8)==0)
    bulan_angka=2;

    else if(strncmp(huruf,"MARET",5)==0)
    bulan_angka=3;

    else if(strncmp(huruf,"APRIL",5)==0)
    bulan_angka=4;

    else if(strncmp(huruf,"MEI",3)==0)
    bulan_angka=5;

    else if(strncmp(huruf,"JUNI",4)==0)
    bulan_angka=6;

    else if(strncmp(huruf,"JULI",4)==0)
    bulan_angka=7;

    else if(strncmp(huruf,"AGUSTUS",7)==0)
    bulan_angka=8;

    else if(strncmp(huruf,"SEPTEMBER",9)==0)
    bulan_angka=9;

    else if(strncmp(huruf,"OKTOBER",7)==0)
    bulan_angka=10;

    else if(strncmp(huruf,"NOVEMBER",8)==0)
    bulan_angka=11;

    else if(strncmp(huruf,"DESEMBER",8)==0)
    bulan_angka=12;

    else
    {
        printf("\nTerdapat Kesalahan Dalam Penginputan Program, Silahkan Mencoba Kembali\n\n");
        main();
    }


    return(bulan_angka);
}

int fungsi_cetak_bulan(int bulan_angka)
{
    int huruf;

    if (bulan_angka==1) huruf = "JANUARI";

    else if (bulan_angka==2) huruf = "FEBRUARI";

    else if (bulan_angka==3) huruf = "MARET";

    else if (bulan_angka==4) huruf = "APRIL";

    else if (bulan_angka==5) huruf = "MEI";

    else if (bulan_angka==6) huruf = "JUNI";

    else if (bulan_angka==7) huruf = "JULI";

    else if (bulan_angka==8) huruf = "AGUSTUS";

    else if (bulan_angka==9) huruf = "SEPTEMBER";

    else if (bulan_angka==10) huruf = "OKTOBER";

    else if (bulan_angka==11) huruf = "NOVEMBER";

    else if (bulan_angka==12) huruf = "DESEMBER";

    return (huruf);
}

int fungsi_cetak(int huruf,int tahun,int sebelum_tanggal,int mulai_hari,int tanggal,int temp_bulan,int bulan_huruf,int temp_tahun)
{
    int hari;
    char petik='"';
    printf("\n\n%s %d\n",huruf,tahun);
    printf("\nMINGGU\tSENIN\tSELASA\tRABU\tKAMIS\tJUMAT\tSABTU\n");

    hari=0;
    while(hari<sebelum_tanggal)
    {
        printf("-\t");
        hari++;
    }
    hari=1;
    while(hari<=mulai_hari)
    {
        if ((strncmp(temp_bulan, bulan_huruf, 10)==0) && (hari==tanggal) && (temp_tahun==tahun))
        printf("[%d]\t",hari);

        else
        printf("%d\t",hari);

        if(sebelum_tanggal%7==6)
        printf("\n");

        sebelum_tanggal++;
        hari++;
    }
    return 0;
}

int main ()
{
    int tanggal, banyak, tahun, bulan_angka, sebelum_tanggal, jumlah_hari, mulai_hari,temp_tahun;
    char *huruf,bulan_huruf[12],*temp_bulan,pilih;

    printf("\t\t\t  KALENDER YANG SANGAT ABADI ");
    printf("\n\nCONTOH INPUT = DD-MM-YYYY");
    printf("\n\nMasukkan Tanggal Yang Diinginkan : ");
    fflush(stdin);
    scanf("%d-%[^-]-%d",&tanggal,&bulan_huruf,&tahun);

    if((tanggal<0)||(tanggal>31)||(tahun<1900)||(tahun>2100))
    {
        printf("\nTerdapat Kesalahan Dalam Penginputan Program, Silahkan Mencoba Kembali\n\n");
        main();
    }

    huruf=bulan_huruf;
    temp_bulan=bulan_huruf;
    temp_tahun=tahun;

    banyak=0;
    while (huruf[banyak])
    {
        huruf[banyak] = toupper(huruf[banyak]);
        banyak++;
    }

    bulan_angka=fungsi_cek_bulan(huruf);

    jumlah_hari=fungsi_tahun(tahun)+fungsi_bulan(tahun,bulan_angka);

    sebelum_tanggal=fungsi_hitung_strip(jumlah_hari);

    mulai_hari=fungsi_hitung_hari(bulan_angka,tahun);

    fungsi_cetak(huruf,tahun,sebelum_tanggal,mulai_hari,tanggal,temp_bulan,bulan_huruf,temp_tahun);

    return 0;
}
