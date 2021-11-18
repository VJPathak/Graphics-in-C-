#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    //int count=0,up=0;
    int gd = DETECT, gm;
    int x = 150;
    int y = 130;
    int font = 3;
    int direction = 0;
    int font_size = 5;
    int i,j,count=0,up=0;
    char ch;

    clrscr();

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    settextstyle(font, direction, font_size);

    outtextxy(x, y, "   WELCOME...");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n			 ");
    for(i=0;i<=28;i++)
    {
    printf("*");
    }
    printf("\n\n\n                 <:>  GAMEING APPLICATION BY VASHISHTH PATHAK  <:>");
    delay(5000);
    closegraph();

   //gameing instructions
   font_size=2;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   settextstyle(font, direction, font_size);
   outtextxy(x, y, "    GAMEING INSTRUCTIONS:");
   printf("\n\n\n\n\n\n\n\n\n\n                ::---------------------------------------::");

   printf("\n\n\n                   ]:[  PRESS 'W' TO JUMP\n		   ]:[  PRESS 'S' TO LEAN\n		   ]:[  PRESS 'A' FOR LEFTWORDS MOMENT\n		   ]:[  PRESS 'D' FOR RIGHTWORDS MOMENT");

   //getch();
   delay(5000);
   closegraph();

   for(i=12;i>=0;i--)
   {
   //clrscr();
   //if(i<0)
   //{
   textcolor(4);
   cprintf("\n\n\n\n   COUNTDOWN BEGINS : %d",i);
   delay(1000);
   clrscr();
   //}
   //else
   //{
   //break;
   //}
   }
   clrscr();

   textcolor(12);
   cprintf("\n\n\n\n     READY,,,");
   delay(1000);
   cprintf("steady..");
   delay(1000);
   cprintf("U are good to go >>>>>>");
   delay(1000);

   clrscr();

   printf("\n\n\n");

  start:
  clrscr();
  printf("\n\n\n");
 for(i=0;i<=18;i++)
{
  for(j=0;j<=78;j++)
 {

  //logic for ground
  if((i==2))
  {
  textcolor(11);
  cprintf("*");
  }
  else if((i==13))
  {
  textcolor(10);
  cprintf("*");
  }
  else if((i==14))
  {
  textcolor(7);
  cprintf("*");
  }
  //logic for object
  else if((i==12+up&&j==1+count)||(i==12+up&&j==2+count)||(i==12+up&&j==3+count)||(i==12+up&&j==5+count)||(i==12+up&&j==6+count)||(i==12+up&&j==7+count)||(i==11+up&&j==3+count)||(i==11+up&&j==4+count)||(i==11+up&&j==5+count)||  (i==10+up&&j==1+count)||(i==10+up&&j==2+count)||(i==10+up&&j==3+count)||(i==10+up&&j==4+count)||(i==10+up&&j==5+count)||(i==10+up&&j==6+count)||(i==10+up&&j==7+count)||  (i==9+up&&j==3+count)||(i==9+up&&j==4+count)||(i==9+up&&j==5+count))
  {
  textcolor(12);
  cprintf(".");
  }

  else if((i==12&&j==50)||(i==11&&j==50)||(i==10&&j==50))
  {
  textcolor(5);
  cprintf("*");
  }

  else
  {
  printf(" ");
  }

  if(i==18&&j==78)
  {

   ch=getch();
   if(ch=='d')
   {
    count++;
    goto start;
   }
   if(ch=='a')
   {
    count--;
    goto start;
   }
   if(ch=='w')
   {
   //jump upp_hold
   up=-3;
   clrscr();
   printf("\n\n\n");
  for(i=0;i<=18;i++)
{
  for(j=0;j<=78;j++)
 {

  //logic for ground
  if((i==2))
  {
  textcolor(11);
  cprintf("*");
  }
  else if((i==13))
  {
  textcolor(10);
  cprintf("*");
  }
  else if((i==14))
  {
  textcolor(7);
  cprintf("*");
  }

  //logic for object
  else if((i==12+up&&j==1+count)||(i==12+up&&j==2+count)||(i==12+up&&j==3+count)||(i==12+up&&j==5+count)||(i==12+up&&j==6+count)||(i==12+up&&j==7+count)||(i==11+up&&j==3+count)||(i==11+up&&j==4+count)||(i==11+up&&j==5+count)||  (i==10+up&&j==1+count)||(i==10+up&&j==2+count)||(i==10+up&&j==3+count)||(i==10+up&&j==4+count)||(i==10+up&&j==5+count)||(i==10+up&&j==6+count)||(i==10+up&&j==7+count)||  (i==9+up&&j==3+count)||(i==9+up&&j==4+count)||(i==9+up&&j==5+count))
  {
  textcolor(12);
  cprintf(".");
  }

  else if((i==12&&j==50)||(i==11&&j==50)||(i==10&&j==50))
  {
  textcolor(5);
  cprintf("*");
  }


  else
  {
  printf(" ");
  }

 }
  printf("\n");
}

  delay(300);
  clrscr();

 //jump down_release
  up=0;
  goto start;

 }

   if(ch=='s')
   {
    up++;
    goto start;
   }
  }

 }
  printf("\n");

}

}
