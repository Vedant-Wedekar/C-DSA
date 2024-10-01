#include<stdio.h>
#include<conio.h>
void main()
{
	int e0,e1,e2,e3,d0,d1;
	clrscr();
	for(e0=0;e0<2;e0++)
	{
	for(e1=0;e1<2;e1++)
	{
	for(e2=0;e2<2;e2++)
	{
	for(e3=0;e3<2;e3++)
	{
d0=e0||e1;
d1=e0||e2;
if((e0+e1+e2+e3) == 1){
printf("%d %d %d %d %d %d\n",e0,e1,e2,e3,d0,d1);
}
}
}
}
}
getch();
}