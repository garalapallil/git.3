# include<stdio.h>
# include<string.h>
void encrypt(char [],int d);
void decrypt(char [],int g);
int main()
{
char a[100];
scanf("%s",a);
int k,i,flag;
scanf("%d",&k);
encrypt(a,k);
decrypt(a,k);}
void encrypt(char a[],int k){
int i,flag,n;
n=strlen(a);
for(int i=0;i<n;i++)
{
flag=3;
if(a[i]<=127 && a[i]>=32){
if( a[i]>=65 && a[i]<=90){
flag=1;
a[i]=a[i]-65;}
if(a[i]>=97 && a[i]<=122){
flag=0;a[i]=a[i]-97;}
if (flag==1)
{a[i]=((a[i]+k)%26);
a[i]=a[i]+65;}
if(flag==0)
{a[i]=((a[i]+k)%26);
a[i]=a[i]+97;}
}
}
printf("%s\n",a);
}
void decrypt(char a[],int k)
{
int i,flag,n;
n=strlen(a);
for(int i=0;i<n;i++)
{
flag=3;
if(a[i]<=127 && a[i]>=32){
if( a[i]>=65 && a[i]<=90){
flag=1;a[i]=a[i]-65;
}
if(a[i]>=97 && a[i]<=122)
{flag=0;a[i]=a[i]-97;
}
if (flag==1)
{
a[i]=((a[i]-k)%26);
a[i]=a[i]+65;}
if(flag==0)
{
a[i]=((a[i]-k)%26);
a[i]=a[i]+97;
}
}
}
printf("%s\n",a);
}
