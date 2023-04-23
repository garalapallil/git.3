#include<stdio.h>
#include<string.h>

struct student{
int roll_no;
char name[30];
int age;
char address[40];
};

void checkage(struct stuent[],int n){
printf("students whose age is 14\n");
for(int i+0; i<n; i++) {
if(stud[i].age ==14) {
printf("name : %s\n",stud[i].name);
}
}
}

 void checkroll(struct student stud[],int n){
 printf("students with even roll no. \n0;
 for(int i=0;i<n;i++){
 if (stud [i].roll_no% ==){
 printf("name :%s\n", stud[i].name);
 }
 }
 }
 
 void getdatails(struct student stud[],int n){
 printf("enter rollno.\n");
 int roll;
 scanf("%d",&roll);
 printf("student details with given roll no.");
 for(int i=0;i<n;i++){
 if (stud[i].roll_no == roll){
 printf("rollno. : %d\n",stud[i].roll_no);
 printf("name ;%s\n",stud[i].name);
 printf("age ; %d\n",stud[i].age);
 printf("address ; %s\n",stud[i].address);
 }
 }
 }
 
 int main() {
 int n;
 
 printf("enter number of students"0;
 scanf ("%d",&n);
 
 struct student stud[n];
 for(int i=0;i<n;i++){
 printf ("student %d\n",i+1);
 printf("enter roll no"\n);
 scanf("%d",&stud[i].roll_no);
 printf("enter name:\n);
 scanf("%s",stud[i].name);
 printf("enter age:\n");
 scanf("%d",&stud[i].age);
 printf("enter address:\n");
 scanf("%s",stud[i].address);
 }
 
 return 0;
 }
