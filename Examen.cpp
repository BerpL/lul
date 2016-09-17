#include<stdio.h>

int reverse(char *a);
int strindex(char a[],char t);
int lower(int may);
main()
{
  char a[5];
  a[0] = 'H';
  a[1] = 'A';
  a[2] = 'L';
  a[3] = 'A';
  a[4] = '\0';
  printf("\n%c", lower('A'));
  printf("\n%d", strindex(a,'L'));
  reverse(a);
  printf("\n%s", a);

}
int lower(int may){
    return may+32;
}
int strindex(char *a, char t)
{
    int i = 0, j = 0;

    while(*a){
        if (*a==t){
            j=i;
        }
        i++;
        a++;
    }
    return j;
}
int reverse(char *a)
{
   if(*a!='\0')
   {
     reverse(a+1);
   }
   //printf("%c",*a);
}