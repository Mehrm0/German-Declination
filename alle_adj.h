/*Diese Funktion stellt die Fragen um Adjektiv Deklinat
ion dar;*/

struct block 
{
char get[7];
int  res;
char ans[7];
};


/**************************************************
*         Initialization of Structs              
**************************************************/
extern int func()                             //Initialization of the ans variable;
{                               
 struct block block1={.ans="en"};
 struct block block2={.ans="en"};
 struct block block3={.ans="e"};
 struct block block4={.ans="en"};
 struct block block5={.ans="en"};
 struct block block6={.ans="e"};
 struct block block7={.ans="e"};
 struct block block8={.ans="en"};
 struct block block9={.ans="en"};
 struct block block10={.ans="en"};
 struct block block11={.ans="er"};
 struct block block12={.ans="en"};
 struct block block13={.ans="em"};
 struct block block14={.ans="en"};
 struct block block15={.ans="es"};
 struct block block16={.ans="es"};
 struct block block17={.ans="em"};
 struct block block18={.ans="en"};
 struct block block19={.ans="er"};
 struct block block20={.ans="er"};

bool test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11, test12, test13, test14, test15, test16, test17, test18, 
test19, test20; //boolean variable to the result of strcmp;


             
puts("N=nominativ/A=akkusativ/D=dativ/G=genetiv\n#F=\feminin/M=maskulin/N=neutral\n#S=singular/P=plural");
puts("********************************");
puts("Ergänzen Sie die folgenden Sätze");
puts("********************************");
/*1*/
puts("********************************");
puts("1)Der klar...Luft[D,S,F]");
scanf("%s",block1.get);


if((test1=strcmp(block1.get,block1.ans))==false)
                     {
                      puts("Wahr");
                     }
else             
                 {    puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block1.ans);
                 }
(test1==false)?block1.res=5:0;
printf("Deine Note bisher ist: %d aus5.\n",block1.res);
puts("*****************************************");

puts("*****************************************");
/*2*/
puts("*****************************************");


puts("2)Dem hell...Licht[D,N,S]");
scanf("%s",block2.get);


if((test2=strcmp(block2.get,block2.ans))==false)
                     {
                      puts("Wahr");
                     }
else
                   {  puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block2.ans);
                   }
(test2==false)?block2.res=5:0;
printf("Deine Note bisher ist: %d aus 10.\n",block1.res+block2.res);
puts("*****************************************");
puts("*****************************************");
/*3*/
puts("*****************************************");

puts("3)Das hell... Licht[N,N,S]");
scanf("%s",block3.get);


if((test3=strcmp(block3.get,block3.ans))==false)
                     {
                      puts("Wahr");
                     }
else             {
                     puts("Falsch");
    printf("Die Richtige Antwort ist:%s\n",block3.ans);
                 }
(test3==false)?block3.res=5:0;
printf("Deine Note bisher ist: %d aus 15.\n",block1.res+block2.
res+block3.res);
puts("*****************************************");
puts("*****************************************");
/*4*/
puts("*****************************************");

puts("4)Des rott...Steines[G,M,S]");
scanf("%s",block4.get);


if((test4=strcmp(block4.get,block4.ans))==false)
                     {
                      puts("Wahr");
                    }
else
                   {  puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block4.ans);
                   }
(test4==false)?block4.res=5:0;
printf("Deine Note bisher ist: %d aus 20.\n",block1.res+block2.res+block3.res+block4.res);
puts("*****************************************");
puts("*****************************************");
/*5*/
puts("*****************************************");

puts("5)Die rund... Formen[N,-,P]");
scanf("%s",block5.get);


if((test5=strcmp(block5.get,block5.ans))==false)
                     {
                      puts("Wahr");
                    }
else               {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block5.ans);
                   }
(test5==false)?block5.res=5:0;
printf("Deine Note bisher ist: %d aus 25.\n",block1.res+block2.res+block3.res+block4.res+block5.res);
puts("*****************************************");
puts("*****************************************");
/*6*/                                           
puts("*****************************************");

puts("6)Die klar... Luft[A,F,S]");
scanf("%s",block6.get);


if((test6=strcmp(block6.get,block6.ans))==false)
                     {
                      puts("Wahr");
                    }
else
                 {  
                   puts("Falsch");
     printf("Die Richtige Antwort ist:%s",block6.ans);
                 }
(test6==false)?block6.res=5:0;
printf("Deine Note bisher ist: %d aus 30.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res);
puts("*****************************************");
puts("*****************************************");
/*7*/
puts("*****************************************");

puts("7)Das Hell... Licht[A,N,S]");
scanf("%s",block7.get);


if((test7=strcmp(block7.get,block7.ans))==false)
                     {
                      puts("Wahr");
                    }
else               {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block7.ans);
                    }
(test7==false)?block7.res=5:0;
printf("Deine Note bisher ist: %d aus 35.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res);
puts("*****************************************");
puts("*****************************************");
/*8*/
puts("*****************************************");

puts("8)Den rott... Stein[A,M,S]");
scanf("%s",block8.get);


if((test8=strcmp(block8.get,block8.ans))==false)
                     {
                      puts("Wahr");
                    }
else
                   {  puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block8.ans);
                  }    
(test8==false)?block8.res=5:0;
printf("Deine Note bisher ist: %d aus 40.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res);
puts("*****************************************");
puts("*****************************************");
/*9*/
puts("*****************************************");

puts("9)Des rott.. Steines[G,M,S]");
scanf("%s",block9.get);


if((test9=strcmp(block9.get,block9.ans))==false)
                     {
                      puts("Wahr");
                    }
else                {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block9.ans);
                     }
(test9==false)?block9.res=5:0;
printf("Deine Note bisher ist: %d aus 45.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res);
puts("*****************************************");
puts("*****************************************");
/*10*/
puts("*****************************************");

puts("10)Der klar... Luft[D,F,S]");
scanf("%s",block10.get);


if((test10=strcmp(block10.get,block10.ans))==false)
                     {
                      puts("Wahr");
                     }
else                 {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block10.ans);
                      }
(test10==false)?block10.res=5:0;
printf("Deine Note bisher ist: %d aus 50.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res);
puts("*****************************************");
puts("*****************************************");
/*11*/
puts("*****************************************");

puts("11)Rot ... Stein[N,M,S]");
scanf("%s",block11.get);


if((test11=strcmp(block11.get,block11.ans))==false)
                     {
                      puts("Wahr");
                    }
else                {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block11.ans);
                     }
(test11==false)?block11.res=5:0;
printf("Deine Note bisher ist: %d aus 55.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res);
puts("*****************************************");
puts("*****************************************");
/*12*/
puts("*****************************************");

puts("12)Rot...Stein[A,M,S]");
scanf("%s",block12.get);


if((test12=strcmp(block12.get,block12.ans))==false)
                     {
                      puts("Wahr");
                    }
else               {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block12.ans);
                   }
(test12==false)?block12.res=5:0;
printf("Deine Note bisher ist: %d aus 60.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res);
puts("*****************************************");
puts("*****************************************");
/*13*/
puts("*****************************************");

puts("13)Rot... Stein[D,M,S]");
scanf("%s",block13.get);


if((test13=strcmp(block13.get,block13.ans))==false)
                     {
                      puts("Wahr");
                    }
else                {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block13.ans);
                    }
(test13==false)?block13.res=5:0;
printf("Deine Note bisher ist: %d aus 65.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res);
puts("*****************************************");
puts("*****************************************");
/*14*/
puts("*****************************************");

puts("14)Rot... Steines[G,M,S]");
scanf("%s",block14.get);


if((test14=strcmp(block14.get,block14.ans))==false)
                     {
                      puts("Wahr");
                    }
else                 {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block14.ans);
                    }
(test14==false)?block14.res=5:0;
printf("Deine Note bisher ist: %d aus 70.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res+block14.res);
puts("*****************************************");
puts("*****************************************");
/*15*/
puts("*****************************************");

puts("15)Hell... Licht[N,N,S]");
scanf("%s",block15.get);


if((test15=strcmp(block15.get,block15.ans))==false)
                     {
                      puts("Wahr");
                    }
else              {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block15.ans);
                  }
(test15==false)?block15.res=5:0;
printf("Deine Note bisher ist: %d aus 75.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res+block14.res+block15.res);
puts("*****************************************");
puts("*****************************************");
/*16*/
puts("*****************************************");

puts("16)Hell... Licht[A,N,S]");
scanf("%s",block16.get);


if((test16=strcmp(block16.get,block16.ans))==false)
                     {
                      puts("Wahr");
                    }
else                {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block16.ans);
                     }
(test16==false)?block16.res=5:0;
printf("Deine Note bisher ist: %d aus 80.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res+block14.res+block15.res+block16.res);
puts("*****************************************");
puts("*****************************************");
/*17*/
puts("*****************************************");

puts("17)Hell... Licht[D,N,S]");
scanf("%s",block17.get);


if((test17=strcmp(block17.get,block17.ans))==false)
                     {
                      puts("Wahr");
                     }
else
                 {    puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block17.ans);
                  }
(test17==false)?block17.res=5:0;
printf("Deine Note bisher ist: %d aus 85.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res+block14.res+block15.res+block16.res+block17.res);
puts("*****************************************");
puts("*****************************************");
/*18*/
puts("*****************************************");

puts("18)Hell... Lichtes[G,N,S]");
scanf("%s",block18.get);


if((test18=strcmp(block18.get,block18.ans))==false)
                     {
                      puts("Wahr");
                    }
else
                   {  puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block18.ans);
                   }
(test18==false)?block18.res=5:0;
printf("Deine Note bisher ist: %d aus 90.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res+block14.res+block15.res+block16.res+block17.res+block18.res);
puts("*****************************************");
/*19*/
puts("*****************************************");

puts("19)--Rund... Formen(unbestimmt plural)[G,-,P]");
scanf("%s",block19.get);


if((test19=strcmp(block19.get,block19.ans))==false)
                     {
                      puts("Wahr");
                    }
else               {
                     puts("Falsch");
     printf("Die Richtige Antwort ist:%s\n",block19.ans);
                  }
(test19==false)?block19.res=5:0;
printf("Deine Note bisher ist: %d aus 95.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res+block14.res+block15.res+block16.res+block17.res+block18.res+block19.res);
puts("*****************************************");
/*20*/
puts("*****************************************");

puts("20)Ein rot... Stein[N,M,S]");
scanf("%s",block20.get);


if((test20=strcmp(block20.get,block20.ans))==false)
                     {
                      puts("Wahr");
                    }
else
                  {   puts("Falsch");

     printf("Die Richtige Antwort ist:%s\n",block20.ans);
                   }
(test20==false)?block20.res=5:0;
printf("Deine Note bisher ist: %d aus 100.\n",block1.res+block2.res+block3.res+block4.res+block5.res+block6.res+block7.res+block8.res+block9.res+block10.res+block11.res+block12.res+block13.res+block14.res+block15.res+block16.res+block17.res+block18.res+block19.res+block20.res);
puts("*****************************************");
/*Ende*/
puts("*****************************************");



return 0;
}









