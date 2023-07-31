#include <iostream>
#include <fstream>
#include <string>
#include <graphics.h> 
using namespace std;
int l=0;
int i,x[7],c[7],v[7];

string day[7];

int main () {
		fstream chart;
	chart.open("D://forward.txt",ios::out);
	if(!chart){
	cout<<"File creation failed!";
}
else {
cout<<"Enter the number of days  you want: ";
cin>>i;
if(i>7 || i<1){
	cout<<"Pleas Enter No Between Number of The Week";
}
else {

  for (int j=0; j<i; j++,l++)
{	
  cout<<"Enter Day Name: ";
  cin>>day[l];
chart<<day[l]<<" ";
  cout<<"Enter 1st Item: ";
  cin>>x[l];
chart<<x[l]<<" ";
  cout<<"Enter 2nd Item: ";
  cin>>c[l];
chart<<c[l]<<" ";
  cout<<"Enter 3rd Item: ";
  cin>>v[l];
chart<<v[l]<<"\n";
}

	                   
	initwindow(2000,1300);
	setlinestyle(0,0,2);
	setcolor(3);

	rectangle(10,10,600,180);
	
	line(10,60,600,60);
	
	line(10,100,600,100);                   
	line(10,140,600,140);

	line(147,10,147,180);
	line(294,10,294,180);
	line(441,10,441,180);

	rectangle(650,10,1190,170);
	
	line(650,50,1190,50);                   
	line(650,90,1190,90);
	line(650,130,1190,130);	
	
    line(785,10,785,170);
	line(920,10,920,170);
	line(1055,10,1055,170);

	line(100,250,100,660);

	setcolor(15);
	outtextxy(20,30,"DAY");
	outtextxy(157,30,"ITEM 1");
	outtextxy(304,30,"ITEM 2");
	outtextxy(451,30,"ITEM 3");

	setcolor(3);
	setfillstyle(SOLID_FILL,15);
	line(85,250,100,230);
	line(100,230,115,250);
	line(85,252,115,252);
	floodfill(90,245,3);
	//background color
	
	setfillstyle(SOLID_FILL,10);
	rectangle(10,10,1350,740);
	line(10,180,1350,180);
	line(10,220,1350,220);
	line(65,220,65,740);
	rectangle(15,185,1345,215);
	rectangle(15,225,60,734);
	rectangle(1195,15,1345,170);
	rectangle(605,15,645,170);
	floodfill(1260,75,3);
	floodfill(45,210,3);
	floodfill(35,240,3);
	floodfill(610,25,3);
	setfillstyle(SOLID_FILL,15);
	floodfill(12,182,3);
	floodfill(12,482,3);
	floodfill(605,12,3);
	
	line(100,660,1330,660);
	
	setcolor(3);
	setfillstyle(SOLID_FILL,15);
	line(1350,660,1330,645);
	line(1350,660,1330,675);
	line(1330,645,1330,675);
	floodfill(1340,655,3);
		setcolor(15);
	outtextxy(80,650,"0");
	outtextxy(75,610,"50");
	outtextxy(70,560,"100");
	outtextxy(70,510,"150");
	outtextxy(70,460,"200");
	outtextxy(70,410,"250");
	outtextxy(70,360,"300");
	outtextxy(70,310,"350");
	outtextxy(70,260,"400");
	
	settextstyle(10,0,3);
	outtextxy(500,190,"SALES REPORT TABLE & GRAPH");
	
	settextstyle(8,1,1);
	outtextxy(150,730,"Item 1");
	outtextxy(195,730,"Item 2");
	outtextxy(240,730,"Item 3");
	
	outtextxy(330,730,"Item 1");
	outtextxy(375,730,"Item 2");
	outtextxy(420,730,"Item 3");
	
	outtextxy(505,730,"Item 1");
	outtextxy(550,730,"Item 2");
	outtextxy(595,730,"Item 3");
	
	outtextxy(680,730,"Item 1");
	outtextxy(725,730,"Item 2");
	outtextxy(770,730,"Item 3");
	
	outtextxy(855,730,"Item 1");
	outtextxy(900,730,"Item 2");
	outtextxy(945,730,"Item 3");
	
	outtextxy(1030,730,"Item 1");
	outtextxy(1075,730,"Item 2");
	outtextxy(1120,730,"Item 3");
	
	outtextxy(1205,730,"Item 1");
	outtextxy(1250,730,"Item 2");
	outtextxy(1295,730,"Item 3");
	chart.close();
}

	
	
 
 ifstream myfile;
 myfile.open("D://forward.txt");
 string mystring[3];
   int item1[3],item2[3],item3[3];
    while ( myfile) { 								//!myfile.eof()

       myfile >> mystring[0]>>item1[0]>>item2[0]>>item3[0];
	   myfile >> mystring[1]>>item1[1]>>item2[1]>>item3[1]; 
    string s[3]; 
    s[0]=to_string(item1[0]);
    s[1]=to_string(item2[0]);
    s[2]=to_string(item3[0]);
   
            	setcolor(15);
settextstyle(8,0,1);
outtextxy(20,75,const_cast<char *>(mystring[0].c_str()));

settextstyle(8,0,1);
outtextxy(157,75,const_cast<char *>(s[0].c_str()));
outtextxy(304,75,const_cast<char *>(s[1].c_str()));
outtextxy(451,75,const_cast<char *>(s[2].c_str()));

    settextstyle(8,1,1);
    setfillstyle(SOLID_FILL,10);
    
	bar(150,660,185,660-item1[0]);
	outtextxy(155,655-item1[0],const_cast<char *>(mystring[0].c_str()));
	bar(195,660,230,660-item2[0]);
	outtextxy(200,655-item2[0],const_cast<char *>(mystring[0].c_str()));
	bar(240,660,275,660-item3[0]);
    outtextxy(245,655-item3[0],const_cast<char *>(mystring[0].c_str()));
    
     // DAY 2   
      if(i>1) 
	{
	  
	  string u=to_string(item1[1]);
      string m=to_string(item2[1]);
      string p=to_string(item3[1]);
settextstyle(8,0,1);
outtextxy(20,115,const_cast<char *>(mystring[1].c_str()));

settextstyle(8,0,1);
outtextxy(157,115,const_cast<char *>(u.c_str()));
outtextxy(304,115,const_cast<char *>(m.c_str()));
outtextxy(451,115,const_cast<char *>(p.c_str()));

    settextstyle(8,1,1);
    setfillstyle(SOLID_FILL,9);
    
	bar(325,660,360,660-item1[1]);
	outtextxy(330,655-item1[1],const_cast<char *>(mystring[1].c_str()));
	bar(370,660,405,660-item2[1]);
	outtextxy(375,655-item2[1],const_cast<char *>(mystring[1].c_str()));
	bar(415,660,450,660-item3[1]);
    outtextxy(420,655-item3[1],const_cast<char *>(mystring[1].c_str()));
}
}
myfile.close();

getch();
}
return 0;
}