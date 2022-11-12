//แบบฝึกหัดที่ 1 ข้อ 1.3

#include <stdio.h>

int main(){
    int inc, value;
    inc = 20;

    value = inc++;
    printf("%d\n", value);

    value = ++inc;
    printf("%d\n", value);
    
    return 0;
}
