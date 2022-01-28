#include <stdio.h> 
#define M_PI 3.1415 //ประกาศค่าคงที่  
//data_type char,,int,long (จน.เต็ม) ไม่มี data type string
//data_type float,double (ทศนิยม) 
int a = 10;
double b = 12.5;
int c = -20;
unsigned int d = 1000; //เก็บได้เฉพาะค่าบวก
char e = 'A'; //65 
char name[] = "kong"; //ทุก type สามารถทำเป็น array ได้หมด
int main()    //scope ในภาษา c ดูจากปีกกา
{
    a = a + 50;
    int ch = 'A' + 10;                             
    printf("Hello World!");   //จบหนึ่งคำสั่งต้องปิดด้วย ; เสมอ
    printf("a = %d, b = %lf\n", a, b);
    printf("c = %u, d = %c", d, e);
    printf("ch = %d", ch);

    int e = 1.0/2; 
    float r = 1/2.0; 
    printf("e = %d, r = %f", e, r);

    int t = 9%20;
    printf("t = %d", t);

    printf("name = %s", name);



}


//รันไฟล์ด้วยการพิมพ์ gcc (ชื่อไฟล์) -o (ชื่อoutput) จะได้ไฟล์ exe ออกมา
//ภาษา c ต้องบอก type ให้กับทุกอย่าง



