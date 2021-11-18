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
    printf("\n\n\n                 <:>  GAMING APPLICATION BY VASHISHTH PATHAK  <:>");
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

  

}
