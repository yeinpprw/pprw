#include <stdio.h>   //เอาไว้รับข้อมูล
#include <stdlib.h>  //เอาไว้แปลง
int main()
{
    char str_i[10];
    char str_f[10];
    char str_l[10];
    //char str[10];                 จองเนื้อที่ 10 ช่อง ถ้าจะจองให้จองเผื่อไว้อย่างน้อย 2 ตัว เพราะมันจะเก็บได้ไม่เต็ม
    //gets(str);                    gets รับinputทั้งบรรทัด   
    //fgets(str, 10, stdin);        fgets(char [array},ขนาดbuffer น้อยกว่าหรือเท่ากับ size ของขนาด array,อ่านไฟล์ที่ไหน)
    //printf("input - %s", str);
    printf("enter i: ");
    fgets(str_i, 10, stdin);
    printf("enter f: ");
    fgets(str_f, 10, stdin);
    printf("enter l: ");
    fgets(str_l, 10, stdin);

    
    
    //printf("%s - %s - %s", str_i, str_f, str_l);
    int i = atoi(str_i);
    float f = atof(str_f);
    long l = atol(str_l);              //ฟังค์ชั่น array to (...) return ค่ากลับต้องสร้างตัวแปรมารับ

    printf("%d - %.2f - %ld", i , f, l);

    int found = 0;
    float q = 0.0;
    char c = '\0';    //False
    
    int isExist = 1;
    char test[10] = "";  //True

    // kong => ['k', 'o', 'n', 'g', '\0']

    printf("enter i: ");
    fgets(str_i, 10, stdin);
    int i =atoi(str_i);
    // relational operator > >= < <= == !=
    //logical operator &&(and), ||(or), !(not)

    if (i > 100){
        printf("if %d", i > 100);
    }else if (i <= 100 && i > 20){
        printf("else if %d", i <= 100 && i > 20);

    }else{
        printf("else %d, %d", i > 100, i <= 100 && i > 20);
    }
    
        
    





}






// ./(ชื่อไฟล์) เป็นการ execute file เหมือนการ double click