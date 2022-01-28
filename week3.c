#include <stdio.h>
// variable
//int j, l;

// function header
// ReturnType fuctionName(parameter {........... return....}
//int addTen(int x)
//{
//    x += 10;
//    return x;
//}
// Function Prototype
int addTen(int x){             //ประกาศแล้วเขียน function ข้างล่าง
    printf("addTen x : %d", x);
    x += 10;
    printf("after added addTen x : ", x);
    return x;           

    
} 
int addTwenty(){
    printf("addTwenty x = %d\n", x);
    x += 20;
    printf("after added addTwenty x = %d\n", x)
    return x;
}  
int addThirty(int x){
    printf("addThirty x = %d\n", x);
    int x  = 200;
    x = x + 30
    printf("after added addThirty x = %d\n", x);
    return x;
}

int main(){

    int x = 100;
    int y = addTen(x);
    printf("In main x = %d, y = %d\n", x, y);
    int z = addTwenty();
    printf("In main2 x= %d, y = %d, z = %d\n", x, y, z);
    y = addThirty(z);
    printf("In main3 x = %d, y = %d, z = %d\n", x, y, z);)

    //int i = 0, k = 0;           //สร้างตัวแปรนับรอบ ตัวแปร local ต้องกำหนดค่าเริ่มต้นเสมอ
    //while (i < 10){      //loop while 

    //    printf("%d\n", i);
    //    i += 1;           //ตัวแปรนับรอบลูปเพิ่มตัวเอง
    //}

    //while (1){            //infinite loop
    //    printf("%d\n", i);
    //    i += 1;
    //}

    //for (int i = 0; i < 10; i += 0){         //for(ค่าเริ่มต้น; เงื่อนไขในการจบลูป; อัพเดทค่าตัวแปร)
    //    printf("%d\n", i);

    //}
    int x = 100;
    int y = addTen(x);    

}
int addTen(int x){
    x += 10;
    return x;
}