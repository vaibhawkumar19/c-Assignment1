/*WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format � �HH:MM�
Output format � �HH hour and MM Minute�
Example �
�11:25� converted to �11 Hour and 25 Minute�*/
//Author name:- vaibhaw Kumar
#include<stdio.h>
int main()
{
	int hh,mm;
	printf("HH:MM ");
	scanf("%d %d",&hh,&mm);
	printf("%d Hour and %d Minute",hh,mm);
	return 0;
}
