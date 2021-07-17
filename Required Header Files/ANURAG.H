void page1();void page2();void page3();void p1();void p2();void p3();void p4();void p5();void p6();void p7();void p8();void p9();void p10();void p11();void p12();void p13();
void page4();void p14();void p15();void p16();void p17();void p18();void p19();void p20();
void page5();void p21();void p22();void p23();void p24();void p25();void p26();
void page6();void p27();void p28();void p29();void p30();void p31();
void page7();void p32();void p33();void p34();void p35();void p36();void p37();
void page8();void p38();void p39();void p40();void p41();void p42();
void page9();void p43();void p44();void p45();void p46();void p47();void p48();void p49();
void page10();void p50();void p51();void p52();void p53();
void page11();void p54();void p55();void p56();void p57();
void page12();void p58();void p59();void p60();void p61();
void page13();void p62();void p63();void p64();void p65();void p66();void p67();void p68();void p69();void p70();
void page14();void p71();void p72();void p73();void p74();void p75();void p76();void p77();void p78();void p79();
void page15();void p80();void p81();void p82();void p83();void p84();void p85();void p86();void p87();void p88();
void page16();void p89();void p90();void p91();void p92();void p93();void p94();void p95();void p96();void p97();
void page17();void p98();void p99();void p100();void p101();
char c;
void page1()
{
int i=2;
setbkcolor(BLACK);
setcolor(WHITE);
setlinestyle(CENTER_LINE,1,1);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
setcolor(WHITE);
outtextxy(220,30,"WELCOME");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(105,100,"Here are the operations you can perform -->");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
while(1)
{
setcolor(i);
outtextxy(160,140,"1.Display an integer array.");
outtextxy(160,180,"2.Display min,max of an array.");
outtextxy(160,220,"3.Display sum of an array.");
outtextxy(160,260,"4.Rotation of 2-d array at 90 degree clockwise.");
outtextxy(160,300,"5.Display sum of odd and even elements of array.");
outtextxy(160,340,"6.Display sum of prime no. in an array.");
setcolor(WHITE);
outtextxy(105,380,"Press respective sno. to perform and to move to next");
outtextxy(150,420,"page press any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p1();page1();break;
case'2':p2();page1();break;
case'3':p3();page1();break;
case'4':p4();page1();break;
case'5':p5();page1();break;
case'6':p6();page1();break;
case'e':closegraph();exit();
default:page2();
}
}
void page2()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Searching of an element in array.");
outtextxy(40,70,"2.Find the frequency of each element of an array.");
outtextxy(40,110,"3.Display elements of an array which are greater than");
outtextxy(60,130,"the mean of array.");
outtextxy(40,170,"4.Merging of the two given integer arrays.");
outtextxy(40,210,"5.Rearrangement of array such that all -ve elements");
outtextxy(60,230,"come before all +ve elements.");
outtextxy(40,270,"6.Program performing the following task in an array -->");
outtextxy(130,300,"I/P-:a[ ]={1,2,3,1,3,4,6,7,2,1,5}");
outtextxy(120,330,"O/P-:a[ ]={1,2,3,4,6,7,5,1,2,1,3}");
outtextxy(40,370,"7.Display total no. of consonants in a string.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p7();page2();break;
case'2':p8();page2();break;
case'3':p9();page2();break;
case'4':p10();page2();break;
case'5':p11();page2();break;
case'6':p12();page2();break;
case'7':p13();page2();break;
case'p':page1();break;
case'e':closegraph();exit();
default:page3();
}
}
void page3()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Display total no. of uppercase and lowercase");
outtextxy(60,50,"characters in a String.");
outtextxy(40,90,"2.Display total no. of words in a String.");
outtextxy(40,130,"3.Program removing spaces in printing of a");
outtextxy(60,150,"String.");
outtextxy(40,190,"4.Program to replace a given character by another");
outtextxy(60,210,"given character in a String.");
outtextxy(40,250,"5.Program converting uppercase character to");
outtextxy(60,270,"lowercase character & vice versa in a string.");
outtextxy(40,310,"6.Program to reverse a string without spaces.");
outtextxy(40,350,"7.Program to reverse a string word wise.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p14();page3();break;
case'2':p15();page3();break;
case'3':p16();page3();break;
case'4':p17();page3();break;
case'5':p18();page3();break;
case'6':p19();page3();break;
case'7':p20();page3();break;
case'p':page2();break;
case'e':closegraph();exit();
default:page4();
}
}
void page4()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program doing following task in a String ---> ");
outtextxy(130,60,"I/P:-This Is A Pen");
outtextxy(120,90,"O/P:-Uijt Jt B Qfo");
outtextxy(40,130,"2.Program to remove multiple spaces by single space ");
outtextxy(60,150,"in a String.");
outtextxy(40,190,"3.Program to print the string as follows ---->");
outtextxy(60,210,"AMIT--->AMIT; AMIT KUMAR--->A.KUMAR; & so on.");
outtextxy(40,250,"4.Program to concatenate 2 given Strings.");
outtextxy(40,290,"5.Program to find out whether the inputted substring");
outtextxy(60,310,"is a part of given String or not.");
outtextxy(40,350,"6.Program to insert an element in an array at given ");
outtextxy(60,370,"index.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p21();page4();break;
case'2':p22();page4();break;
case'3':p23();page4();break;
case'4':p24();page4();break;
case'5':p25();page4();break;
case'6':p26();page4();break;
case'p':page3();break;
case'e':closegraph();exit();
default:page5();
}
}
void page5()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to shift an element at given index to the");
outtextxy(60,50,"end of the integer Array.");
outtextxy(40,90,"2.Program counting the frequency of a given Substring");
outtextxy(60,110,"in a given String.");
outtextxy(40,150,"3.Program finding the groups of 2 elements in an");
outtextxy(60,170,"integer array whose sum is equal to the given ");
outtextxy(60,190,"element k.For example-:");
outtextxy(130,210,"I/P:-Arr[]={1,2,3,4,1} and K=3");
outtextxy(120,230,"O/P:-(1,2) (2,1)");
outtextxy(40,270,"4.Program to find out the sum of digits present in");
outtextxy(60,290,"an inputted String.");
outtextxy(40,330,"5.Program to sort a string alphabetically ignoring");
outtextxy(60,350,"the cases of the characters.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p27();page5();break;
case'2':p28();page5();break;
case'3':p29();page5();break;
case'4':p30();page5();break;
case'5':p31();page5();break;
case'p':page4();break;
case'e':closegraph();exit();
default:page6();
}   
}
void page6()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to sort an integer array of size n by using");
outtextxy(60,50,"BUBBLE SORT technique in Ascending order.");
outtextxy(40,90,"2.Program to sort an integer array of size n by using");
outtextxy(60,110,"SELECTION SORT technique in Descending order.");
outtextxy(40,150,"3.Program to sort an integer array of size n by using");
outtextxy(60,170,"INSERTION SORT technique in Ascending order.");
outtextxy(40,210,"4.Program to print the fibonacci series of numbers i.e.");
outtextxy(130,230,"0,1,1,2,3,5,8,13,21,34,55.......");
outtextxy(40,270,"5.Program to print the fibonacci strings i.e.");
outtextxy(130,290,"a,bc,abc,bcabc,abcbcabc,bcabcabcbcabc........");
outtextxy(40,330,"6.Program to find out whether the inputted number");
outtextxy(60,350,"is a factorial of a number or not.");
setcolor(WHITE
);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p32();page6();break;
case'2':p33();page6();break;
case'3':p34();page6();break;
case'4':p35();page6();break;
case'5':p36();page6();break;
case'6':p37();page6();break;
case'p':page5();break;
case'e':closegraph();exit();
default:page7();
}   
}
void page7()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to find out whether the inputted number is");
outtextxy(60,50,"a term of fibonacci series or not.");
outtextxy(40,90,"2.Program to remove all the duplicates from a String.");
outtextxy(40,130,"3.Program to create an user defined atoi() function.");
outtextxy(60,150,"Example 1-: I/P=\"COMPUTER PROJECT\";O/P=0");
outtextxy(60,170,"Example 2-: I/P=\"12345\";O/P=12345");
outtextxy(60,190,"Example 3-: I/P=\"1234COMPUTER 123\";O/P=1234");
outtextxy(60,210,"Example 4-: I/P=\"COMPU1234 P123\";O/P=0");
outtextxy(40,250,"4.Program to reverse a String like below ---->");
outtextxy(60,270,"Example-:I/P=\"This is my pen\"");
outtextxy(60,290,"         O/P=\"pen my is This\"");
outtextxy(40,330,"5.Program to replace duplicates in an integer array");
outtextxy(60,350,"by 0 & shift them to end of array. ");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p38();page7();break;
case'2':p39();page7();break;
case'3':p40();page7();break;
case'4':p41();page7();break;
case'5':p42();page7();break;
case'p':page6();break;
case'e':closegraph();exit();
default:page8();
}
}
void page8()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to print those words in a sentence that");
outtextxy(60,50,"are PALINDROMES.");
outtextxy(40,90,"2.Program to replace alphabets in a String as below -->");
outtextxy(130,110,"A,a-->1;B,b-->2;C,c-->3 and so on.....");
outtextxy(40,150,"3.Program to calculate the value of C(n,r).");
outtextxy(40,190,"4.Program to insert a given substring at the desired");
outtextxy(60,210,"position in a String using POINTERS.");
outtextxy(40,250,"5.Program to calculate the inverse of a 3X3 MATRIX.");
outtextxy(40,290,"6.Program to print the ASCII values of all Characters.");
outtextxy(40,330,"7.Program to swap the elements of an array which are");
outtextxy(60,350,"multiples of 10 to the very next element.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p43();page8();break;
case'2':p44();page8();break;
case'3':p45();page8();break;
case'4':p46();page8();break;
case'5':p47();page8();break;
case'6':p48();page8();break;
case'7':p49();page8();break;
case'p':page7();break;
case'e':closegraph();exit();
default:page9();
}
}
void page9()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to print the following pattern -->");
outtextxy(130,50,"*");
outtextxy(130,70,"*  *");
outtextxy(130,90,"*  *  *");
outtextxy(40,130,"2.Program to print the following pattern -->");
outtextxy(130,150,"*  *  *");
outtextxy(130,170,"*  *");
outtextxy(130,190,"*");
outtextxy(40,230,"3.Program to print the following pattern -->");
outtextxy(130,250,"a");
outtextxy(130,270,"a  b");
outtextxy(130,290,"a  b  c");
outtextxy(40,330,"4.Program to print the following pattern -->");
outtextxy(130,350,"a  b");
outtextxy(130,370,"a");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p50();page9();break;
case'2':p51();page9();break;
case'3':p52();page9();break;
case'4':p53();page9();break;
case'p':page8();break;
case'e':closegraph();exit();
default:page10();
}    
}
void page10()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to print the following pattern -->");
outtextxy(130,50,"a");
outtextxy(130,70,"b  b");
outtextxy(130,90,"c  c  c");
outtextxy(40,130,"2.Program to print the following pattern -->");
outtextxy(130,150,"c  c  c");
outtextxy(130,170,"b  b");
outtextxy(130,190,"a");
outtextxy(40,230,"3.Program to print the following pattern -->");
outtextxy(130,250,"1");
outtextxy(130,270,"1  2");
outtextxy(130,290,"1  2  3");
outtextxy(40,330,"4.Program to print the following pattern -->");
outtextxy(130,350,"1  2");
outtextxy(130,370,"1");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p54();page10();break;
case'2':p55();page10();break;
case'3':p56();page10();break;
case'4':p57();page10();break;
case'p':page9();break;
case'e':closegraph();exit();
default:page11();
} 
}
void page11()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to print the following pattern -->");
outtextxy(130,50,"1");
outtextxy(130,70,"2  2");
outtextxy(130,90,"3  3  3");
outtextxy(40,130,"2.Program to print the following pattern -->");
outtextxy(130,150,"3  3  3");
outtextxy(130,170,"2  2");
outtextxy(130,190,"1");
outtextxy(40,230,"3.Program to print the following pattern -->");
outtextxy(130,250,"     1");
outtextxy(130,270,"   1 2");
outtextxy(130,290," 1 2 3");
outtextxy(40,330,"4.Program to print the following pattern -->");
outtextxy(130,350,"  *");
outtextxy(130,370,"*   *");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p58();page11();break;
case'2':p59();page11();break;
case'3':p60();page11();break;
case'4':p61();page11();break;
case'p':page10();break;
case'e':closegraph();exit();
default:page12();
}    
}
void page12()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to print the Diamond.");
outtextxy(40,70,"2.Program to find out the second largest from an Array.");
outtextxy(40,110,"3.Program to find out Determinant of a 3X3 MATRIX.");
outtextxy(40,150,"4.Program to find out Adjoint of a 3X3 MATRIX.");
outtextxy(40,190,"5.Program to check whether the no. is ARMSTRONG or not.");
outtextxy(40,230,"6.Program to check whether the no. is NEON or not.");
outtextxy(40,270,"7.Program to find out the TRACE of MATRIX.");
outtextxy(40,310,"8.Program to print the diagonals of a MATRIX.");
outtextxy(40,350,"9.Program to find out the Transpose of a MATRIX.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p62();page12();break;
case'2':p63();page12();break;
case'3':p64();page12();break;
case'4':p65();page12();break;
case'5':p66();page12();break;
case'6':p67();page12();break;
case'7':p68();page12();break;
case'8':p69();page12();break;
case'9':p70();page12();break;
case'p':page11();break;
case'e':closegraph();exit();
default:page13();
}    
}
void page13()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to reverse an integer Array.");
outtextxy(40,70,"2.Program to convert DECIMAL to BINARY.");
outtextxy(40,110,"3.Program to convert BINARY to DECIMAL.");
outtextxy(40,150,"4.Program to convert DECIMAL to OCTAL.");
outtextxy(40,190,"5.Program to convert OCTAL to DECIMAL.");
outtextxy(40,230,"6.Program to check whether the no. is PALINDROME or not.");
outtextxy(40,270,"7.Program to print PALINDROME numbers from an Array.");
outtextxy(40,310,"8.Program to find out total no. of vowels in a STRING.");
outtextxy(40,350,"9.Program to find out total no. of digits in a STRING.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p71();page13();break;
case'2':p72();page13();break;
case'3':p73();page13();break;
case'4':p74();page13();break;
case'5':p75();page13();break;
case'6':p76();page13();break;
case'7':p77();page13();break;
case'8':p78();page13();break;
case'9':p79();page13();break;
case'p':page12();break;
case'e':closegraph();exit();
default:page14();
}    
}
void page14()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to find no. of Special characters in a STRING.");
outtextxy(40,70,"2.Program to check whether the no. is Prime or not.");
outtextxy(40,110,"3.Program to find H.C.F. of two numbers.");
outtextxy(40,150,"4.Program to find L.C.M. of two numbers.");
outtextxy(40,190,"5.Program to print Armstrong numbers from an Array.");
outtextxy(40,230,"6.Program to print Neon numbers from an Array.");
outtextxy(40,270,"7.Program to print Prime numbers from an Array.");
outtextxy(40,310,"8.Program to find sum of digits of a Number.");
outtextxy(40,350,"9.Program to find total no of digits in a Number.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p80();page14();break;
case'2':p81();page14();break;
case'3':p82();page14();break;
case'4':p83();page14();break;
case'5':p84();page14();break;
case'6':p85();page14();break;
case'7':p86();page14();break;
case'8':p87();page14();break;
case'9':p88();page14();break;
case'p':page13();break;
case'e':closegraph();exit();
default:page15();
}    
}
void page15()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to copy one string to another STRING.");
outtextxy(40,70,"2.Program to compare two Strings.");
outtextxy(40,110,"3.Program to find factorial of a NUMBER.");
outtextxy(40,150,"4.Program to find sum of elements of a Matrix.");
outtextxy(40,190,"5.Program to swap two numbers.");
outtextxy(40,230,"6.Program to print reverse of a Number.");
outtextxy(40,270,"7.program to find 2nd largest among three numbers.");
outtextxy(40,310,"8.Program to calculate value of P(n,r).");
outtextxy(40,350,"9.Program to calculate roots of a Quadratic Equation.");
setcolor(WHITE);
outtextxy(80,400,"Press respective sno. to perform and to move to");
outtextxy(80,420,"previous page press p & for next page press ");
outtextxy(150,440,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p89();page15();break;
case'2':p90();page15();break;
case'3':p91();page15();break;
case'4':p92();page15();break;
case'5':p93();page15();break;
case'6':p94();page15();break;
case'7':p95();page15();break;
case'8':p96();page15();break;
case'9':p97();page15();break;
case'p':page14();break;
case'e':closegraph();exit();
default:page16();
}    
}
void page16()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
while(1)
{
setcolor(i);
outtextxy(40,30,"1.Program to print Even elements from an Array.");
outtextxy(40,70,"2.Program to print Average of an Array.");
outtextxy(40,110,"3.Program to replace elements of an Array by its Square.");
outtextxy(40,150,"4.Program to swap 1st and last digits of a Number.");
outtextxy(250,200,"xxxxxxxxx");
setcolor(WHITE);
outtextxy(80,240,"Press respective sno. to perform and to move to");
outtextxy(80,260,"previous page press p & for continue press");
outtextxy(150,280,"any other key & for exit press e..");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
switch(c)
{
case'1':p98();page16();break;
case'2':p99();page16();break;
case'3':p100();page16();break;
case'4':p101();page16();break;
case'p':page15();break;
case'e':closegraph();exit();
default:page17();
}
}
void page17()
{
int i=2;
setcolor(WHITE);
rectangle(1,1,637,477);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
while(1)
{
setcolor(i);
outtextxy(250,200,"THANKS.");
i++;
if(i>6)
i=2;
if(kbhit())
break;
delay(1000);
}
c=getch();
cleardevice();
setcolor(WHITE);
rectangle(1,1,637,477);
setcolor(CYAN);
if(c=='p')
page16();
else
{
closegraph();
exit(0);
}
}
