/*แบบฝึกหัด 1 ข้อ 2.1-2.5
มีการใช้ if statment ผสม
โปรดพิมพ์เลขข้อโดยไม่ใส่จุดเช่น 2.1 = 21 เป็นต้น*/

#include <stdio.h>

int main(){
int a,b,c,y,s;
float d;

a = 5;
b = 3;
c = 2;
d = 0.5;

printf("Choose your equation :");
scanf("%d", &s);

if (s == 21)
{
    y = a * b + c ;
    printf("Answers is : %d", y);
}
if (s == 22)
{
    y = b + c * b;
    printf("Answers is : %d", y);
}
if (s == 23)
{
    y = a * a + b * b + c * c;
    printf("Answers is : %d", y);

}
if (s == 24)
{
    y = c % 5;
    printf("Answers is : %d", y);
}
if (s == 25)
{
    y = a / c ;
    printf("Answers is : %d", y);
}
if (s == 26)
{
    y = a / d;
    printf("Answers is : %d", y);
}
return 0;
}
