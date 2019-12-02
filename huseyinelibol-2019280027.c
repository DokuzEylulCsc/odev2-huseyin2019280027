#include <stdio.h>

int main()
{
int sayi,x,y,z,t;
while(sayi!=-1){
printf("Roma rakamina cevirmek istediginiz sayiyi giriniz: ");
scanf("%d",&sayi);
x =sayi/1000;
y =(sayi%1000)/100;
z =((sayi%1000)%100)/10;
t =((sayi%1000)%100)%10;

if(sayi<=9999){
switch(x){
case 1:printf("M");
break;
case 2:printf("MM");
break;
case 3:printf("MMM");
break;
case 4:printf("MV");
break;
case 5:printf("V");
break;
case 6:printf("VM");
break;
case 7:printf("VMM");
break;
case 8:printf("VMMM");
break;
case 9:printf("MV");
break;
}
switch(y){
case 1:printf("C");
break;
case 2:printf("CC");
break;
case 3:printf("CCC");
break;
case 4:printf("CD");
break;
case 5:printf("D");
break;
case 6:printf("DC");
break;
case 7:printf("DCC");
break;
case 8:printf("DCCC");
break;
case 9:printf("C");
break;
}
switch(z){
case 1:printf("X");
break;
case 2:printf("XX");
break;
case 3:printf("XXX");
break;
case 4:printf("XL");
break;
case 5:printf("L");
break;
case 6:printf("LX");
break;
case 7:printf("LXX");
break;
case 8:printf("LXXX");
break;
case 9:printf("XC");
break;
}
switch(t){
case 1:printf("I\n");
break;
case 2:printf("II\n");
break;
case 3:printf("III\n");
break;
case 4:printf("IV\n");
break;
case 5:printf("V\n");
break;
case 6:printf("VI\n");
break;
case 7:printf("VII\n");
break;
case 8:printf("VIII\n");
break;
case 9:printf("IX\n");
break;
}
}
else{
printf("Sadece 1-3999 arasinda sayi girebilirsiniz\n");
}
}
printf("Devam etmek icin Enter'a basiniz.");
getch();
return 0;
}

/* Kaynaklar: 
https://www.youtube.com/user/yazilimhocasi/playlists
http://www.neleryokki.com/biliyormusunuz/roma_rakam_cevirici.htm
http://www.mmsrn.com/c-dili-ile-disaridan-girilen-bir-sayiyi-roma-rakamlarina-cevirmek/ 
*/
