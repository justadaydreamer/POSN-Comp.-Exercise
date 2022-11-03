// แบบฝึกหัดที่ 1 ข้อที่ 1.4 
//มีการใช้ ฟังก์ชั่น scanf() ผสม
#include <stdio.h>

int main(){
    float radius, area , circumference;
    #define PI 3.14

    printf("Radius :");
    scanf("%f", &radius);

    area = PI*radius*radius;
    circumference = 2*PI*radius;
    
    printf("The area and circumference : \n");
    printf("%f\t%f\n", area,circumference);
}
