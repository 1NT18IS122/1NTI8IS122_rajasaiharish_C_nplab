#include<stdio.h>
#include<conio.h>
#include<string.h>
char data[20][20];
int n;
void main()
{
int i,ch,j;
char tmp[20][20];
clrscr();
printf("Enter the number of frames:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i!=0)
{
printf("frame%d:",i);
fflush(stdin);
gets(data[i]);
}
}
/*saving frame with count and data*/
for(i=0;i<=n;i++)
{
tmp[i][0]=49+strlen(data[i]);
tmp[i][1]='\0';
  strcat(tmp[i],data[i]);
}
printf("\n\t\tAT THE SENDER:\n");
printf("Data as frames:\n");
for(i=1;i<=n;i++)
{
printf("Frame%d:",i);
puts(tmp[i]);
}
printf("Data transmitted:");
for(i=1;i<=n;i++)
printf("%s",tmp[i]);
printf("\n\t\tAT THE RECEIVER\n");
printf("The data received:");
for(i=1;i<=n;i++)
{
ch=(int)(tmp[i][0]-49);
for(j=1;j<=ch;j++)
data[i][j-1]=tmp[i][j];
data[i][j-1]='\0';
}
printf("\n The data after removing count char:");
for(i=1;i<=n;i++)
printf("%s",data[i]);
printf("\n The data in frame form:\n");
for(i=1;i<=n;i++)
{
printf("Frame%d:",i);
puts(data[i]);
}
