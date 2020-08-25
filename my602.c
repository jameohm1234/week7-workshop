/*Program Name : program to Start
Auther : Mr.saksit kumkeaw
Date : 8/18263
*/
#include<stdio.h>//link sectiob : from library stdio.h
void message();//function prototype declaration section
void cat();//function prototype declaration section
void main(){
    int animal=5;//Variable declaration
    printf("Hello world\n");//Executetable part
    printf("%i",animal);//Executetable part
    message();//Function call
    cat();//Function call
}
//Sub function : message
void message(){
    printf("We can take mor sub function\n");
}
//Sub function : cat
void cat(){
    printf("I Love My Cat\n");
}