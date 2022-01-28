#include <stdio.h>
void addTen(int *x)
{
    *x += 10;

}
void printArray(char *s){
    for (char *p = s; *s != '\0'; p++){
        printf("[%p] = %c\n", p, *p);
    }
}
void encrypt(char *s)
{
    for (char *p = s; *p != '\0' ; p++){
        *p += 1;
    }
}
int main(){
    //char s[100];
    //scanf("%s" , s); // => &s[0]
    //printArray(s);
    //encrypt(s);
    //printf("------");
    //printArray(s);

    int x = 100;
    int *ptr = x;
    printf("reference of x = %p\n", &x);
    *ptr = 10000;
    
    
    //int x = 100;
    //printf("x = %d\n", x);
    //addTen(&x);
    //printf("x = %d\n", x);
    //int *ptr = &x;     //pointer เก็บ address เท่านั้น เอาไว้ชี้เท่านั้น ตัวแปร ptr ชี้ไปที่ pointer ของ x

    //printf("reference x = %p\n", &x);
    //printf("value of pointer ptr = %p\n", ptr);
    //printf("reference of pointer ptr = %p\n",&ptr);
    //printf("value of reference ptr = %d\n", *ptr);

    //*ptr += 10;
    //x += 20;

    //printf("x = %d\n", x);
}