#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void head();
void quiz1();
void quiz2();
void topicwise();
void randomquiz();



int main()
 {
    head();
    printf("\n");
    int ch;
    top:
    printf("ENTER YOUR CHOICE(1-2): ");
    printf("\nFOR EXIT PRESS 3\n");
    scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                
                quiz1();
                break;
            }
            case 2:
            {
               quiz2();
                break;
            }
            case 3:
            {
               exit(0);
                break;
            }
            default:
            {
                printf("\n");
                printf("INVALID CHOICE!");
                printf("\n");
                goto top;
                break;
            }
        }
 }



void head()
{
    printf("\t\t\t\t----------------------------------------------\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t|           WELCOME TO NCIT QUIZ             |\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t|                                            |\n");
    printf("\t\t\t\t----------------------------------------------\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t|      CREATED BY: BIRAT ARYAL         |\n");
    printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("WE HAVE ALTOGETHER 2 CATEGORIES.");
    printf("\n");
    printf("\n");
    printf("\t\t----------------------------------------------\n");
    printf("\t\t|                                            |\n");
    printf("\t\t|            1. Normal Quiz                  |\n");
    printf("\t\t|                                            |\n");
    printf("\t\t|            2. Quiz Game                    |\n");
    printf("\t\t|                                            |\n");
    printf("\t\t----------------------------------------------\n");
    printf("\t\t---------------\n");
    printf("\t\t|             |\n");
    printf("\t\t|   3.Exit    |\n");
    printf("\t\t|             |\n");
    printf("\t\t---------------\n");
}



void quiz1()
{
    system("cls");
    printf("WE HAVE TWO CATEGORIES.\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t|                                |\n");
    printf("\t\t| 1. TOPIC WISE QUESTIONS        |\n");
    printf("\t\t| 2. RANDOM QUESTIONS            |\n");
    printf("\t\t|                                |\n");
    printf("\t\t----------------------------------\n");

printf("\t\t---------------\n");
printf("\t\t|             |\n");
printf("\t\t| 3. EXIT     |\n");
printf("\t\t|             |\n");
printf("\t\t---------------\n");


    int k;
    hello:
    printf("ENTER HOW YOU WANT TO GET QUESTIONS(1-2):");
    printf("\nFOR EXIT PRESS 3\n");
    scanf("%d",&k);
    if(k==1)
    {
        system("cls");
        printf("YOU HAVE SELECTED TOPIC WISE QUESTIONS\n");
        printf("\n");
        topicwise();

    }
    else if(k==2)
    {
        system("cls");
        printf("YOU HAVE SELECTED RANDOM QUESTIONS\t");
        printf("\n");
        randomquiz();
    }
    else if(k==3)
    {
        exit(0);
    }
    else
    {
        printf("INVALID CHOICE!\n");
        goto hello;
    }
}



void topicwise()

{
        star:
     system("cls");
   printf("FOR TOPICWISE QUESTIONS.\n");
   printf("\t\t----------------------------------------------\n");
   printf("\t\t|                                            |\n");
   printf("\t\t|            1. History                      |\n");
   printf("\t\t|                                            |\n");
   printf("\t\t|            2. Sports                       |\n");
   printf("\t\t|                                            |\n");
   printf("\t\t|            3. Science and Technology       |\n");
   printf("\t\t|                                            |\n");
   printf("\t\t----------------------------------------------\n");

   printf("\n");

   printf("\t\t---------------\n");
   printf("\t\t|             |\n");
   printf("\t\t| 4. EXIT     |\n");
   printf("\t\t|             |\n");
   printf("\t\t---------------\n");

label:
printf("CHOOSE YOUR CATEGORY(1-3)");
printf("\nFOR EXIT PRESS 4\n");

int a,score=0,wrong=0;
char answer;
scanf("%d",&a);
 switch (a) 
 {

  case 1:
                     system("cls");                   
                    printf("\n\t\tYou have selected HISTORY.\n");


printf("\n\tQuestion 1: Who was the first president of the United States?\n");
printf("\n\tA. Thomas Jefferson\n\tB. Benjamin Franklin\n\tC. John Adams\n\tD. George Washington\n");
scanf(" %c", &answer);
if (answer == 'D' || answer == 'd') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is D.\n");
        wrong++;
}



printf("\n\tQuestion 2: who is considered as the first king of nepal?\n");
printf("\n\tA. Prithivi Narayan Shah\n\tB. Ram Shah\n\tC. Bhaktaman\n\tD. Jung Bhadur Rana\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is C.\n");
    wrong++;
}



printf("\n\tQuestion 3: When did the royal massacre take place?\n");
printf("\n\tA. 2058, Jestha 17\n\tB. 2058, Jestha 16\n\tC. 2058, Jestha 19\n\tD. 2058, Jestha 18\n");
scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is C.\n");
wrong++;
}


printf("\n\tQuestion 4: When was the Bir Hospital established?\n");
printf("\n\tA. B.S 1947\n\tB. B.S 1999\n\tC. B.S 2010\n\tD. B.S 1980\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is A.\n");
        wrong++;
}



printf("\n\tQuestion 5: Who is the first Nepali to visit the UK?\n");
printf("\n\tA. Trichandra\n\tB. Jung Bahadur Rana\n\tC. Bir Shamsher\n\tD. King Mahendra\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is B.\n");
    wrong++;
}



printf("\n\tQuestion 6: What era was the Jurassic Period from?\n");
printf("\n\tA. Mesozoic Era\n\tB. Phanerozoic Eon\n\tC. Paleozoic Era\n\tD. Hadean Era\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is A.\n");
    wrong++;
}


printf("\n\tQuestion 7: Which is the oldest political party of Nepal?\n");
printf("\n\tA. Prachanda Gorkha\n\tB. Praja Parishad\n\tC. Nepali Congress\n\tD. CPN UML\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is B.\n");
    wrong++;
}


printf("\n\tQuestion 8: When was Nepal divided into 14 zones and 75 districts?\n");
printf("\n\tA. 2020 Baisakh 01\n\tB. 2015 Baisakh 01\n\tC. 2010 Baisakh 01\n\tD. 2018 Baisakh 01\n");
scanf(" %c", &answer);
if (answer == 'D' || answer == 'd') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is D.\n");
    wrong++;
}


printf("\n\tQuestion 9: Which is the first college of Nepal?\n");
printf("\n\tA. Trichandra College\n\tB. Amrit Science College\n\tC. Ratna Rajya Campus\n\tD. Pulchowk Campus\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is A.\n");
    wrong++;
}



printf("\n\tQuestion 10:Who is known as the Iron man of Nepali Politics?\n");
printf("\n\tA.Matrika Prasad Koirala\n\tB.BP Koirala\n\tC.Ganeshman Singh\n\tD.Prachanda\n");
scanf(" %c", &answer);
if (answer == 'c' || answer == 'C') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is A.\n");
wrong++;
}



printf("|----------------------------|\n");
printf("|TOTAL SCORE: %d              |\n", score);
printf("|----------------------------|\n");
printf("|TOTAL MISTAKES: %d           |\n", wrong); 
printf("|----------------------------|");

break; 

 case 2:
                      system("cls"); 
                   printf("\n\t\tYou have selected SPORTS.\n");



printf("\n\tQuestion 1: After how many Year's FIFA World Cup held?\n");
printf("\n\tA. 2 Years\n\tB. 3 Years\n\tC. 4 Years\n\tD. Every Year\n");

scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is C.\n");
wrong++;
}



printf("\n\tQuestion 2: Who won the first ICC World Cup?\n");
printf("\n\tA. India\n\tB. West Indies\n\tC. England\n\tD. Australia\n");

scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
wrong++;
}



printf("\n\tQuestion 3: Who has the Highest Number of Gold Medals in Olympic History?\n");
printf("\n\tA. Larisa Latynina\n\tB. Mark Spitz\n\tC. Michael Phelps\n\tD. Saina Nehwal\n");

scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is C.\n");
wrong++;
}



printf("\n\tQuestion 4: What is the 100m World Record of Usain Bolt?\n");
printf("\n\tA. 14.35 Sec\n\tB. 9.58 Sec\n\tC. 9.05 Sec\n\tD. 10.12 Sec\n");

scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
wrong++;
}



printf("\n\tQuestion 5: When was the first FIFA World Cup held?\n");
printf("\n\tA. 1930\n\tB. 1925\n\tC. 1934\n\tD. 1818\n");

scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is A.\n");
wrong++;
}



printf("\n\tQuestion 6: Who holds the World Record for Solving Rubik's Cube at 3.47 Seconds?\n");
printf("\n\tA. Feliks Zemdegs\n\tB. Patrick Ponce\n\tC. Yusheng Du\n\tD. Max Park\n");

scanf(" %c", &answer);
if (answer == 'c' || answer == 'C') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is C.\n");
wrong++;
}



printf("\n\tQuestion 7: Who is the Undisputed World Chess Champion from 2007-2013?\n");
printf("\n\tA. Viswanathan Anand\n\tB. Vladimir Kramnik\n\tC. Magnus Carlsen\n\tD. Veselin Topalov\n");

scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is A.\n");
wrong++;
}



printf("\n\tQuestion 8: Which is the Largest Football Stadium in the World?\n");
printf("\n\tA. Salt Lake Stadium\n\tB. Rungrado 1st of May Stadium\n\tC. AT&T Stadium\n\tD. Melbourne Cricket Ground\n");

scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
wrong++;
}



printf("\n\tQuestion 9: What is the National Game of New Zealand?\n");
printf("\n\tA. Archery\n\tB. Cricket\n\tC. Rugby Union\n\tD. Golf\n");

scanf(" %c", &answer);
if (answer == 'c' || answer == 'C') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is C.\n");
wrong++;
}



printf("\n\tQuestion 10: What is the National Game of Nepal?\n");
printf("\n\tA. Kabaddi\n\tB. Hockey\n\tC. Cricket\n\tD. Volleyball\n");

scanf(" %c", &answer);
if (answer == 'D' || answer == 'd') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is D.\n");
wrong++;
}


printf("|----------------------------|\n");
printf("|TOTAL SCORE: %d              |\n", score);
printf("|----------------------------|\n");
printf("|TOTAL MISTAKES: %d           |\n", wrong); 
printf("|----------------------------|");

break;

case 3:
                    system("cls"); 
                    printf("\n\t\tYou have selected SCIENCE AND TECHNOLOGY.\n");


printf("\n\tQuestion 1: What is the PH of distilled water?\n");
printf("\n\tA. 0\n\tB. 3\n\tC. 7\n\tD. 10\n");
scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is C.\n");
        wrong++;
}


printf("\n\tQuestion 2: Who is known as the father of Computer?\n");
printf("\n\tA. Charaka\n\tB. G.D. Naid\n\tC. Sushruta\n\tD. Charles Babbage\n");

scanf(" %c", &answer);
if (answer == 'D' || answer == 'd') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is D.\n");
        wrong++;
}


printf("\n\tQuestion 3: What is the PH of H2O?\n");
printf("\n\tA. 6\n\tB. 7\n\tC. 8\n\tD. 9\n");

scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is B.\n");
        wrong++;
}


printf("\n\tQuestion 4: Which company developed the first mobile phone?\n");
printf("\n\tA. Motorola\n\tB. Nokia\n\tC. Samsung\n\tD. Apple\n");

scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is A.\n");
        wrong++;
}


printf("\n\tQuestion 5: Acid turns blue litmus paper into which color?\n");
printf("\n\tA. Black\n\tB. Blue\n\tC. Red\n\tD. Orange\n");

scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is C.\n");
        wrong++;
}


printf("\n\tQuestion 6: Which model of computer is the best selling of all time?\n");
printf("\n\tA. Apple II\n\tB. IBM PC (5150)\n\tC. Commodore 64\n\tD. Sinclair ZX Spectrum\n");

scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is C.\n");
        wrong++;
}


printf("\n\tQuestion 7: What does A.I. stand for?\n");
printf("\n\tA. Artificial information\n\tB. Artificial intelligence\n\tC. Anti intelligence\n\tD. Anti information\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
    wrong++;
}


printf("\n\tQuestion 8: What is the name of the oldest programming language still in use?\n");
printf("\n\tA. Matlab\n\tB. FORTRAN\n\tC. Ada\n\tD. COBOL\n");

scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
    wrong++;
}


printf("\n\tQuestion 9: What is the smallest particle in an element that retains the chemical properties of that element?\n");
printf("\n\tA. Neutron\n\tB. Proton\n\tC. Molecule\n\tD. Atom\n");
scanf(" %c", &answer);
if (answer == 'D' || answer == 'd') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is D.\n");
    wrong++;
}


printf("\n\tQuestion 10: What does the acronym LED stand for?\n");
printf("\n\tA. Light Emitting Diode\n\tB. Laser Emitting Device\n\tC. Low Energy Device\n\tD. Linear Energy Detector\n");

scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is A.\n");
    wrong++;
}



printf("|----------------------------|\n");
printf("|TOTAL SCORE: %d              |\n", score);
printf("|----------------------------|\n");
printf("|TOTAL MISTAKES: %d           |\n", wrong); 
printf("|----------------------------|");

break;



case 4:
exit(0);
break;



default:
printf("INVALID CHOICE!!\n");
goto label;
break;
 }


int u;
alpha:
printf("\n\nTO PLAY AGAIN/TO CHOOSE OTHER CATEGORY PRESS 1\n");
printf("FOR EXIT PRESS 2\n");
scanf("%d",&u);
if (u==2)
{
    exit(0);
}
else if (u==1)
{
    goto star;
}
else
{
 printf("INVALID CHOICE!!\n"); 
    goto alpha;
}


}



void randomquiz()
{

                     system("cls"); 
  
    char answer;
    int score=0,wrong=0;

      printf("Topic: Geography\n");
printf("\n\tQuestion 1: What is the capital of Australia?\n");
printf("\n\tA. Sydney\n\tB. Melbourne\n\tC. Canberra\n\tD. Perth\n");
scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is C.\n");
printf("\n");
wrong++;
}

 printf("Topic: Sports\n");

printf("\n\tQuestion 2: Which country hosted the 2018 FIFA World Cup?\n");
printf("\n\tA. Brazil\n\tB. Russia\n\tC. Germany\n\tD. South Africa\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
printf("\n");
wrong++;
}

 printf("Topic: Literature\n");

printf("\n\tQuestion 3: Who wrote the novel 'To Kill a Mockingbird'?\n");
printf("\n\tA. John Steinbeck\n\tB. Harper Lee\n\tC. J.K. Rowling\n\tD. F. Scott Fitzgerald\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
printf("\n");
wrong++;
}

 printf("Topic: Music\n");

printf("\n\tQuestion 4: What is the name of the famous band that consisted of John Lennon, Paul McCartney, George Harrison, and Ringo Starr?\n");
printf("\n\tA. Led Zeppelin\n\tB. The Beatles\n\tC. The Rolling Stones\n\tD. Queen\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
printf("\n");
wrong++;
}

 printf("Topic: History\n");

printf("\n\tQuestion 5: Who was the leader of Nazi Germany during World War II?\n");
printf("\n\tA. Adolf Hitler\n\tB. Joseph Stalin\n\tC. Winston Churchill\n\tD. Franklin D. Roosevelt\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is A.\n");
printf("\n");
wrong++;
}


printf("Topic: Literature\n");

printf("\n\tQuestion 6: Which novel is the best-selling book of all time?\n");
printf("\n\tA. Harry Potter and the Philosopher's Stone\n\tB. The Bible\n\tC. The Lord of the Rings\n\tD. Don Quixote\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
printf("\n");
wrong++;
}


printf("\n\tQuestion 7: Acid turns red litmus paper into which color?\n");
printf("\n\tA. Black\n\tB. Blue\n\tC. No change\n\tD. Orange\n");

scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
    printf("\n\tCorrect answer! You get 1 point.\n");
    score++;
} else {
    printf("\n\tWrong answer! The correct answer is C.\n");
        wrong++;
}
printf("Topic: Literature\n");

printf("\n\tQuestion 8: Who is the  writer of 'China Harayeko Manxe'?\n");
printf("\n\tA. Harry Potter \n\tB. Haribansha Acharya\n\tC. KP Oli\n\tD. Madan Krishna Shrestha\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
printf("\n");
wrong++;
}


printf("Topic: Geography\n");

printf("\n\tQuestion 9: What is the capital of Portugal?\n");
printf("\n\tA. Sydney\n\tB. Melbourne\n\tC. Lisbon\n\tD. Ottawa\n");
scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is C.\n");
printf("\n");
wrong++;
}


printf("Topic: History\n");

printf("\n\tQuestion 10: Who was the leader of Soviet Union during World War II?\n");
printf("\n\tA. Adolf Hitler\n\tB. Joseph Stalin\n\tC. Winston Churchill\n\tD. Franklin D. Roosevelt\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 1 point.\n");
score++;
} else {
printf("\n\tWrong answer! The correct answer is B.\n");
printf("\n");
wrong++;
}


printf("|----------------------------|\n");
printf("|TOTAL SCORE: %d              |\n", score);
printf("|----------------------------|\n");
printf("|TOTAL MISTAKES: %d           |\n", wrong); 
printf("|----------------------------|");
}



void quiz2()
{
system("cls");
printf("\t\t\t\t----------------------------------------------\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|           WELCOME TO QUIZ GAME             |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t|                                            |\n");
printf("\t\t\t\t----------------------------------------------\n");

printf("\nRULES:\n");
printf("1. You are asked questions from very simple to the most difficult one.\n");
printf("2. First question will be the easiest and the last question will be the hardest.\n");
printf("3. Difficulty will increase gradually after each question.\n");
printf("4. You will get 5 points for answering first question correctly and similarly 10 points for answering second question correctly.\n");
printf("5. The points increase by 5 for each question in ascending order.\n");
printf("6. The last question will be of 50 points.\n");
printf("7. One wrong answer and your game is over.\n");
printf("\n\n");


int ch,score=0;
char answer;
up:
printf("IF YOU WANT TO PLAY THE GAME PRESS 1\n");
printf("FOR EXIT PRESS 2\n");
scanf("%d",&ch);



switch(ch)
{
    case 1:
system("cls");
printf("\n\tQuestion 1: In which country was Gautam Buddha born?\n");
printf("\n\tA. India\n\tB. Nepal\n\tC. China\n\tD. Russia\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
    printf("\n\tCorrect answer! You get 5 points.\n");
    score = score + 5;
} else {
    printf("\n\tWrong answer! The correct answer is B.\n\n");
    printf("\t\tYOUR GAME IS OVER!\n");
    goto over;
}

printf("\n\tQuestion 2: Which is the fourth month according to Nepali calendar?\n");
printf("\n\tA. Shrawan\n\tB. Jestha\n\tC. Asar\n\tD. Falgun\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 10 points.\n");
    score = score + 10;
} else {
    printf("\n\tWrong answer! The correct answer is A.\n\n");
    printf("\t\tYOUR GAME IS OVER!\n");
    goto over;
}

printf("\n\tQuestion 3: What is the National sport of Nepal?\n");
printf("\n\tA. Cricket\n\tB. Kabbaddi\n\tC. Volleyball\n\tD. Football\n");
scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
    printf("\n\tCorrect answer! You get 15 points.\n");
    score = score + 15;
} else {
    printf("\n\tWrong answer! The correct answer is C.\n\n");
    printf("\t\tYOUR GAME IS OVER!\n");
    goto over;
}

printf("\n\tQuestion 4: What is the deepest lake of Nepal?\n");
printf("\n\tA. Rara\n\tB. She Phokshundo\n\tC. Phewa\n\tD. Tilicho\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
    printf("\n\tCorrect answer! You get 20 points.\n");
    score = score + 20;
} else {
    printf("\n\tWrong answer! The correct answer is B.\n\n");
    printf("\t\tYOUR GAME IS OVER!\n");
    goto over;
}

printf("\n\tQuestion 5: Who is the current Home Minister of Nepal?\n");
printf("\n\tA. Prachanda\n\tB. KP Oli\n\tC. Rabi Lamichhane\n\tD. Ram Mani Paudel\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
    printf("\n\tCorrect answer! You get 25 points.\n");
    score = score + 25;
} else {
    printf("\n\tWrong answer! The correct answer is A.\n\n");
    printf("\t\tYOUR GAME IS OVER!\n");
    goto over;
}

printf("\n\tQuestion 6: Who is the father of King Mahendra?\n");
printf("\n\tA. King Tribhuvan\n\tB. King Birendra\n\tC. King Rajendra\n\tD. King Rana Bahadur\n");
scanf(" %c", &answer);
if (answer == 'A' || answer == 'a') {
printf("\n\tCorrect answer! You get 30 points.\n");
score=score+30;
} else {
printf("\n\tWrong answer! The correct answer is A.\n\n");
printf("YOUR IS GAME IS OVER!\n");
goto over;
}

printf("\n\tQuestion 7: How many keywords are there in C?\n");
printf("\n\tA. 34\n\tB. 29\n\tC. 32\n\tD. 31\n");
scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
printf("\n\tCorrect answer! You get 35 points.\n");
score=score+35;
} else {
printf("\n\tWrong answer! The correct answer is C.\n\n");
printf("YOUR IS GAME IS OVER!\n");
goto over;
}

printf("\n\tQuestion 8: How many gold Micheal Phelps won in single Olympic?\n");
printf("\n\tA. 4\n\tB. 5\n\tC. 7\n\tD. 8\n");
scanf(" %c", &answer);
if (answer == 'D' || answer == 'd') {
printf("\n\tCorrect answer! You get 40 points.\n");
score=score+40;
} else {
printf("\n\tWrong answer! The correct answer is D.\n\n");
printf("YOUR IS GAME IS OVER!\n");
goto over;
}

printf("\n\tQuestion 9: When is Ghode Jatra celebrated?\n");
printf("\n\tA. 7 Chaitra\n\tB. 8 Chaitra\n\tC. 9 Chaitra\n\tD. 10 Chaitra\n");
scanf(" %c", &answer);
if (answer == 'B' || answer == 'b') {
printf("\n\tCorrect answer! You get 45 points.\n");
score=score+45;
} else {
printf("\n\tWrong answer! The correct answer is B.\n\n");
printf("YOUR IS GAME IS OVER!\n");
goto over;
}

printf("\n\tQuestion 10: Who is the writer of the book THE RUDEST BOOK EVER?\n");
printf("\n\tA. HG Wells\n\tB. Prakhar Dubey\n\tC. Swetabh Ganghwar\n\tD. Shiva Khera\n");
scanf(" %c", &answer);
if (answer == 'C' || answer == 'c') {
printf("\n\tCorrect answer! You get 50 points.\n");
score=score+50;
} else {
printf("\n\tWrong answer! The correct answer is C.\n\n");
printf("YOUR IS GAME IS OVER!\n");
goto over;
}
printf("\n\tCongratulations! You have successfully completed the quiz!\n\n");
over:
printf("\t\tYour total score is %d out of 275.\n\n\n", score);

 break;
    
 case 2:
exit(0);

default:
printf("INVALID CHOIE!!!\n");
goto up;
}
    char name[50];
    printf("\n\nEnter your name: ");
    scanf("%s",name);
    
    FILE *f;
    f = fopen("score.csv", "a");
    if (f == NULL) {
        printf("Error opening file!");
        exit(1);
    }
    
    fprintf(f,"%s,%d\n", name, score);
    fclose(f);
    

}














