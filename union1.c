#include<stdio.h>
#include<string.h>
struct student 
{
    int id ;
    int marks;
    char fav_char;
    char name[34]; 
};
int main()
{
    struct student s1;
    s1.id=1;
    s1.marks =45;
    s1.fav_char='u';
    strcpy(s1.name , "Harry");
    printf("The id  is %d \n" , s1.id);
    printf("The  marks is %d \n" , s1.marks);
    printf("The  fav_c is %c \n" , s1.fav_char);
    printf("The  name is %s \n" , s1.name);
     
     //Now convert this structure in union.
     //And observe changes in next program.

}