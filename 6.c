//WAP to print the name of the user in double quotes.
//Expected output format – “Hello , Amit Kumar”

#include<stdio.h>
#include<string.h>
int main()
{
  char a[30];
  printf("Enter your Name\n");
  gets(a);
  printf("\"Hello , %s \"",a);
  return 0; 
}