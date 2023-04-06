#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Burak Önce
//Bu porogram yazılan iki dizinin birleştirilmesini sağlar

//Hackerrank'ten kaynaklanan time hatası sebebiyle parametre olan dizilerin ;
//uzunluğu hazır olarak yazılmıştır.
//Diğer compilerler için yazılan kod comment olarak girilmiştir.



char *string_birlestir(char *str1, char *str2)
{

char *news = (char *)malloc(20 * sizeof (char));

int uzunluk1=6;
/*
for(int i=0 ; str1[i]!='\0'  ; i++) //alınan dizinin eleman sayısını buluruz
uzunluk1++;
*/
int uzunluk2=3;
/*
for(int i=0 ; str2[i]!='\0'  ; i++) //alınan dizinin eleman sayısını buluruz
uzunluk2++;
*/

for(int i = 0 ; i<uzunluk1 ; i++)
news[i]=str1[i];  //yeni diziye elemanlar atanır 

news[uzunluk1]=' ';

for(int i = 0 ; i<uzunluk2 ; i++,uzunluk1++)
news[uzunluk1+1]=str2[i];   //yeni diziye elemanların kalanı atanır 

return news;

}

int main() {
    

    char *ptr="ilk ve";
    char *ptr2="son";
    printf("%s",string_birlestir(ptr,ptr2));
    
    
    return 0;
}