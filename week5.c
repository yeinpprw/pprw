#include <stdio.h>
int main()
{
    //int a = 100;
    //int b = 0144;
    //int c = 0x64;
    //printf("%d %d %d", a, b, c);
    //int x = 100;
    //printf("value of x is %d\n", x);
    //printf("reference of x is %lu\n", &x);
    //printf("reference of x is hexadecimal is %p\n", &x);

    //int data[4] = {ึ7, 8, 9, 10};        //ประกาศตัวแปร array ต้องกำหนดขนาดตัวแปร
    //printf("value of data[0] is %d\n", data[0]);
    //printf("reference of data[0] is %p\n", &data[0]);
    //printf("reference of data is %p\n", data);

    





    // int *arrPtr = data;
    // int *ptr;
    // ptr = &x;
    //printf("x is %d\n", x);
    //printf(" reference of x is %p\n", &x);
    //printf("ptr is %p\n", ptr);
    //printf*"dereferencing ptr %d\n", *ptr);

    //int x = 100;              //ตัวแปรธรรมดาเก็บค่า
    //int *ptr = &x;            //ตัวแปร pointer เก็บ address
    //int *arrPtr = data;
    //int y = 1000;
    //&x = &y;                  //ไม่สามารถเปลี่ยน address ใน memory ได้

    //printf("arrPtr = %p\n", arrPtr);
    //x += 1;
    // x = 101
    //arrPtr += 100;
    //printf("arrptr = %p\n", arrPtr);
    //printf("*arrPtr = %d\n", *arrPtr);
    //*arrPtr = 100;
    //printf("arrptr = %p\n", arrPtr);
    //printf("*arrPtr = %d\n", *arrPtr);

    //arrPtr++;
    //printf("arrptr = %p\n", arrPtr);
    //printf("*arrPtr = %d\n", *arrPtr);

    //int data[4] = {7, 8, 9, 10};           //วนลูป

    //for (int *p = data; p < &data[4]; p++){
    //    printf("[%p] = %d\n", p, *p);
    //}
    //for (int i = 0; i < 4 ; i++){
    //    printf("data[%d] = data[%d]\n", i, data[i]);
    //}

    //int i;
    char s[100];
    //char c;
    //scanf("%d", &i);
    //scanf("\n%c", &c);
    //printf("%c-%d\n", c, i);
    scanf("%s", s);

    for (char *p = s; *p != '\0'; p++){
        printf("[%p] = %c\n", p, *p);
    }

}