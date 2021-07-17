#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<Anurag.h>
#include<math.h>
void p1()
{
int n,a[20],i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 1...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The array is...");
gotoxy(35,25);
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p2()
{
int n,a[20],i,min,max;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 2...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];min=a[0];
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=1;i<n;i++)
{
if(max<a[i])
max=a[i];
if(min>a[i])
min=a[i];
}
printf("Maximum= %d and Minimum= %d",max,min);
getch();
cleardevice();
}
void p3()
{
int n,a[20],i,s=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 3...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=0;i<n;i++)
s=s+a[i];
printf("SUM= %d",s);
getch();
cleardevice();
}
void p4()
{
int r,c,a[20][20],i,j,temp,l=1,k;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 4...");
outtextxy(49,29,"Enter rows & columns..");
gotoxy(35,3);
scanf("%d%d",&r,&c);
outtextxy(49,57,"Enter the 2d-array...");
gotoxy(35,5);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(j>i)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
else if(r>c&&i>=c)
a[j][i]=a[i][j];
}
}
for(i=0;i<c;i++)
{
for(j=0,k=r-1;j<r/2;j++,k--)
{
temp=a[i][j];
a[i][j]=a[i][k];
a[i][k]=temp;
}
}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
printf("%d ",a[i][j]);
gotoxy(25,9+l);
l=l+1;
}
getch();
cleardevice();
}
void p5()
{
int n,a[20],i,so=0,se=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 5...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
se=se+a[i];
else
so=so+a[i];
}
printf("sum of odd=%d & sum of even=%d",so,se);
getch();
cleardevice();
}
void p6()
{
int n,a[20],i,sp=0,f,j;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,30,"Program 6...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=0;i<n;i++)
{
f=1;
for(j=2;j<=a[i]/2;j++)
{
if(a[i]%j==0)
{
f=0;
break;
}
}
if(f==1&&a[i]!=1&&a[i]!=0&&a[i]>0)
sp=sp+a[i];
}
printf("sum of prime=%d",sp);
getch();
cleardevice();
}
void p7()
{
int n,a[20],i,c,l=1,f=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 7...");
outtextxy(25,29,"Enter the size of array.....");
gotoxy(31,3);
scanf("%d",&n);
outtextxy(25,57,"Enter the array & element");
gotoxy(35,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&c);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,6);
for(i=0;i<n;i++)
{
if(a[i]==c)
{
f=1;
printf("Element is at index %d",i);
gotoxy(25,6+l);
l=l+1;
}
}
if(f==0)
printf("ELEMENT NOT FOUND!!");
getch();
cleardevice();
}
void p8()
{
int n,a[20],i,j,k,f,l=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 8...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(25,6);
for(i=0;i<n;i++)
{
f=1;
c=1;
for(j=i-1;j>=0;j--)
if(a[j]==a[i])
{
f=0;
break;
}
if(f==1)
{
for(k=i+1;k<n;k++)
if(a[k]==a[i])
c++;
printf("Element %d occurs %d times.",a[i],c);
gotoxy(25,6+l);
l=l+1;
}
}
getch();
cleardevice();
}
void p9()
{
int n,a[20],i,s=0;
float avg;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 9...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(22,7);
printf("Elements greater than mean are -->");
gotoxy(29,9);
for(i=0;i<n;i++)
s=s+a[i];
avg=(s*1.0)/n;
for(i=0;i<n;i++)
{
if(avg<a[i])
printf("%d ",a[i]);
}
getch();
cleardevice();
}
void p10()
{
int n,m,a[20],b[20],c[40],i,j=0,l=2;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 10...");
outtextxy(49,29,"Enter the size of both arrays......");
gotoxy(42,3);
scanf("%d%d",&n,&m);
outtextxy(49,57,"Enter the 1st array..");
gotoxy(32,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(49,86,"Enter the 2nd array..");
gotoxy(32,7);
for(i=0;i<m;i++)
scanf("%d",&b[i]);
gotoxy(3,9);
printf("Your Merged array is -->");
gotoxy(3,11);
for(i=0;i<n+m;i++)
{
if(i<n)
c[i]=a[i];
else
{
c[i]=b[j];
j++;
}
printf("%d ",c[i]);
if(i%10==0&&i!=0)
{
gotoxy(3,11+l);
l=l+2;
}
}
getch();
cleardevice();
}
void p11()
{
int n,a[20],i,j,l=2,temp;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 11...");
outtextxy(49,29,"Enter the size of array..");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
gotoxy(3,7);
printf("Your Rearranged array is -->");
gotoxy(3,9);
for(i=0;i<n;i++)
{
if(a[i]>0)
{
for(j=i+1;j<n;j++)
{
if(a[j]<0)
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
break;
}
}
}
if(i%10==0&&i!=0)
{
gotoxy(3,9+l);
l=l+2;
}
printf("%d ",a[i]);
}
getch();
cleardevice();
}
void p12()
{
int n,a[20],i,j,l=2,temp,f,k;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 12...");
outtextxy(49,29,"Enter the size of array..");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
gotoxy(3,7);
printf("Your Rearranged array is -->");
gotoxy(3,9);
for(i=0;i<n;i++)
{
f=1;
for(j=i-1;j>=0;j--)
{
if(a[j]==a[i])
{
f=0;
break;
}
}
if(f==0)
{
for(k=i+1;k<n;k++)
{
f=1;
for(j=k-1;j>=0;j--)
{
if(a[j]==a[k])
{
f=0;
break;
}
}
if(f==1)
{
temp=a[k];
a[k]=a[i];
a[i]=temp;
break;
}
}
}
if(i%10==0&&i!=0)
{
gotoxy(3,9+l);
l=l+2;
}
printf("%d ",a[i]);
}
getch();
cleardevice();
}
void p13()
{
char ch[50];
int i,c1=0,c2=0,l;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 13...");
outtextxy(49,29,"Enter the String..");
gotoxy(26,3);
gets(ch);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
outtextxy(49,80,"The Output is -->");
gotoxy(7,9);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
c1++;
if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
c2++;
}
l=c2-c1;
if(l<0)
l=l*(-1);
printf("The no. of Consonants ==>%d",l);
getch();
cleardevice();
}
void p14()
{
char ch[20];
int i,c1=0,c2=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 14...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]>=65&&ch[i]<=90)
c1++;
else if(ch[i]>=97&&ch[i]<=122)
c2++;
}
printf("Uppercase=%d & Lowercase=%d",c1,c2);
getch();
cleardevice();
}
void p15()
{
char ch[50];
int i,c=0,f=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 15...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==' '&&f==1)
{
c++;
f=0;
}
else if(ch[i]!=' ')
f=1;
}
if(ch[i-1]!=' ')
c++;
printf("No. of Words=%d",c);
getch();
cleardevice();
}
void p16()
{
char ch[50];
int i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 16...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
printf("Your String is -->");
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]!=' ')
printf("%c",ch[i]);
}
getch();
cleardevice();
}
void p17()
{
char ch[20],ch1,ch2;
int i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 17...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(105,200,"Enter the character u want ");
outtextxy(200,250,"to replace & with whom....");
gotoxy(35,19);
scanf("%c %c",&ch1,&ch2);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==ch1)
ch[i]=ch2;
}
outtextxy(105,340,"The String is...");
gotoxy(35,25);
printf("%s",ch);
getch();
cleardevice();
}
void p18()
{
char ch[50];
int i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 18...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]>=65&&ch[i]<=90)
ch[i]=ch[i]+32;
else if(ch[i]>=97&&ch[i]<=122)
ch[i]=ch[i]-32;
}
printf("Your String is -->%s",ch);
getch();
cleardevice();
}
void p19()
{
char ch[50],ch1[50],temp;
int i,j=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 19...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
for(i=0;ch[i]!='\0';i++);
for(i=i-1;i>=0;i--)
{
if(ch[i]!=' ')
{
ch1[j]=ch[i];
j++;
}
}
ch1[j]='\0';
printf("Your String is -->%s",ch1);
getch();
cleardevice();
}
void p20()
{
char ch[50],temp;
int i,j,c=-1,k;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 20...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(20,19);
for(i=0;ch[i]!='\0';i++)
{
c++;
if(ch[i]==' ')
{
for(j=i-1,k=i-c;k<(2*i-c)/2;j--,k++)
{
temp=ch[j];
ch[j]=ch[k];
ch[k]=temp;
}
c=-1;
}
}
if(ch[i-1]!=' ')
{
for(j=i-1,k=i-c-1;k<(2*i-c-1)/2;j--,k++)
{
temp=ch[j];
ch[j]=ch[k];
ch[k]=temp;
}
}
printf("Your String is -->%s",ch);
getch();
cleardevice();
}
void p21()
{
char ch[50];
int i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 21...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(20,19);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]!=' ')
ch[i]=ch[i]+1;
}
printf("Your String is -->%s",ch);
getch();
cleardevice();
}
void p22()
{
char ch[50];
int i,j=0,f=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 22...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(20,19);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==' '&&f==1)
{
ch[j]=ch[i];
j++;
f=0;
}
else if(ch[i]!=' ')
{
ch[j]=ch[i];
j++;
f=1;
}
}
ch[j]='\0';
printf("Your String is -->%s",ch);
getch();
cleardevice();
}
void p23()
{
char ch[50];
int i,j,k=0,c=1;
outtextxy(220,30,"Program 23...");
outtextxy(105,100,"Enter the Name..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(20,19);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==' ')
c++;
}
for(i=1;i<=c;i++)
{
if(i==c)
{
for(j=k;ch[j]!='\0';j++)
printf("%c",ch[j]);
}
else
{
printf("%c.",ch[k]);
for(j=k+1;ch[j]!=' ';j++);
k=j+1;
}
}
getch();
cleardevice();
}
void p24()
{
char ch1[50],ch2[50],ch3[100];
int i,j=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 24...");
outtextxy(105,100,"Enter the 1st String..");
gotoxy(35,12);
gets(ch1);
outtextxy(105,200,"Enter the 2nd String..");
gotoxy(35,18);
gets(ch2);
outtextxy(105,280,"The Output is -->");
gotoxy(20,23);
for(i=0;i<strlen(ch1)+strlen(ch2);i++)
{
if(i<strlen(ch1))
ch3[i]=ch1[i];
else
{
ch3[i]=ch2[j];
j++;
}
}
ch3[i]='\0';
printf("Concatenated String ==> %s",ch3);
getch();
cleardevice();
}
void p25()
{
char ch1[50],ch2[50];
int i=0,j=0,k,f;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 25...");
outtextxy(105,100,"Enter the String..");
gotoxy(35,12);
gets(ch1);
outtextxy(105,200,"Enter the Substring..");
gotoxy(35,18);
gets(ch2);
outtextxy(105,280,"The Output is -->");
gotoxy(35,23);
while(1)
{
if(ch1[i]=='\0'&&ch2[j]!='\0')
{
f=0;
break;
}
else if(ch1[i]!='\0'&&ch2[j]=='\0')
{
if(ch1[i]==' ')
{
f=1;
break;
}
else
j=0;
}
else if(ch1[i]=='\0'&&ch2[j]=='\0')
{
f=1;
break;
}
else if(ch1[i]!=ch2[j])
{
j=0;
for(k=i;ch1[k]!=' '&&ch1[k]!='\0';k++);
i=k+1;
if(ch1[k]=='\0')
i=k;
}
else if(ch1[i]==ch2[j])
{
i++;
j++;
}
}
if(f==1)
printf("SUBSTRING IS PRESENT!!");
else
printf("SUBSTRING NOT PRESENT!!");
getch();
cleardevice();
}
void p26()
{
int n,a[21],i,j,k;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 26...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(49,80,"Enter the element and index.........");
gotoxy(40,6);
scanf("%d%d",&k,&j);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(25,12);
printf("Array after insertion is --->");
gotoxy(25,15);
for(i=n-1;i>=j;i--)
{
a[i+1]=a[i];
}
a[j]=k;
for(i=0;i<n+1;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p27()
{
int n,a[20],i,j,k;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 27...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(49,80,"Enter the index of the element.........");
gotoxy(44,6);
scanf("%d",&j);
k=a[j];
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(25,12);
printf("Array after processing is --->");
gotoxy(25,15);
for(i=j+1;i<n;i++)
{
a[i-1]=a[i];
}
a[n-1]=k;
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p28()
{
char ch1[50],ch2[50];
int i=0,j=0,k,c=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 28...");
outtextxy(105,100,"Enter the String..");
gotoxy(35,12);
gets(ch1);
outtextxy(105,200,"Enter the Substring...");
gotoxy(35,18);
gets(ch2);
outtextxy(105,280,"The Output is -->");
gotoxy(35,23);
while(1)
{
if(ch1[i]=='\0'&&ch2[j]!='\0')
break;
else if(ch1[i]!='\0'&&ch2[j]=='\0')
{
if(ch1[i]==' ')
c++;
j=0;
}
else if(ch1[i]=='\0'&&ch2[j]=='\0')
{
c++;
break;
}
else if(ch1[i]!=ch2[j])
{
j=0;
for(k=i;ch1[k]!=' '&&ch1[k]!='\0';k++);
i=k+1;
if(ch1[k]=='\0')
i=k;
}
else if(ch1[i]==ch2[j])
{
i++;
j++;
}
}
printf("Freqency of \"%s\" is %d",ch2,c);
getch();
cleardevice();
}
void p29()
{
int n,a[20],i,j,k,l,f,f1=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 29...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(49,80,"Enter the element.........");
gotoxy(29,6);
scanf("%d",&l);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(25,12);
for(i=0;i<n;i++)
{
f=1;
for(j=i-1;j>=0;j--)
{
if(a[j]==a[i])
{
f=0;
break;
}
}
if(f==1)
{
for(k=i+1;k<n;k++)
{
f=1;
for(j=k-1;j>i;j--)
{
if(a[j]==a[k])
{
f=0;
break;
}
}
if(f==1)
{
if(a[i]+a[k]==l)
{
f1=1;
printf("(%d,%d) ",a[i],a[k]);
}
}
}
}
}
if(f1==0)
printf("NO GROUPS FOUND!!");
getch();
cleardevice();
}
void p30()
{
char ch[50];
int i,s=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 30...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]>=48&&ch[i]<=57)
s=s+((int)ch[i]-48);
}
printf("Sum of Digits ==> %d",s);
getch();
cleardevice();
}
void p31()
{
char ch[50],k,l,temp,*p;
int i,j,c=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 31...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
for(i=0;ch[i]!='\0';i++)
if(ch[i]==' ')
c++;
for(i=0;i<strlen(ch)-1;i++)
{
for(j=0;j<strlen(ch)-1-i;j++)
{
k=toupper(ch[j]);
l=toupper(ch[j+1]);
if(k>l)
{
temp=ch[j];
ch[j]=ch[j+1];
ch[j+1]=temp;
}
}
}
p=&ch[c];
printf("Sorted String ==> %s",p);
getch();
cleardevice();
}
void p32()
{
int n,a[20],i,j,temp;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 32...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(21,8);
printf("Your Sorted Array is -->");
gotoxy(21,10);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p33()
{
int n,a[20],i,j,temp,big,k;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 33...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(21,8);
printf("Your Sorted Array is -->");
gotoxy(21,10);
for(i=0;i<n-1;i++)
{
big=a[i];
k=i;
for(j=i+1;j<n;j++)
{
if(big<a[j])
{
big=a[j];
k=j;
}
}
temp=a[i];
a[i]=a[k];
a[k]=temp;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p34()
{
int n,a[20],i,j,k,l,temp;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 34...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(21,8);
printf("Your Sorted Array is -->");
gotoxy(21,10);
for(i=0;i<n;i++)
{
k=i;
for(j=i-1;j>=0;j--)
{
if(a[j]>a[i])
k=j;
}
temp=a[i];
for(l=i-1;l>=k;l--)
a[l+1]=a[l];
a[k]=temp;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p35()
{
int n,i,l=0;
long long int a=0,b=1,c;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 35...");
outtextxy(49,29,"Enter the no. of terms.....");
gotoxy(35,3);
scanf("%d",&n);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
gotoxy(2,5);
setcolor(WHITE);
if(n<=0)
printf("ENTER VALID NO. OF TERMS");
else if(n==1)
{
printf("Your Fibonacci Series is --->");
gotoxy(2,6);
printf("%llu",a);
}
else if(n==2)
{
printf("Your Fibonacci Series is --->");
gotoxy(2,6);
printf("%llu,%llu",a,b);
}
else if(n>2)
{
printf("Your Fibonacci Series is --->");
gotoxy(2,6);
printf("%llu,%llu,",a,b);
for(i=3;i<=n;i++)
{
c=a+b;
a=b;
b=c;
if(i!=n)
printf("%llu,",c);
else
printf("%llu",c);
rectangle(1,1,637,477);
if(i%25==0)
{
l=l+1;
gotoxy(2,6+l);
}
}
}
getch();
cleardevice();
}
void p36()
{
int n,i,l=0;
char ch1[1000]="a",ch2[1000]="bc",ch3[1000];
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 36...");
outtextxy(49,29,"Enter the no. of terms.....");
gotoxy(35,3);
scanf("%d",&n);
gotoxy(2,5);
setcolor(WHITE);
if(n<=0)
printf("ENTER VALID NO. OF TERMS");
else if(n==1)
{
printf("Your Fibonacci Strings are --->");
gotoxy(2,6);
printf("%s",ch1);
}
else if(n==2)
{
printf("Your Fibonacci Strings are --->");
gotoxy(2,6);
printf("%s,%s",ch1,ch2);
}
else if(n>2)
{
printf("Your Fibonacci Strings are --->");
gotoxy(2,6);
printf("%s,%s,",ch1,ch2);
for(i=3;i<=n;i++)
{
strcat(ch1,ch2);
strcpy(ch3,ch1);
strcpy(ch1,ch2);
strcpy(ch2,ch3);
if(i!=n)
printf("%s,",ch3);
else
printf("%s",ch3);
rectangle(1,1,637,477);
if(i%25==0)
{
l=l+1;
gotoxy(2,6+l);
}
}
}
getch();
cleardevice();
}
void p37()
{
int i=2,f;
long long int n;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 37...");
outtextxy(105,100,"Enter the Number..");
gotoxy(35,12);
scanf("%llu",&n);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
if(n<=0)
printf("FACTORIAL NOT EXISTS....");
else if(n==1)
printf("Factorial of either 0 or 1");
else if(n>1)
{
while(n>1)
{
if(n%i==0)
{
f=1;
n=n/i;
i++;
}
else
{
f=0;
break;
}
}
if(f==0)
printf("NOT A FACTORIAL!!");
else
printf("FACTORIAL OF %d",i-1);
}
getch();
cleardevice();
}
void p38()
{
int i=3,f=0;
long long int n,a=0,b=1,c;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 38...");
outtextxy(105,100,"Enter the Number..");
gotoxy(35,12);
scanf("%llu",&n);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
if(n==0)
{
f=1;
printf("It is the term number 1....");
}
else if(n==1)
{
f=1;
printf("It is the term number 2 or 3....");
}
else
{
a=1;
b=1;
while(1)
{
c=a+b;
a=b;
b=c;
i++;
if(c==n)
{
printf("It is the term number %d.....",i);
f=1;
break;
}
else if(c>n)
break;
}
}
if(f==0||n<0)
printf("TERM NOT EXISTS....");
getch();
cleardevice();
}
void p39()
{
char ch[50];
int i,j,k,f;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 39...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
printf("Your String is -->");
for(i=0;ch[i]!='\0';i++)
{
f=1;
for(j=i-1;j>=0;j--)
{
if(ch[i]==' ')
break;
else if(ch[j]==tolower(ch[i])||ch[j]==toupper(ch[i]))
{
f=0;
break;
}
}
if(f==0)
{
for(k=i+1;ch[k]!='\0';k++)
ch[k-1]=ch[k];
ch[k-1]='\0';
i--;
}
}
printf("%s",ch);
getch();
cleardevice();
}
void p40()
{
char ch[50];
int num=0,i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 40...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
printf("The result is --->");
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]>=48&&ch[i]<=57)
num=10*num+((int)ch[i]-48);
else
break;
}
printf("%d",num);
getch();
cleardevice();
}
void p41()
{
char ch1[50],ch2[50];
int i,j,k=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 41...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch1);
outtextxy(105,200,"The Output is -->");
gotoxy(30,19);
printf("Your String is -->");
for(i=0;ch1[i]!='\0';i++);
for(i=i-1;i>=0;i--)
{
if(ch1[i]==' ')
{
for(j=i+1;ch1[j]!=' '&&ch1[j]!='\0';j++)
{
ch2[k]=ch1[j];
k++;
}
ch2[k]=' ';k++;
}
}
for(i=0;ch1[i]!=' '&&ch1[i]!='\0';i++)
{
ch2[k]=ch1[i];
k++;
}
ch2[k]='\0';
printf("%s",ch2);
getch();
cleardevice();
}
void p42()
{
int n,a[20],i,j,k,l=0,f;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 42...");
outtextxy(49,29,"Enter the size of array......");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,8);
outtextxy(50,100,"OUTPUT");
gotoxy(22,7);
printf("Array after processing -->");
gotoxy(29,9);
for(i=0;i<n;i++)
{
f=1;
for(j=l-1;j>=0;j--)
{
if(a[j]==a[l])
{
f=0;
break;
}
}
if(f==0)
{
for(k=l+1;k<n;k++)
a[k-1]=a[k];
a[k-1]=0;
l--;
}
l++;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p43()
{
char ch[50],ch1[50],ch2[50],f=0,f1=0;
int i,j=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 43...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(25,19);
printf("Palindrome Words are ");
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]!=' ')
{
ch1[j]=ch[i];
j++;
f=1;
}
else if(f==1)
{
ch1[j]='\0';
j=0;
f=0;
strcpy(ch2,ch1);
if(strcmpi(strrev(ch2),ch1)==0)
{
f1=1;
printf("%s ",ch1);
}
}
}
ch1[j]='\0';
strcpy(ch2,ch1);
if(strcmpi(strrev(ch2),ch1)==0)
{
printf("%s",ch1);
f1=1;
}
if(f1==0)
printf("NOT FOUND.....");
getch();
cleardevice();
}
void p44()
{
char ch[100],k;
int i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 44...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(2,19);
printf("Your String is -->");
for(i=0;ch[i]!='\0';i++)
{
if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
{
k=toupper(ch[i]);
k=(int)k-64;
printf("%d ",k);
}
else
printf("%c ",ch[i]);
}
getch();
cleardevice();
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return f;
}
void p45()
{
int n,r,m,p,q;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 45...");
outtextxy(85,100,"Enter the value of n & r....");
gotoxy(36,12);
scanf("%d%d",&n,&r);
outtextxy(105,200,"The Output is -->");
gotoxy(25,19);
if(n<r||(n==0&&r==0)||n<0||r<0)
printf("Enter VALID values of n & r!!!!");
else
{
p=fact(n);
q=fact(r);
m=fact(n-r);
printf("The value of C(%d,%d) is %d....",n,r,p/(q*m));
}
getch();
cleardevice();
}
void p46()
{
char *ch1,*ch2,*ch3;
int i,j=0,k;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 46...");
outtextxy(49,29,"Enter the String.......");
gotoxy(33,3);
gets(ch1);
outtextxy(49,60,"Enter the Substring....");
gotoxy(33,5);
gets(ch2);
outtextxy(49,105,"Enter the Index........");
gotoxy(33,8);
scanf("%d",&k);
outtextxy(49,152,"The Output is --->");
gotoxy(33,11);
for(i=k;*(ch1+i)!='\0';i++)
{
*(ch3+j)=*(ch1+i);
j++;
}
*(ch1+k)='\0';
*(ch3+j)='\0';
strcat(ch1,ch2);
strcat(ch1,ch3);
printf("%s",ch1);
getch();
cleardevice();
}
int POW(int j)
{
if(j%2==0)
return 1;
else
return -1;
}
void transpose(float c[3][3],int d,int f)
{
int i,j,l=2;
float temp;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(j>i)
{
temp=c[i][j];
c[i][j]=c[j][i];
c[j][i]=temp;
}
}
}
gotoxy(25,9);
if(f==0)
{
printf("THE INVERSE is:\n");
gotoxy(25,11);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=c[i][j]/d;
printf("%.2f  ",c[i][j]);
}
gotoxy(25,11+l);
l=l+2;
}
}
else if(f==1)
{
printf("The ADJOINT is:\n");
gotoxy(25,11);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%.0f ",c[i][j]);
gotoxy(25,11+l);
l=l+2;
}
}
}
void adjoint(int a[3][3],float c[3][3],int d,int f)
{
int i,j,n=0,sign=1,p,m,k,l,b[2][2],sum;
for(i=1;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=0;p=1;n=0;
for(k=i+1;k<3;k++)
{
m=0;
for(l=j+1;l<3;l++)
{
b[n][m]=a[k][l];
m++;
}
n++;
}
if(j!=0)
{
n=0;
for(k=i+1;k<3;k++)
{
m=2-j;
for(l=0;l<j;l++)
{
b[n][m]=a[k][l];
m++;
}
n++;
}
}
for(k=0;k<i;k++)
{
m=0;
for(l=j+1;l<3;l++)
{
b[n][m]=a[k][l];
m++;
}
n++;
}
if(j!=0)
{
if(j==2&&i==2)
{
n=0;
}
else
n=1;
for(k=0;k<i;k++)
{
for(l=0;l<j;l++)
{
b[n][m]=a[k][l];
m++;
}
if(i==2&&j==1)
{
n=0;
m=1;
}
else if(j==2&&i==2)
{
n++;
m=0;
}
}
}
for(l=0;l<2;l++)
{
if(i==2&&j==1)
sum=b[1][0]*b[1][1]-b[0][0]*b[0][1];
else
sum=b[0][l]*b[1][p]-sum;
p--;
}
sum=sum*sign;
sign=sign*(-1);
c[i][j]=sum*POW(i+j);
}
}
if(f==1)
transpose(c,d,f);
else
transpose(c,d,f);
}
void determinant(int a[3][3],int f)
{
int i,j,k,b[2][2],m,n,p,sign=-1,q=0,sum,d=0;
float c[3][3];
for(j=0;j<3;j++)
{
sum=0;p=1;n=0;
for(i=1;i<3;i++)
{
m=0;
for(k=j+1;k<3;k++)
{
b[n][m]=a[i][k];
m++;
}
n++;
}
if(j!=0)
{
n=0;
for(i=1;i<3;i++)
{
m=2-j;
for(k=0;k<j;k++)
{
b[n][m]=a[i][k];
m++;
}
n++;
}
}
for(k=0;k<2;k++)
{
sum=b[0][k]*b[1][p]-sum;
p--;
}
sum=sum*sign;
c[0][q]=sum*POW(j);
q++;
sign=sign*(-1);
d=d+sum*a[0][j]*POW(j);
}
if(f==1)
printf("DETERMINANT= %d",d);
else if(f==2)
adjoint(a,c,d,1);
else if(d==0)
{
gotoxy(25,9);
printf("INVERSE DOES NOT EXISTS");
}
else
adjoint(a,c,d,0);
}
void p47()
{
int a[3][3],i,j;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 47...");
outtextxy(49,29,"Enter Matrix of Order 3....");
gotoxy(35,3);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
determinant(a,0);
getch();
cleardevice();
}
void p48()
{
int i,j=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 48...");
outtextxy(49,29,"HERE ARE THE ASCII's of the Characters......");
for(i=1;i<=254;i++)
{
gotoxy(33,5+j);
printf("%d ---------> %c",i,i);
j=j+2;
if(i%10==0)
{
gotoxy(30,5+j);
printf("Press any key to continue........");
j=0;
getch();
cleardevice();
outtextxy(220,5,"Program 48...");
outtextxy(49,29,"HERE ARE THE ASCII's of the Characters......");
rectangle(1,1,637,477);
}
}
getch();
cleardevice();
}
void p49()
{
int n,a[20],i,temp;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 49...");
outtextxy(49,29,"Enter the size of array..");
gotoxy(35,3);
scanf("%d",&n);
outtextxy(49,57,"Enter the array..");
gotoxy(25,5);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
gotoxy(3,7);
printf("Your Rearranged array is -->");
gotoxy(3,9);
for(i=0;i<n-1;)
{
if(a[i]%10==0)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
i=i+2;
}
else
i++;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p50()
{
int n,i,j,l=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 50...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("*  ");
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p51()
{
int n,i,j,l=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 51...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
printf("*  ");
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p52()
{
int n,i,j,l=1;
char ch='a';
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 52...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=1;i<=n;i++)
{
ch='a';
for(j=1;j<=i;j++)
{
printf("%c  ",ch);
ch++;
}
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p53()
{
int n,i,j,l=1;
char ch='a';
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 53...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=n;i>=1;i--)
{
ch='a';
for(j=i;j>=1;j--)
{
printf("%c  ",ch);
ch++;
}
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p54()
{
int n,i,j,l=1;
char ch='a';
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 54...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%c  ",ch);
ch++;
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p55()
{
int n,i,j,l=1;
char ch;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 55...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
ch=96+n;
gotoxy(2,5);
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
printf("%c  ",ch);
ch--;
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p56()
{
int n,i,j,l=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 56...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%d  ",j);
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p57()
{
int n,i,j,l=1,k=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 57...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=n;i>=1;i--)
{
k=1;
for(j=i;j>=1;j--)
{
printf("%d  ",k);
k++;
}
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p58()
{
int n,i,j,l=1,c=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 58...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
gotoxy(2,5);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%d  ",c);
c++;
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p59()
{
int n,i,j,l=1,c;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 59...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
c=n;
gotoxy(2,5);
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
printf("%d  ",c);
c--;
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p60()
{
int n,i,j,l=1,k,c=1,m;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 60...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
k=n-1;
gotoxy(2,5);
for(i=1;i<=n;i++)
{
c=1;
for(m=1;m<=k;m++)
printf("  ");
k--;
for(j=1;j<=i;j++)
{
printf("%d ",c);
c++;
}
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p61()
{
int n,i,j,l=1,k,m;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 61...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
k=n-1;
gotoxy(2,5);
for(i=1;i<=n;i++)
{
for(m=1;m<=k;m++)
printf(" ");
k--;
for(j=1;j<=i;j++)
printf("* ");
gotoxy(2,5+l);
l++;
}
getch();
cleardevice();
}
void p62()
{
int n,i,j,l=1,k,m;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 62...");
outtextxy(49,29,"Enter the rows.......");
gotoxy(25,3);
scanf("%d",&n);
k=n-1;
gotoxy(45,2);
for(i=1;i<=n;i++)
{
for(m=1;m<=k;m++)
printf(" ");
k--;
for(j=1;j<=i;j++)
printf("* ");
gotoxy(45,2+l);
l++;
}
k=0;
for(i=n;i>=1;i--)
{
for(m=1;m<=k;m++)
printf(" ");
k++;
for(j=i;j>=1;j--)
printf("* ");
gotoxy(45,2+l);
l++;
}
getch();
cleardevice();
}
void p63()
{
int n,a[20],i,max1,max2,temp;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 63...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(a[0]>a[1])
{
max1=a[0];
max2=a[1];
}
else
{
max1=a[1];
max2=a[0];
}
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=2;i<n;i++)
{
if(max1<a[i])
{
temp=max1;
max1=a[i];
max2=temp;
}
else if(max1>a[i])
{
if(max2<a[i])
max2=a[i];
}
}
printf("Second Largest= %d",max2);
getch();
cleardevice();
}
void p64()
{
int a[3][3],i,j;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 64...");
outtextxy(49,29,"Enter Matrix of Order 3....");
gotoxy(35,3);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
determinant(a,1);
getch();
cleardevice();
}
void p65()
{
int a[3][3],i,j;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 65...");
outtextxy(49,29,"Enter Matrix of Order 3....");
gotoxy(35,3);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
determinant(a,2);
getch();
cleardevice();
}
void p66()
{
int n,m,r,sum=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 66...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
m=n;
gotoxy(35,20);
while(m>0)
{
r=m%10;
sum=sum+r*r*r;
m=m/10;
}
if(sum==n)
outtextxy(105,250,"An Armstrong Number.....");
else
outtextxy(50,250,"Not an Armstrong Number....");
getch();
cleardevice();
}
void p67()
{
int n,m,r,sum=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 67...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
m=n;
gotoxy(35,20);
while(m>0)
{
r=m%10;
sum=sum+r;
m=m/10;
}
if(sum*sum==n)
outtextxy(105,250,"An NEON Number.....");
else
outtextxy(95,250,"Not an NEON Number....");
getch();
cleardevice();
}
void p68()
{
int r,c,a[20][20],i,j,s=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 68...");
outtextxy(49,29,"Enter rows & columns..");
gotoxy(35,3);
scanf("%d%d",&r,&c);
if(r!=c)
{
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
printf("TRACE does not EXISTS.....");
}
else
{
outtextxy(49,57,"Enter the 2d-array...");
gotoxy(35,5);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
s=s+a[i][j];
}
}
printf("The TRACE is %d........",s);
}
getch();
cleardevice();
}
void p69()
{
int r,c,a[20][20],i,j,l=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 69...");
outtextxy(49,29,"Enter rows & columns..");
gotoxy(35,3);
scanf("%d%d",&r,&c);
if(r!=c)
{
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
printf("Diagonal does not EXISTS.....");
}
else
{
outtextxy(49,57,"Enter the 2d-array...");
gotoxy(35,5);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
printf("Diagonals of MATRIX --->");
gotoxy(25,11);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j||i+j==r-1)
printf("%d ",a[i][j]);
else
printf("  ");
}
gotoxy(25,11+l);
l++;
}
}
getch();
cleardevice();
}
void p70()
{
int r,c,a[20][20],i,j,temp,l=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 70...");
outtextxy(49,29,"Enter rows & columns..");
gotoxy(35,3);
scanf("%d%d",&r,&c);
outtextxy(49,57,"Enter the 2d-array...");
gotoxy(35,5);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
printf("The TRANSPOSE is -->");
gotoxy(25,11);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(j>i)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
else if(r>c&&i>=c)
a[j][i]=a[i][j];
}
}
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
printf("%d ",a[i][j]);
gotoxy(25,11+l);
l=l+1;
}
getch();
cleardevice();
}
void p71()
{
int n,a[20],i,j,temp;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 71...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The Reversed Array is...");
gotoxy(35,25);
for(i=0,j=n-1;i<n/2;i++,j--)
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
cleardevice();
}
void p72()
{
int n,r;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 72...");
outtextxy(20,100,"Enter the DECIMAL Number.....");
gotoxy(38,12);
scanf("%d",&n);
gotoxy(45,22);
outtextxy(30,250,"The BINARY equivalent is -->");
while(n>0)
{
r=n%2;
printf("\b\b%d",r);
n=n/2;
}
getch();
cleardevice();
}
int POWE(int r,int i)
{
int j,f=1;
if(i==0)
return 1;
else
{
for(j=1;j<=i;j++)
f=f*r;
return f;
}
}
void p73()
{
long long int n;
int r,s=0,i=-1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 73...");
outtextxy(30,100,"Enter the BINARY Number.....");
gotoxy(38,12);
scanf("%llu",&n);
gotoxy(40,22);
outtextxy(20,250,"The DECIMAL equivalent is -->");
while(n>0)
{
i++;
r=n%10;
s=s+r*POWE(2,i);
n=n/10;
}
printf("%d",s);
getch();
cleardevice();
}
void p74()
{
int n,r;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 74...");
outtextxy(30,100,"Enter the DECIMAL Number.....");
gotoxy(38,12);
scanf("%d",&n);
gotoxy(45,22);
outtextxy(30,250,"The OCTAL equivalent is -->");
while(n>0)
{
r=n%8;
printf("\b\b%d",r);
n=n/8;
}
getch();
cleardevice();
}
void p75()
{
long long int n;
int r,s=0,i=-1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 75...");
outtextxy(30,100,"Enter the OCTAL Number.....");
gotoxy(38,12);
scanf("%llu",&n);
gotoxy(40,22);
outtextxy(20,250,"The DECIMAL equivalent is -->");
while(n>0)
{
i++;
r=n%10;
s=s+r*POWE(8,i);
n=n/10;
}
printf("%d",s);
getch();
cleardevice();
}
void p76()
{
int n,m,r,sum=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 67...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
m=n;
gotoxy(35,20);
while(m>0)
{
r=m%10;
sum=10*sum+r;
m=m/10;
}
if(sum==n)
outtextxy(105,250,"A PALINDROME Number.....");
else
outtextxy(50,250,"Not a PALINDROME Number....");
getch();
cleardevice();
}
void p77()
{
int n,a[20],i,s,j,f=0,r;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 77...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=0;i<n;i++)
{
j=a[i];
s=0;
while(j>0)
{
r=j%10;
s=10*s+r;
j=j/10;
}
if(a[i]==s)
{
f=1;
printf("%d ",a[i]);
}
}
if(f==0)
printf("NO PALINDROME NUMBERS......");
getch();
cleardevice();
}
void p78()
{
char ch[50];
int i,c=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 78...");
outtextxy(49,29,"Enter the String..");
gotoxy(26,3);
gets(ch);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
outtextxy(49,80,"The Output is -->");
gotoxy(7,9);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
c++;
}
printf("The no. of VOWELS ==>%d",c);
getch();
cleardevice();
}
void p79()
{
char ch[50];
int i,c=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 79...");
outtextxy(49,29,"Enter the String..");
gotoxy(26,3);
gets(ch);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
outtextxy(49,80,"The Output is -->");
gotoxy(7,9);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]>=48&&ch[i]<=57)
c++;
}
printf("The no. of DIGITS ==>%d",c);
getch();
cleardevice();
}
void p80()
{
char ch[50];
int i,c=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 80...");
outtextxy(49,29,"Enter the String..");
gotoxy(26,3);
gets(ch);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
outtextxy(49,80,"The Output is -->");
gotoxy(7,9);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]>=48&&ch[i]<=57);
else if(ch[i]>=65&&ch[i]<=90);
else if(ch[i]>=97&&ch[i]<=122);
else
c++;
}
printf("The no. of Special Symbols ==>%d",c);
getch();
cleardevice();
}
void p81()
{
int n,i,f=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 81...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
gotoxy(35,20);
if(n==1||n<=0)
f=1;
else
{
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
}
if(f==0)
outtextxy(150,250,"A PRIME Number.....");
else
outtextxy(130,250,"Not a PRIME Number....");
getch();
cleardevice();
}
void p82()
{
int n,m,i,f=1,f1=0,big;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 82...");
outtextxy(105,100,"Enter the 2 Numbers.....");
gotoxy(38,12);
scanf("%d%d",&n,&m);
outtextxy(105,210,"The Output is......");
gotoxy(30,20);
if(n==0||m==0)
f=0;
else
{
if(n>m)
big=n;
else
big=m;
for(i=2;i<=big;i++)
{
if(n%i==0&&m%i==0)
{
f=1;
f1=1;
break;
}
}
}
if(f==0)
outtextxy(120,300,"Enter VALID Numbers.....");
else if(f1==0)
printf("The H.C.F. is %d.....",1);
else if(f1==1)
printf("The H.C.F. is %d.....",i);
getch();
cleardevice();
}
void p83()
{
int n,m,i,f=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 83...");
outtextxy(105,100,"Enter the 2 Numbers.....");
gotoxy(38,12);
scanf("%d%d",&n,&m);
outtextxy(105,210,"The Output is......");
gotoxy(30,20);
if(n==0||m==0)
f=0;
else
{
for(i=1;i<=m*n;i++)
{
if(i%n==0&&i%m==0)
{
f=1;
break;
}
}
}
if(f==0)
outtextxy(120,300,"Enter VALID Numbers.....");
else if(f==1)
printf("The L.C.M. is %d.....",i);
getch();
cleardevice();
}
void p84()
{
int n,a[20],i,s,j,f=0,r;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 84...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=0;i<n;i++)
{
j=a[i];
s=0;
while(j>0)
{
r=j%10;
s=s+r*r*r;
j=j/10;
}
if(a[i]==s)
{
f=1;
printf("%d ",a[i]);
}
}
if(f==0)
printf("NO Armstrong NUMBERS......");
getch();
cleardevice();
}
void p85()
{
int n,a[20],i,s,j,f=0,r;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 85...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=0;i<n;i++)
{
j=a[i];
s=0;
while(j>0)
{
r=j%10;
s=s+r;
j=j/10;
}
if(a[i]==s*s)
{
f=1;
printf("%d ",a[i]);
}
}
if(f==0)
printf("NO NEON NUMBERS......");
getch();
cleardevice();
}
void p86()
{
int n,a[20],i,j,f=0,f1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 86...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The output is...");
gotoxy(35,25);
for(i=0;i<n;i++)
{
f1=0;
if(a[i]==1||a[i]<=0)
f1=1;
else
{
for(j=2;j<=a[i]/2;j++)
{
if(a[i]%j==0)
{
f1=1;
break;
}
}
}
if(f1==0)
{
f=1;
printf("%d ",a[i]);
}
}
if(f==0)
printf("NO PRIME NUMBERS......");
getch();
cleardevice();
}
void p87()
{
int n,i,s=0,r;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 87...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"The Output is.....");
gotoxy(30,20);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("The Sum of Digits = %d",s);
getch();
cleardevice();
}
void p88()
{
int n,i,r=0;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 88...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"The Output is.....");
gotoxy(30,20);
while(n>0)
{
r++;
n=n/10;
}
printf("The No. of Digits = %d",r);
getch();
cleardevice();
}
void p89()
{
char ch[20],ch1[20];
int i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 89...");
outtextxy(105,100,"Enter the String..");
gotoxy(30,12);
gets(ch);
outtextxy(105,200,"The Output is -->");
gotoxy(20,19);
for(i=0;ch[i]!='\0';i++)
ch1[i]=ch[i];
ch1[i]='\0';
printf("New String is ---> %s",ch1);
getch();
cleardevice();
}
void p90()
{
char ch1[50],ch2[50];
int i=0,f=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 90...");
outtextxy(105,100,"Enter the 1st String..");
gotoxy(35,12);
gets(ch1);
outtextxy(105,200,"Enter the 2nd Substring...");
gotoxy(35,18);
gets(ch2);
outtextxy(105,280,"The Output is -->");
gotoxy(35,23);
for(i=0;;i++)
{
if(ch1[i]!=ch2[i])
{
f=0;
break;
}
if(ch1[i]=='\0'&&ch2[i]!='\0')
{
f=0;
break;
}
if(ch1[i]!='\0'&&ch2[i]=='\0')
{
f=0;
break;
}
if(ch1[i]=='\0'&&ch2[i]=='\0')
break;
}
if(f==0)
printf("UNEQUAL STRINGS......");
else if(f==1)
printf("EQUAL STRINGS.......");
getch();
cleardevice();
}
void p91()
{
int n,i,f=1;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 91...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"The Output is.....");
gotoxy(30,20);
for(i=1;i<=n;i++)
f=f*i;
printf("The Factorial is %d",f);
getch();
cleardevice();
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void p92()
{
int r,c,a[20][20],s=0,i,j;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
outtextxy(220,5,"Program 92...");
outtextxy(49,29,"Enter rows & columns..");
gotoxy(35,3);
scanf("%d%d",&r,&c);
outtextxy(49,57,"Enter the 2d-array...");
gotoxy(35,5);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
settextstyle(SANS_SERIF_FONT,VERT_DIR,7);
outtextxy(50,100,"OUTPUT");
gotoxy(25,9);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
s=s+a[i][j];
}
printf("SUM = %d",s);
getch();
cleardevice();
}
void p93()
{
int n,m;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 93...");
outtextxy(105,100,"Enter the 2 Numbers.....");
gotoxy(38,12);
scanf("%d%d",&n,&m);
outtextxy(105,210,"The Output is......");
gotoxy(30,20);
swap(&m,&n);
printf("1st no. = %d & 2nd no. = %d",n,m);
getch();
cleardevice();
}
void p94()
{
int n,a[10],i=0,j,r;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 94...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"The Output is.....");
gotoxy(30,20);
while(n>0)
{
r=n%10;
a[i]=r;
n=n/10;
i++;
}
printf("THE REVERSE IS ");
for(j=0;j<i;j++)
printf("%d",a[j]);
getch();
cleardevice();
}
void p95()
{
int a,b,c;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 95...");
outtextxy(105,100,"Enter the 3 Numbers.....");
gotoxy(38,12);
scanf("%d%d%d",&a,&b,&c);
outtextxy(105,200,"The Output is.....");
gotoxy(30,20);
if((a>=b&&a<=c)||(a>=c&&a<=b))
printf("2nd Largest no. is %d",a);
else if((b>=a&&b<=c)||(b>=c&&b<=a))
printf("2nd Largest no. is %d",b);
else if((c>=a&&c<=b)||(c>=b&&c<=a))
printf("2nd Largest no. is %d",c);
getch();
cleardevice();
}
void p96()
{
int n,r,m,p,q;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 45...");
outtextxy(85,100,"Enter the value of n & r....");
gotoxy(36,12);
scanf("%d%d",&n,&r);
outtextxy(105,200,"The Output is -->");
gotoxy(25,19);
if(n<r||(n==0&&r==0)||n<0||r<0)
printf("Enter VALID values of n & r!!!!");
else
{
p=fact(n);
m=fact(n-r);
printf("The value of P(%d,%d) is %d....",n,r,p/m);
}
getch();
cleardevice();
}
void p97()
{
int a,b,c;
float r1,r2;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 97...");
outtextxy(85,100,"Enter the value of a,b,c....");
gotoxy(36,12);
scanf("%d%d%d",&a,&b,&c);
outtextxy(105,200,"The Output is -->");
gotoxy(25,19);
if(POWE(b,2)-4*a*c<0)
printf("Equation has Complex Roots.....");
else
{
r1=(-1*b+sqrt(POWE(b,2)-4*a*c))/(1.0*2*a);
r2=(-1*b-sqrt(POWE(b,2)-4*a*c))/(1.0*2*a);
printf("ROOTS are %.1f,%.1f",r1,r2);
}
getch();
cleardevice();
}
void p98()
{
int n,a[20],i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 98...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"Even elements are...");
gotoxy(35,25);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("%d ",a[i]);
}
getch();
cleardevice();
}
void p99()
{
int n,a[20],i,s=0;
float avg;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 99...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"Average of Array is...");
gotoxy(38,25);
for(i=0;i<n;i++)
{
s=s+a[i];
}
avg=(s*1.0)/n;
printf("%.2f",avg);
getch();
cleardevice();
}
void p100()
{
int n,a[20],i;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 100...");
outtextxy(105,100,"Enter the size of array...");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"Enter the array...");
gotoxy(35,18);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
outtextxy(105,300,"The Array is...");
gotoxy(38,25);
for(i=0;i<n;i++)
{
a[i]=a[i]*a[i];
printf("%d ",a[i]);
}
getch();
cleardevice();
}
void p101()
{
int n,a[10],i=-1,j,r,k,temp;
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
outtextxy(220,30,"Program 101...");
outtextxy(105,100,"Enter the Number.....");
gotoxy(38,12);
scanf("%d",&n);
outtextxy(105,200,"The Output is.....");
gotoxy(30,20);
while(n>0)
{
i++;
r=n%10;
a[i]=r;
n=n/10;
}
for(j=1,k=i-1;j<=i/2;j++,k--)
{
temp=a[j];
a[j]=a[k];
a[k]=temp;
}
printf("New Number is ");
for(j=0;j<=i;j++)
printf("%d",a[j]);
getch();
cleardevice();
}
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
page1();
getch();
}
