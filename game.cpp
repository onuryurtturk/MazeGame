﻿#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#define N 22
void wait(double seconds);
void wait(double seconds)
{
clock_t endwait;
endwait = clock () + seconds * CLK_TCK ;
while (clock() < endwait) {}
}
void main()
{
	system("color 1f");
	int bol,sayac=1;
	bas:
	system("CLS");   
	printf("\n================================================================");
	printf("\n\a                  ::<< Labirentten KaCiS >>::");
	printf("\n");
	printf("\n----------------------------------------------------------------");
	printf("\n                   .:. OYUNA BASLAMADAN ONCE .:.");
	printf("\n:::>>    Oyunu 'w'-'a'-'d'-'s' tuslarini kullanarak oynayiniz");
	printf("\n----------------------------------------------------------------");
	printf("\n.:.:.Lutfen Oynamak Istediginiz Bolumun Numarasini Giriniz.:.:.");
	printf("\n");
	printf("\n   Bolum1::>1       Bolum2::>2        Bolum3::>3\n");
	printf("\n----------------------------------------------------------------\n");
	scanf("\n%d",&bol);
	switch(bol)
	{
	    case 1:
		{
			if(sayac==1)
			{ 
				sayac++;
				char deneme[22][19] = {
					"  \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333 ",
					"\333 \333\333\333\333\333 \333   \333   \333 ",
					"\333 \333\333\333\333\333 \333 \333 \333 \333 \333 ",
					"\333     \333 \333 \333 \333 \333 \333 ",
					"\333 \333     \333 \333 \333 \333 \333 ",
					"  \333\333\333\333  \333 \333   \333 \333 ",
					" \333   \333    \333\333\333\333\333 \333 ",
					" \333 \333 \333\333\333\333\333\333   \333 \333 ",
					"   \333        \333 \333 \333 ",
					"\333\333\333\333 \333\333\333\333\333\333 \333 \333 \333 ",
					"     \333      \333 \333   ",
					" \333\333\333\333\333\333\333 \333\333\333\333 \333 \333 ",
					" \333     \333 \333    \333 \333 ",
					" \333 \333\333\333 \333 \333 \333\333\333\333 \333 ",
					"   \333 \333 \333 \333 \333    \333 ",
					"\333\333\333\333 \333   \333 \333 \333\333 \333 ",
					"     \333\333\333\333\333 \333 \333\333 \333 ",
					" \333\333\333       \333  \333 \333 ",
					" \333 \333\333\333\333\333\333\333\333\333  \333   ",
					"             \333\333 \333 ",
					"\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333 "};
				system("CLS");
				printf("\n  ==============================\n");
				printf("  88   88     88  88      8888\n");
				printf("  88    88   88   88        88\n");
				printf("  88     88 88    88        88\n");
				printf("  888888  888     888888  888888\n");
				printf("\n  ==============================");
				printf("\n");
				printf("  Baslamak icin bir tusa basiniz!::");
				getch();
				printf("\n  ::< Lutfen Bekleyiniz >::");
				printf("\n    ::< [Yukleniyor] >::");
				printf("\n");
				printf("     ");
				printf("[");
				srand(time(NULL));
				char a;
				for(int k=1;k<=4;k++)
				{
					printf("////");
					wait(1);
				}
				printf("]");	
				Sleep(1000);
				system("CLS");
				char yon;
				int x=0,y=0,hamsay=0;
				deneme[x][y]= '\1';
				for (int i = 0; i < N; i++)
					printf("%s\n",deneme[i]);
				time_t start,end;
				time_t start1,end1;
				time (&start);
				time (&start1);
				int bayrak = 0;
				double toplamZaman;
				for(;;)
				{
					if (bayrak == 1)
					{
						time (&start1);
					}
					yon = getch();
					if (yon == 'd' && deneme[x][y+1] == ' ')
					{
						system("CLS");
						y++;
						deneme[x][y]= '\1';
						deneme[x][y-1] = ' ';
						hamsay++;
						for (int i = 0; i < N; i++)
						{
							printf("%s\n",deneme[i]);
						}
						printf("\n  Hamle sayisi>::%d",hamsay);
					}
					else if (yon == 'a' && deneme[x][y-1] == ' ')
					{
						system("CLS");
						y--;
						deneme[x][y]= '\1';
						deneme[x][y+1] = ' ';
						hamsay++;
						for (int i = 0; i < N; i++)
						{
							printf("%s\n",deneme[i]);
						}
						printf("\n  Hamle sayisi>::%d",hamsay);
					}
					else if (yon == 's' && deneme[x+1][y] == ' ')
					{
						system("CLS");
						x++;
						deneme[x][y]= '\1';
						deneme[x-1][y] = ' ';
						hamsay++;
						for (int i = 0; i < N; i++)
						{
							printf("%s\n",deneme[i]);
						}
						printf("\n  Hamle sayisi>::%d",hamsay);
					}
					else if (yon == 'w' && deneme[x-1][y] == ' ')
					{
						system("CLS");
						x--;
						deneme[x][y]= '\1';
						deneme[x+1][y] = ' ';
						hamsay++;
						for (int i = 0; i < N; i++)
						{
							printf("%s\n",deneme[i]);
						}
						printf("\n  Hamle sayisi>::%d",hamsay);
					}
					if ((x == 10 && y == 16) || (x==18 && y==16))
						break;
					time (&end1);
					//toplamZaman = toplamZaman + difftime(end1,start1);
					//if (toplamZaman >= 5)
					//{
					//	x=0,y=0;
					//	printf("Sureniz bitti !\n");
					//	getch();
					//	system("CLS");
					//}
				}
				 char lvl2;
				 time (&end);
				 printf ("\n  Labirentten Cikmaniz %.2lfsaniye surdu.\n", difftime (end,start));
				 printf("\n<:: Tebrikler!, Level 1'i tamamladiniz. \n  Level 2 ye gecis yapmak icin bir tusa basiniz::>");
				 lvl2=getch();
				 goto lvl2gec;
			}
			break;			
		}
		case 2:
	    {	
			sayac++;
lvl2gec:
			if(sayac==2)
			{
				system("CLS");
				printf("\n");
				printf("\n   ==============================\n");
				printf("   88    88    88  88      88888\n");
				printf("   88    88    88  88     88   88\n");
				printf("   88    88    88  88        88\n");
				printf("   88     88  88   88       88 \n");
				printf("   888888   88     888888  888888\n");
				printf("\n   ==============================");
				printf("\n");
				printf("   Baslamak icin bir tusa basiniz!::");
				getch();
				printf("\n     ::< Lutfen Bekleyiniz >::");
				printf("\n         ::< [Yukleniyor] >::");
				printf("\n");
				printf("     ");
				printf("[");
				for(int k=1;k<=6;k++)
				{
					printf("////");
					wait(1);
				}
				printf("]");	
				Sleep(1000);
				system("CLS");
				char lab[24][109]={
					" \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333",
					"    \333\333\333             \333\333\333\333\333  ",
					"\333\333\333   \333 \333\333\333 \333\333\333\333\333\333\333 \333     \333",
					"\333   \333 \333 \333 \333 \333    \333\333 \333 \333\333\333 \333",
					"\333 \333\333\333 \333 \333 \333 \333\333\333\333 \333  \333  \333\333\333\333",
					"\333     \333 \333 \333    \333 \333    \333\333  \333",
					"\333 \333\333\333\333\333\333\333 \333\333 \333 \333 \333 \333   \333  \333",
					"        \333 \333\333 \333 \333 \333 \333\333\333 \333\333\333\333",
					"\333\333\333\333\333\333\333 \333    \333 \333 \333 \333 \333    \333",
					"\333\333\333\333\333 \333 \333 \333\333\333\333 \333 \333 \333 \333 \333\333\333\333",
					" \333    \333 \333 \333    \333 \333 \333 \333\333\333\333 \333",
					" \333 \333\333 \333   \333 \333\333\333\333 \333   \333    \333",
					" \333 \333\333   \333 \333    \333 \333   \333 \333\333 \333",
					"     \333\333\333\333 \333\333\333\333 \333   \333\333\333 \333\333 \333",
					"\333\333\333  \333\333\333\333 \333\333\333\333 \333 \333 \333    \333 \333",
					"    \333    \333\333    \333 \333 \333\333\333 \333\333 \333",
					" \333\333\333  \333\333 \333\333 \333\333 \333 \333   \333 \333  \333",
					" \333   \333\333  \333  \333\333\333\333 \333 \333\333\333 \333\333\333\333",
					" \333\333\333\333\333\333 \333\333 \333\333\333\333\333 \333 \333      \333",
					" \333\333\333     \333 \333     \333    \333\333\333 \333",
					"     \333 \333\333\333 \333 \333 \333 \333\333\333\333 \333   \333",
					" \333\333\333\333\333\333\333 \333 \333 \333 \333 \333    \333 \333\333\333",
					"         \333   \333 \333 \333 \333\333\333\333    ",
					"\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"};
				char dir; //direction-yön
				int a=0,b=0;
				lab[a][b]='\1';
				for (int i=0; i<24; i++)
					printf("%s\n",lab[i]);
				time_t start,end;
				time (&start);
				for(;;)
				{
					dir = getch();
					if (dir=='d' && lab[a][b+1]==' ')
					{
						system("CLS");
						b++;
						lab[a][b]='\1';
						lab[a][b-1]=' ';
						for (int i=0; i<24; i++)
						{
							printf("%s\n",lab[i]);
						}
					}
					else if (dir == 'a' && lab[a][b-1] == ' ')
					{
						system("CLS");
						b--;
						lab[a][b]='\1';
						lab[a][b+1]=' ';
						for (int i=0; i<24; i++)
						{
							printf("%s\n",lab[i]);
						}
					}
					else if (dir=='s' && lab[a+1][b]==' ')
					{
						system("CLS");
						a++;
						lab[a][b]='\1';
						lab[a-1][b]=' ';
						for (int i=0; i<24; i++)
						{
							printf("%s\n",lab[i]);
						}
					}
					else if(dir=='w' && lab[a-1][b]==' ')
					{
						system("CLS");
						a--;
						lab[a][b]='\1';
						lab[a+1][b]=' ';
						for(int i=0;i<24;i++)
						{
							printf("%s\n",lab[i]);
						}
					}

					if ((a == 1 && b == 26) || (a == 22 && b == 26))
					{
						break;
					}
				}
				sayac++;
				time (&end);
				printf ("\n  Labirentten Cikmaniz %.2lfsaniye surdu.\n", difftime (end,start));
				printf("\n  Tebrikler!, Level 2 tamamlandi.Level 3 e gecmek icin bir tusa basiniz.:.");
				getch();
				goto lvl3gec;
			}
			else
			{   char cevap;
				system("CLS");
				cevap=getch();
				printf("\n  \262 <::UYARI!::> \262");
				printf("\n  Bir Onceki Bolumu Oynamadiginiz icin Bu Bolumu Oynayamiyorsunuz");
				printf("\n  Bolum Secimine Gitmek Ister misiniz? <e/h> ");
				if(cevap=='e')
				{	
					printf("\n  Bolum Secimine Yonlendiriliyorsunuz\n  > Lutfen Bekleyiniz.:.::");			
					wait(2);
				    goto bas;
				}
				else
				{    
					   printf("\n  Hoscakalin:.:.:>\1");
							system("PAUSE");
				}								
			}
			break;
		}
		case 3:
		{
lvl3gec:
			if(sayac==3)
			{
				system("CLS");
				printf("\n  =================================\n");
				printf("   88   88       88  88      88888\n");
				printf("   88    88     88   88         88\n");
				printf("   88     88   88    88       8888\n");
				printf("   88      88 88     88         88\n");
				printf("   888888   888      888888  88888\n");
				printf("\n  =================================");
				printf("\n");
				printf("   Baslamak icin bir tusa basiniz!::");
				getch();
				printf("\n     ::< Lutfen Bekleyiniz >::");
				printf("\n         ::< [Yukleniyor] >::");
				printf("\n");
				printf("     ");
				printf("[");
				for(int f=1;f<=6;f++)
				{
					printf("====");
					wait(2);
				}
				printf("]");	
				Sleep(1000);
				system("CLS");
				char lab2[25][70]={
				"     \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333",
				"\333\333\333\333 \333 \333\333 \333\333 \333 \333\333 \333\333    \333\333   \333    \333\333        \333 \333      \333\333\333 \333\333         ",
				"\333  \333 \333               \333\333    \333 \333 \333\333 \333\333 \333\333 \333\333\333 \333\333\333 \333 \333\333 \333\333\333 \333\333 \333\333 \333\333 \333\333",
				"\333\333   \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333 \333\333 \333\333 \333 \333 \333\333 \333\333 \333\333 \333 \333     \333 \333\333     \333\333 \333\333 \333\333 \333\333",
				"\333  \333\333\333\333          \333\333\333    \333\333 \333 \333 \333\333 \333\333 \333\333 \333 \333 \333\333 \333\333 \333 \333\333\333\333 \333\333 \333\333 \333\333 \333\333",
				"\333     \333 \333\333\333\333\333\333\333\333 \333\333\333 \333\333\333\333\333 \333 \333 \333\333 \333\333 \333\333 \333 \333 \333\333           \333\333 \333\333    \333\333",
				"\333\333\333\333\333        \333\333\333     \333   \333 \333 \333 \333\333 \333\333 \333 \333 \333\333 \333\333 \333\333\333  \333\333\333\333\333\333\333 \333 \333\333\333 \333\333",
				"   \333\333 \333\333\333\333\333\333 \333\333\333 \333\333 \333\333 \333\333\333 \333 \333 \333\333 \333\333 \333\333\333    \333\333 \333\333    \333\333     \333 \333\333\333 \333\333",
				" \333 \333       \333 \333\333\333 \333\333        \333 \333 \333\333 \333\333 \333\333  \333\333 \333\333    \333\333 \333\333 \333 \333       \333\333",
				" \333 \333  \333 \333\333 \333  \333\333\333\333\333\333\333 \333\333\333\333\333\333 \333 \333\333 \333\333 \333\333 \333\333\333  \333\333\333\333\333\333\333 \333\333 \333 \333 \333\333\333\333\333\333\333\333",
				" \333 \333\333 \333 \333\333 \333\333       \333 \333\333 \333\333  \333 \333\333 \333\333 \333\333 \333      \333\333\333\333\333    \333\333\333 \333\333\333  \333\333\333",
				" \333    \333 \333\333 \333\333\333\333\333\333\333\333 \333 \333\333     \333  \333    \333\333 \333\333 \333\333\333       \333 \333\333 \333 \333    \333\333\333",
				"  \333\333\333\333\333\333\333\333 \333     \333\333 \333 \333\333 \333  \333\333\333         \333\333    \333\333 \333\333\333  \333 \333 \333 \333 \333\333 \333\333\333",
				"\333 \333\333 \333\333\333   \333 \333\333  \333\333 \333 \333\333\333\333\333   \333 \333\333\333  \333\333 \333\333 \333\333\333\333  \333\333\333\333   \333 \333 \333 \333\333    ",
				"\333      \333 \333\333\333 \333\333\333    \333       \333 \333 \333\333      \333\333 \333\333      \333 \333  \333 \333 \333 \333\333 \333\333\333",
				"\333\333\333\333 \333\333\333 \333\333  \333\333\333\333\333\333\333\333\333\333\333\333\333\333 \333 \333 \333\333 \333\333\333\333\333\333\333 \333\333 \333\333\333\333 \333 \333 \333\333 \333      \333\333\333",
				"\333    \333\333\333 \333\333               \333 \333 \333 \333\333      \333\333 \333\333 \333\333 \333\333\333 \333 \333\333 \333\333\333 \333\333 \333\333\333",
				"\333 \333\333\333\333\333\333 \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333 \333 \333 \333 \333\333\333\333\333\333\333 \333\333 \333\333    \333\333\333\333\333     \333\333 \333\333    ",
				"\333 \333\333       \333\333\333\333\333      \333\333\333 \333 \333       \333\333\333 \333\333 \333\333 \333\333    \333\333\333\333\333 \333\333\333 \333\333 \333\333\333",
				"\333    \333\333\333\333\333       \333\333\333\333       \333 \333 \333 \333 \333\333\333       \333\333\333\333\333    \333\333 \333\333\333    \333\333\333",
				"\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"};
			char dr;
			system("CLS");
			int d=0,e=0;
			lab2[d][e]='\1';
			for (int i=0; i<21; i++)
				printf("%s\n",lab2[i]);
			time_t start,end;
			time (&start);
			for(;;)
			{
				dr = getch();
				if (dr=='d' && lab2[d][e+1]==' ')
				{
					system("CLS");
					e++;
					lab2[d][e]='\1';
					lab2[d][e-1]=' ';
					for (int i=0; i<21; i++)
					{
						printf("%s\n",lab2[i]);
					}
				}
				else if (dr == 'a' && lab2[d][e-1] == ' ')
				{
					system("CLS");
					e--;
					lab2[d][e]='\1';
					lab2[d][e+1]=' ';
					for (int i=0; i<21; i++)
					{
						printf("%s\n",lab2[i]);
					}
				}
				else if (dr=='s' && lab2[d+1][e]==' ')
				{
					system("CLS");
					d++;
					lab2[d][e]='\1';
					lab2[d-1][e]=' ';
					for (int i=0; i<21; i++)
					{
						printf("%s\n",lab2[i]);
					}
				}
				else if(dr=='w' && lab2[d-1][e]==' ')
				{

					system("CLS");
					d--;
					lab2[d][e]='\1';
					lab2[d+1][e]=' ';
					for(int i=0;i<21;i++)
					{
						printf("%s\n",lab2[i]);

					}
				}
				if ((d == 1 && e == 67) || (d == 13 && e == 67) || (d==17 && e==67))
				{
					break;
				}
			}//for düngüsü sonsuz
				char c;
				time (&end);
				printf ("\n  Labirentten Cikmaniz %.2lfsaniye surdu.\n", difftime (end,start));
				printf("\n  Tebrikler!, Level 3 tamamlandi.Tekrar Oynamak ister misiniz? <e/h> ");
				c=getch();
					if(c=='e')
						{
							system("CLS");
							goto bas;
						}
					if(c=='h')
						{
							printf("\n  Hoscakalin:.:.:>\1");
							system("PAUSE");
						}	
			}//if yapısı
			else
			{   char cevap2;
				system("CLS");
				printf("\n  \262 <::UYARI!::> \262");
				printf("\n  Bir Onceki Bolumu Oynamadiginiz Icin Bu Bolumu Oynayamiyorsunuz");
				printf("\n  Bolum Secimine Gitmek Ister misiniz? <e/h> ");
				cevap2=getchar();
				if(cevap2=='e')
				{	
					printf("\n  Bolum Secimine Yonlendiriliyorsunuz\n Lutfen Bekleyiniz.:.::");			
					wait(2);
				    goto bas;
				}
				else
				{    
					   printf("\n  Hoscakalin:.:.:>\1");
				}
			}
			break;
		}//swtich-case
	}//switch dış
}