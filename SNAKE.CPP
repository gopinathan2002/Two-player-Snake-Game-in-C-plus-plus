#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void main()
{
 clrscr();
 char pr1,a,b,score[25],score1[25],w,e;
  int midx[5],midx1[5],i,c=1,k=1,z1=1,z2=1,scor=0,scor1=0,midy[5],midy1[5],p=550,p1=500,q=330,q1=350,f=0,f1=0,sp=100;
  for(i=0;k;i++)
  {
  cout<<"\n\n\n\t\tWELCOME TO SINGLE & MULTIPLAYER SNAKE GAME";
  cout<<"\n\n\t\t\t\tCONTROLS";
  cout<<"\n\n\t\t\tPLAYER A\t\PLAYER B";
  cout<<"\n\n\t\t\tUP:8\t\tUP:U";
  cout<<"\n\n\t\t\tDOWN:2\t\tDOWN:J";
  cout<<"\n\n\t\t\tRIGHT:6\t\tRIGHT:K";
  cout<<"\n\n\t\t\tLEFT:4\t\tLEFT:H";
  cout<<"\n\n\t\t\tFOOD A:fA\tFOOD B:fB";
  cout<<"\n\n\t\t PRESS 'A' KEY TO START SINGLE PLAYER!";
  cout<<"\n\n\t\t  PRESS 'S' KEY TO START MULTIPLAYER!";
  cout<<"\n\n\t\t  \t  PRESS 'E' TO EXIT";

  delay(400);
  if(kbhit())
 {
  k=0;}
  clrscr();

  }


//initialize graphics
  int gdriver=DETECT,gmode,errorcode;
  initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
  //result if initialization
  errorcode=graphresult();
  if(errorcode!= grOk)//an error
  {
   printf("graphics error:%s",grapherrormsg(errorcode));
   printf("press any key to halt");
   getch();
   exit(1);
   }
midx[0] = (getmaxx() /8)-20;
midy[0] = (getmaxy() /4)+40;

midy[1]=midy[0];
midy[2]=midy[0];
midy[3]=midy[0];
midy[4]=midy[0];
midx[1]=midx[0]-10;
midx[2]=midx[0]-20;
midx[3]=midx[0]-30;
midx[4]=midx[0]-40;
//player B
midx1[0] = (getmaxx() /8)-20;
midy1[0] = (getmaxy() /4)+110;
midy1[1]=midy1[0];
midy1[2]=midy1[0];
midy1[3]=midy1[0];
midy1[4]=midy1[0];
midx1[1]=midx1[0]-10;
midx1[2]=midx1[0]-20;
midx1[3]=midx1[0]-30;
midx1[4]=midx1[0]-40;


char pr;
clrscr();
clearviewport();

/* moving snake*/

 for(i=1;c;i++)
 {
  if(z1==1)
  { //player1 snake
 setcolor(GREEN);
 circle(midx[0],midy[0],7);
 circle(midx[0],midy[0],5);
 circle(midx[0],midy[0],3);
 circle(midx[0],midy[0],1);


 outtextxy(midx[0]+8,midy[0]-5,"A");

 setcolor(MAGENTA);
 circle(midx[1],midy[1],5);
 circle(midx[2],midy[2],4);
 circle(midx[3],midy[3],4);
 circle(midx[4],midy[4],3);}
  //player2
 if(z2==1)
 {
 setcolor(RED);
 circle(midx1[0],midy1[0],7);
  circle(midx1[0],midy1[0],5);
  circle(midx1[0],midy1[0],3);
  circle(midx1[0],midy1[0],1);

 outtextxy(midx1[0]+8,midy1[0]-5,"B");
 setcolor(CYAN);
 circle(midx1[1],midy1[1],5);
 circle(midx1[2],midy1[2],4);
 circle(midx1[3],midy1[3],4);
 circle(midx1[4],midy1[4],3);}

 delay(80);
 clearviewport();
     bar(0,0,630,10);
      bar(10,10,0,630);
      bar(0,550,630,470);
      bar(630,0,650,590);


if(kbhit())
 {

  pr=a;
  pr1=b;

  e=getche();
  if(e=='e')
  {c=0;
  break;
  }

  if(e=='2'||e=='4'||e=='6'||e=='8'||e=='s')
  a=e;
  if(e=='u'||e=='h'||e=='k'||e=='j'||e=='s')
  b=e;

 //player A
   if(a=='s')
     {
      midx[0]+=10;
  midx[1]=midx[0]-10;
  midx[2]=midx[0]-20;
  midx[3]=midx[0]-30;
  midx[4]=midx[0]-40;
  }
else if(a=='2')
  {
  if(pr=='4')
   {
    midy[0]+=9;
    if(midx[1]==midx[0])
    midy[1]+=9;
    else
    midx[1]-=9;
   if(midx[2]==midx[1])
    midy[2]+=9;
    else
    midx[2]-=9;
   if(midx[3]==midx[2])
      midy[3]+=9;
      else
      midx[3]-=9;
   if(midx[4]==midx[3])
    midy[4]+=9;
    else
    midx[4]-=9;

    }
    else
    {
   midy[0]+=10;
    if(midx[1]==midx[0])
    midy[1]=midy[0]-9;
    else
    midx[1]=midx[0];
   if(midx[2]==midx[1])
    midy[2]=midy[1]-9;
    else
    midx[2]=midx[1]-9;
   if(midx[3]==midx[2])
      midy[3]=midy[2]-9;
      else
      midx[3]=midx[2]-9;
   if(midx[4]==midx[3])
    midy[4]=midy[3]-9;
    else
    midx[4]=midx[3]-9;
    c=1;
    }
    }
   else if(a=='8')
   {
  if(pr=='4')
    {
     midy[0]-=9;
    if(midx[1]==midx[0])
    midy[1]-=9;
    else
    midx[1]=midx[0];
  if(midx[2]==midx[1])
    midy[2]-=9;
    else
    midx[2]-=9;

  if(midx[3]==midx[2])
      midy[3]-=9;
      else
      midx[3]-=9;
   if(midx[4]==midx[3])
    midy[4]-=9;
    else
    midx[4]-=9;
     }
     else
     {
    midy[0]-=9;
    if(midx[1]==midx[0])
    midy[1]-=9;
    else
    midx[1]=midx[0];
  if(midx[2]==midx[1])
    midy[2]-=9;
    else
    midx[2]+=9;

  if(midx[3]==midx[2])
      midy[3]-=9;
      else
      midx[3]+=9;
   if(midx[4]==midx[3])
    midy[4]-=9;
    else
    midx[4]+=9;

     c=1;
    }
    }
      else if(a=='6')
     {
      if(pr=='8')
     {
      midx[0]+=9;
      if(midy[1]==midy[0])
       midx[1]=midx[0]-9;
       else
       midy[1]=midy[0];
      if(midy[2]==midy[1])
       midx[2]=midx[1]-9;
       else
       midy[2]-=9;
       if(midy[3]==midy[2])
       midx[3]=midx[2]-9;
       else
       midy[3]-=9;
       if(midy[4]==midy[3])
       midx[4]=midx[3]-9;
       else
       midy[4]-=9;
     }
     else
     {
      midx[0]+=9;
      if(midy[1]==midy[0])
       midx[1]+=9;
       else
       midy[1]=midy[0];
      if(midy[2]==midy[1])
       midx[2]+=9;
       else
       midy[2]+=9;
       if(midy[3]==midy[2])
       midx[3]+=9;
       else
       midy[3]+=9;
       if(midy[4]==midy[3])
       midx[4]+=9;
       else
       midy[4]+=9;
    }
    }
     else if(a=='4')
     {
      if(pr=='8')
      {
       midx[0]-=9;
      if(midy[1]==midy[0])
       midx[1]=midx[0]+9;
       else
       midy[1]-=9;
      if(midy[2]==midy[1])
       midx[2]=midx[1]+9;
       else
       midy[2]-=9;
       if(midy[3]==midy[2])
       midx[3]=midx[2]+9;
       else
       midy[3]-=9;
       if(midy[4]==midy[3])
       midx[4]=midx[3]+9;
       else
       midy[4]-=9;
      }
      else
      {
      midx[0]-=9;
      if(midy[1]==midy[0])
       midx[1]=midx[0]+9;
       else
       midy[1]+=9;
      if(midy[2]==midy[1])
       midx[2]=midx[1]+9;
       else
       midy[2]+=9;
       if(midy[3]==midy[2])
       midx[3]=midx[2]+9;
       else
       midy[3]+=9;
       if(midy[4]==midy[3])
       midx[4]=midx[3]+9;
       else
       midy[4]+=9;
    }
    }
    //player B
      if(b=='s')
     {
  midx1[0]+=10;
  midx1[1]=midx1[0]-10;
  midx1[2]=midx1[0]-20;
  midx1[3]=midx1[0]-30;
  midx1[4]=midx1[0]-40;
  }
  else if(b=='j')
  {
  if(pr1=='h')
   {
    midy1[0]+=10;
    if(midx1[1]==midx1[0])
    midy1[1]+=10;
    else
    midx1[1]=midx1[0];
   if(midx1[2]==midx1[1])
    midy1[2]+=10;
    else
    midx1[2]-=10;
   if(midx1[3]==midx1[2])
      midy1[3]+=10;
      else
      midx1[3]-=10;
   if(midx1[4]==midx1[3])
    midy1[4]+=10;
    else
    midx1[4]-=10;

    }
    else
    {
   midy1[0]+=10;
    if(midx1[1]==midx1[0])
    midy1[1]=midy1[0]-10;
    else
    midx1[1]=midx1[0];
   if(midx1[2]==midx1[1])
    midy1[2]=midy1[1]-10;
    else
    midx1[2]+=10;
   if(midx1[3]==midx1[2])
      midy1[3]=midy1[2]-10;
      else
      midx1[3]+=10;
   if(midx1[4]==midx1[3])
    midy1[4]=midy1[3]-10;
    else
    midx1[4]+=10;
    c=1;
    }
    }
   else if(b=='u')
   {
  if(pr1=='h')
    {
     midy1[0]-=10;
    if(midx1[1]==midx1[0])
    midy1[1]-=10;
    else
    midx1[1]=midx1[0];
  if(midx1[2]==midx1[1])
    midy1[2]-=10;
    else
    midx1[2]-=10;

  if(midx1[3]==midx1[2])
      midy1[3]-=10;
      else
      midx1[3]-=10;
   if(midx1[4]==midx1[3])
    midy1[4]-=10;
    else
    midx1[4]-=10;
     }
     else
     {
    midy1[0]-=10;
    if(midx1[1]==midx1[0])
    midy1[1]-=10;
    else
    midx1[1]=midx1[0];
  if(midx1[2]==midx1[1])
    midy1[2]-=10;
    else
    midx1[2]+=10;

  if(midx1[3]==midx1[2])
      midy1[3]-=10;
      else
      midx1[3]+=10;
   if(midx1[4]==midx1[3])
    midy1[4]-=10;
    else
    midx1[4]+=10;

     c=1;
    }
    }
      else if(b=='k')
     {
      if(pr1=='u')
     {
      midx1[0]+=10;
      if(midy1[1]==midy1[0])
       midx1[1]=midx1[0]-10;
       else
       midy1[1]=midy1[0];
      if(midy1[2]==midy1[1])
       midx1[2]=midx1[1]-10;
       else
       midy1[2]-=10;
       if(midy1[3]==midy1[2])
       midx1[3]=midx1[2]-10;
       else
       midy1[3]-=10;
       if(midy1[4]==midy1[3])
       midx1[4]=midx1[3]-10;
       else
       midy1[4]-=10;
     }
     else
     {
      midx1[0]+=10;
      if(midy1[1]==midy1[0])
       midx1[1]+=10;
       else
       midy1[1]=midy1[0];
      if(midy1[2]==midy1[1])
       midx1[2]+=10;
       else
       midy1[2]+=10;
       if(midy1[3]==midy1[2])
       midx1[3]+=10;
       else
       midy1[3]+=10;
       if(midy1[4]==midy1[3])
       midx1[4]+=10;
       else
       midy1[4]+=10;
    }
    }
     else if(b=='h')
     {
      if(pr1=='u')
      {
       midx1[0]-=10;
      if(midy1[1]==midy1[0])
       midx1[1]=midx1[0]+10;
       else
       midy1[1]-=10;
      if(midy1[2]==midy1[1])
       midx1[2]=midx1[1]+10;
       else
       midy1[2]-=10;
       if(midy1[3]==midy1[2])
       midx1[3]=midx1[2]+10;
       else
       midy1[3]-=10;
       if(midy1[4]==midy1[3])
       midx1[4]=midx1[3]+10;
       else
       midy1[4]-=10;
      }
      else
      {
      midx1[0]-=10;
      if(midy1[1]==midy1[0])
       midx1[1]=midx1[0]+10;
       else
       midy1[1]+=10;
      if(midy1[2]==midy1[1])
       midx1[2]=midx1[1]+10;
       else
       midy1[2]+=10;
       if(midy1[3]==midy1[2])
       midx1[3]=midx1[2]+10;
       else
       midy1[3]+=10;
       if(midy1[4]==midy1[3])
       midx1[4]=midx1[3]+10;
       else
       midy1[4]+=10;
    }
    }

    }
    else //if kbhit
    {

   if(a=='s')
     {
   midx[0]+=9;
  midx[1]=midx[0]-10;
  midx[2]=midx[0]-20;
  midx[3]=midx[0]-30;
  midx[4]=midx[0]-40;
  }
  else if(a=='2')
  {
  if(pr=='4')
   {
    midy[0]+=9;
    if(midx[1]==midx[0])
    midy[1]+=9;
    else
    midx[1]-=9;
   if(midx[2]==midx[1])
    midy[2]+=9;
    else
    midx[2]-=9;
   if(midx[3]==midx[2])
      midy[3]+=9;
      else
      midx[3]-=9;
   if(midx[4]==midx[3])
    midy[4]+=9;
    else
    midx[4]-=9;

    }
    else
    {
    midy[0]+=9;
    if(midx[1]==midx[0])
    midy[1]=midy[0]-9;
    else
    midx[1]=midx[0];
   if(midx[2]==midx[1])
    midy[2]=midy[1]-9;
    else
    midx[2]+=9;
   if(midx[3]==midx[2])
      midy[3]=midy[2]-9;
      else
      midx[3]+=9;
   if(midx[4]==midx[3])
    midy[4]=midy[3]-9;
    else
    midx[4]+=9;
    c=1;
    }
    }
   else if(a=='8')
   {
  if(pr=='4')
    {
     midy[0]-=9;
    if(midx[1]==midx[0])
    midy[1]-=9;
    else
    midx[1]=midx[0];
  if(midx[2]==midx[1])
    midy[2]-=9;
    else
    midx[2]-=9;

  if(midx[3]==midx[2])
      midy[3]-=9;
      else
      midx[3]-=9;
   if(midx[4]==midx[3])
    midy[4]-=9;
    else
    midx[4]-=9;
     }
     else
     {
    midy[0]-=9;
    if(midx[1]==midx[0])
    midy[1]-=9;
    else
    midx[1]=midx[0];
  if(midx[2]==midx[1])
    midy[2]-=9;
    else
    midx[2]+=9;

  if(midx[3]==midx[2])
      midy[3]-=9;
      else
      midx[3]+=9;
   if(midx[4]==midx[3])
    midy[4]-=9;
    else
    midx[4]+=9;

     c=1;
    }
    }
      else if(a=='6')
     {
      if(pr=='8')
     {
      midx[0]+=9;
      if(midy[1]==midy[0])
       midx[1]=midx[0]-9;
       else
       midy[1]=midy[0];
      if(midy[2]==midy[1])
       midx[2]=midx[1]-9;
       else
       midy[2]-=9;
       if(midy[3]==midy[2])
       midx[3]=midx[2]-9;
       else
       midy[3]-=9;
       if(midy[4]==midy[3])
       midx[4]=midx[3]-9;
       else
       midy[4]-=9;
     }
     else
     {
      midx[0]+=9;
      if(midy[1]==midy[0])
       midx[1]+=9;
       else
       midy[1]=midy[0];
      if(midy[2]==midy[1])
       midx[2]+=9;
       else
       midy[2]+=9;
       if(midy[3]==midy[2])
       midx[3]+=9;
       else
       midy[3]+=9;
       if(midy[4]==midy[3])
       midx[4]+=9;
       else
       midy[4]+=9;
    }
    }
     else if(a=='4')
     {
      if(pr=='8')
      {
       midx[0]-=9;
      if(midy[1]==midy[0])
       midx[1]=midx[0]+9;
       else
       midy[1]-=9;
      if(midy[2]==midy[1])
       midx[2]=midx[1]+9;
       else
       midy[2]-=9;
       if(midy[3]==midy[2])
       midx[3]=midx[2]+9;
       else
       midy[3]-=9;
       if(midy[4]==midy[3])
       midx[4]=midx[3]+9;
       else
       midy[4]-=9;
      }
      else
      {
      midx[0]-=9;
      if(midy[1]==midy[0])
       midx[1]=midx[0]+9;
       else
       midy[1]+=9;
      if(midy[2]==midy[1])
       midx[2]=midx[1]+9;
       else
       midy[2]+=9;
       if(midy[3]==midy[2])
       midx[3]=midx[2]+9;
       else
       midy[3]+=9;
       if(midy[4]==midy[3])
       midx[4]=midx[3]+9;
       else
       midy[4]+=9;
    }
    }

  //player B
   if(b=='s')
     {
  midx1[0]+=10;
  midx1[1]=midx1[0]-10;
  midx1[2]=midx1[0]-20;
  midx1[3]=midx1[0]-30;
  midx1[4]=midx1[0]-40;
  }
  else if(b=='j')
  {
  if(pr1=='h')
   {
    midy1[0]+=10;
    if(midx1[1]==midx1[0])
    midy1[1]+=10;
    else
    midx1[1]=midx1[0];
   if(midx1[2]==midx1[1])
    midy1[2]+=10;
    else
    midx1[2]-=10;
   if(midx1[3]==midx1[2])
      midy1[3]+=10;
      else
      midx1[3]-=10;
   if(midx1[4]==midx1[3])
    midy1[4]+=10;
    else
    midx1[4]-=10;

    }
    else
    {
   midy1[0]+=10;
    if(midx1[1]==midx1[0])
    midy1[1]=midy1[0]-10;
    else
    midx1[1]=midx1[0];
   if(midx1[2]==midx1[1])
    midy1[2]=midy1[1]-10;
    else
    midx1[2]+=10;
   if(midx1[3]==midx1[2])
      midy1[3]=midy1[2]-10;
      else
      midx1[3]+=10;
   if(midx1[4]==midx1[3])
    midy1[4]=midy1[3]-10;
    else
    midx1[4]+=10;
    c=1;
    }
    }
   else if(b=='u')
   {
  if(pr1=='h')
    {
     midy1[0]-=10;
    if(midx1[1]==midx1[0])
    midy1[1]-=10;
    else
    midx1[1]=midx1[0];
  if(midx1[2]==midx1[1])
    midy1[2]-=10;
    else
    midx1[2]-=10;

  if(midx1[3]==midx1[2])
      midy1[3]-=10;
      else
      midx1[3]-=10;
   if(midx1[4]==midx1[3])
    midy1[4]-=10;
    else
    midx1[4]-=10;
     }
     else
     {
    midy1[0]-=10;
    if(midx1[1]==midx1[0])
    midy1[1]-=10;
    else
    midx1[1]=midx1[0];
  if(midx1[2]==midx1[1])
    midy1[2]-=10;
    else
    midx1[2]+=10;

  if(midx1[3]==midx1[2])
      midy1[3]-=10;
      else
      midx1[3]+=10;
   if(midx1[4]==midx1[3])
    midy1[4]-=10;
    else
    midx1[4]+=10;

     c=1;
    }
    }
      else if(b=='k')
     {
      if(pr1=='u')
     {
      midx1[0]+=10;
      if(midy1[1]==midy1[0])
       midx1[1]=midx1[0]-10;
       else
       midy1[1]=midy1[0];
      if(midy1[2]==midy1[1])
       midx1[2]=midx1[1]-10;
       else
       midy1[2]-=10;
       if(midy1[3]==midy1[2])
       midx1[3]=midx1[2]-10;
       else
       midy1[3]-=10;
       if(midy1[4]==midy1[3])
       midx1[4]=midx1[3]-10;
       else
       midy1[4]-=10;
     }
     else
     {
      midx1[0]+=10;
      if(midy1[1]==midy1[0])
       midx1[1]+=10;
       else
       midy1[1]=midy1[0];
      if(midy1[2]==midy1[1])
       midx1[2]+=10;
       else
       midy1[2]+=10;
       if(midy1[3]==midy1[2])
       midx1[3]+=10;
       else
       midy1[3]+=10;
       if(midy1[4]==midy1[3])
       midx1[4]+=10;
       else
       midy1[4]+=10;
    }
    }
     else if(b=='h')
     {
      if(pr1=='u')
      {
       midx1[0]-=10;
      if(midy1[1]==midy1[0])
       midx1[1]=midx1[0]+10;
       else
       midy1[1]-=10;
      if(midy1[2]==midy1[1])
       midx1[2]=midx1[1]+10;
       else
       midy1[2]-=10;
       if(midy1[3]==midy1[2])
       midx1[3]=midx1[2]+10;
       else
       midy1[3]-=10;
       if(midy1[4]==midy1[3])
       midx1[4]=midx1[3]+10;
       else
       midy1[4]-=10;
      }
      else
      {
      midx1[0]-=10;
      if(midy1[1]==midy1[0])
       midx1[1]=midx1[0]+10;
       else
       midy1[1]+=10;
      if(midy1[2]==midy1[1])
       midx1[2]=midx1[1]+10;
       else
       midy1[2]+=10;
       if(midy1[3]==midy1[2])
       midx1[3]=midx1[2]+10;
       else
       midy1[3]+=10;
       if(midy1[4]==midy1[3])
       midx1[4]=midx1[3]+10;
       else
       midy1[4]+=10;
    }
    }

}

 if(f==1)
 {

  p=random(400);
  q=random(400);
   if(p>=400&&q>=400)
 {p-=80;q-=80;}
 if(p<40&&q<65)
 {p+=100;q+=150;}

 if((p<=400&&p>55)&&(q>65&&q<=400))
 circle(p,q,5);
 }
 else
 {
   circle(p,q,6);
   circle(p,q,5);
   circle(p,q,4);
   circle(p,q,3);
   circle(p,q,2);
   circle(p,q,1);

  setcolor(i);
  outtextxy(p+5,q-3,"fA");
    }
 if((midx[0]==p||midx[0]==p+1||midx[0]==p+2||midx[0]==p+3||midx[0]==p+4||midx[0]==p+5||midx[0]==p+6||midx[0]==p-1||midx[0]==p-2||midx[0]==p-3||midx[0]==p-4||midx[0]==p-5||midx[0]==p-6)&&(midy[0]==q||midy[0]==q+1||midy[0]==q+2||midy[0]==q+3||midy[0]==q+4||midy[0]==q+5||midy[0]==q+6||midy[0]==q-1||midy[0]==q-2||midy[0]==q-2||midy[0]==q-3||midy[0]==q-4||midy[0]==p-5||midy[0]==q-6))
 { f=1;scor+=10;
    if(scor==100)
    c=0;
 }
 else
 {
  f=0;
  itoa(scor,score,10);
  setcolor(WHITE);
  outtextxy(505,60,"score A:");
  outtextxy(570,60,score);
   }

   if(midx[0]>=600||midx[0]<=0||midy[0]<=0||midy[0]>=450)
   z1=0;
   //player B
    if(f1==1)
 {


	   p1=random(p1);
	   q1=random(q1);
 if(p1>=400&&q1>=400)
 {p1-=100;q1-=100;}
 if(p1<45&&q1<65)
 {p1+=100;q1+=130;}

 if((p1<=400&&p1>45)&&(q1>65&&q1<=400))
   circle(p1,q1,5);


 }
 else
 {
  setcolor(GREEN);
  circle(p1,q1,6);
  circle(p1,q1,5);
  circle(p1,q1,4);
   circle(p1,q1,3);
   circle(p1,q1,2);
 circle(p1,q1,1);

  setcolor(i);
  outtextxy(p1+5,q1-3,"fB");
    }
 if((midx1[0]==p1||midx1[0]==p1+1||midx1[0]==p1+2||midx1[0]==p1+2||midx1[0]==p1+3||midx1[0]==p1+4||midx1[0]==p1+5||midx1[0]==p1+6||midx1[0]==p1-1||midx1[0]==p1-2||midx1[0]==p1-3||midx1[0]==p1-4||midx1[0]==p1-5||midx1[0]==p1-6)&&(midy1[0]==q1||midy1[0]==q1+1||midy1[0]==q1+2||midy1[0]==q1+3||midy1[0]==q1+4||midy1[0]==q1+5||midy1[0]==q1+6||midy1[0]==q1-1||midy1[0]==q1-2||midy1[0]==q1-2||midy1[0]==q1-3||midy1[0]==q1-4||midy1[0]==p1-5||midy1[0]==q1-6))
 { f1=1;scor1+=10;
    if(scor1==100)
    c=0;
 }
 else
 {
  f1=0;
  itoa(scor1,score1,10);
  setcolor(WHITE);
  outtextxy(505,80,"score B:");
  outtextxy(570,80,score1);
   }

   if(midx1[0]>=600||midx1[0]<=0||midy1[0]<=0||midy1[0]>=450)
   z2=0;

   if(z1==0&&z2==0)
   c=0;


 }



clearviewport();


closegraph();
sound(700);
delay(500);
nosound();

cout<<"\n\n\n\n\n\n\t\t\t       GAME OVER!!!!!";
if(e!='e')
{
 if(scor==100||scor>scor1)
 {
 cout<<"\n\n\t\t\tPLAYER A WINS!!!";
  cout<<"\n\n\tPLAYER A SCORE:"<<scor<<"\t\t \t PLAYER B SCORE:"<<scor1;}

 if(scor1==100||scor1>scor)
 {
 cout<<"\n\n\t\t\tPLAYER B WINS!!!";
  cout<<"\n\n\tPLAYER A SCORE:"<<scor<<"\t\t  \tPLAYER B SCORE:"<<scor1;}


 if(z1==0&&z2==0)
 {
 cout<<"\n\n\t\t\t\t FOUL";
 cout<<"\n\n\tPLAYER A SCORE:"<<scor<<"\t\t  \tPLAYER B SCORE:"<<scor1;
  }


}
  else
  cout<<"\n\n\tPLAYER A SCORE:"<<scor<<"\t\t  \tPLAYER B SCORE:"<<scor1;

  cout<<"\n\n\t\t\t\     Thanks for playing ";


getch();
}


