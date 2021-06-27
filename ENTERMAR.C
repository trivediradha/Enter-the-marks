#include<stdio.h>
#include<conio.h>
void main()
{
float marks;
char grade;
printf("Enter marks: ");
scanf("%f",&marks);
if(marks>=90)
{
grade = 'A';
}
else if(marks>=80 && marks)
{
grade = 'B';
}
else if(marks>= 70 && marks)
{
grade = 'C';
}
else if (marks>= 60 && marks)
{
grade = 'D';
}
else if(marks>= 50 && marks)
{
grade = 'E';
}
else
{
grade = 'F';
}
printf("Your grade is %c",grade);
getch();
}



