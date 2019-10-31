#include<reg51.h>
#include<string.h>
#include<stdio.h>
#define lcdport P1

sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;

sbit m1=P2^4;
sbit m2=P2^5;
sbit buzzer=P3^1;

char i,rx_data[50];

char rfid[13],ch=0;

char pass[4];

sbit col1=P0^0;
sbit col2=P0^1;
sbit col3=P0^2;
sbit col4=P0^3;
sbit row1=P0^4;
sbit row2=P0^5;
sbit row3=P0^6;
sbit row4=P0^7;
