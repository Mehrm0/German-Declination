/*Eine C Kode, der die übungen über die Deklination förder
t.*/ 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"alle_adj.h"
/*struct block
{
char  get[7];
bool  res;
char  ans[7];
}*block1;*/
/**block2,*block3,*block4,*block5,*block6,*block7,*bl
ock8,*block9,*block10,*block11,*block12,*block13,*block14,*bl
ock15,*block16,*block17,*block18,*block19,*block20;
*/
/***************************************************
*              Function Declarations
***************************************************/


/***************************************************
*              The main function
***************************************************/

int main()
{
char choose;
puts("Wählen Sie das Quiz");
puts("a)Alle Adjektive");

scanf("%c",&choose);

if(choose=='a')
        {
      func();
        }
else if(choose=='b' ||  choose=='c' || choose=='d')
{
    puts("Nicht jetzt verfügbar, Versuche eine andere");
    scanf("%c",&choose);
    scanf("%c",&choose);
(choose=='a')?func():exit(0);
}
else {puts("Falsche Eingabe.");
     scanf("%c",&choose);
     scanf("%c",&choose);
(choose=='a')?func():exit(0);
     } 
return 0;
}





















