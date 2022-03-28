#include <stdio.h>
#include <string.h>
#include <stdint.h>



typedef struct  {
    char c1;
    int i[3];
    char c2;

}stu_d;



typedef struct {
    char c;
     stu_d а;
}stu_c ;



int main(){
    

    printf("%ld\n", sizeof(stu_c));

}




