/* Assignment 1: Program to simulate a mathematics quiz game that is menu-driven. It can be played multiple times and displays the answers that were correct and incorrect for each individual round.
 
 Bryan McCarthy
 10/11/19
 */

#include <stdio.h>
#include <stdlib.h>//this is for the rand() function
int main()

{
    
    int menu = 0;
    int menu1 = 0;
    int numques;
    int correct = 0;
    int incorrect = 0;
    
    //do..while for the main menu to repeat until user chooses to close the program
    do
    {
        //main menu text
        printf("-- Main Menu --\n\n");
        
        printf("[1] Enter the number of questions to be asked for this round of the quiz (maximum of 5 allowed)\n");
        
        printf("[2] Start Quiz\n");
        
        printf("[3] Display the number of questions that were answered (i)correctly and (ii)incorrectly for this round\n");
        
        printf("[4] Exit Program\n");
        
        //read which option the user wants to select
        scanf("%d", &menu);
    
    //the user must select option 1 before being allowed to start the quiz
    if(menu == 1)
    {
        int menu1;
        
        printf("Please enter the number of questions to be asked for this round of the quiz\n");
        scanf("%d", &menu1);
        if(menu1 > 0 && menu1 < 6)
        {
            printf("You have chosen to be given %d questions\n", menu1);
        numques = menu1;
        }
        
        if(menu1 > 5 || menu1 < 1)
        {
            printf("Error! You must choose a number 1-5\n\n");
        }
        
    }//end if
    else if(menu == 2 && numques > 0 && numques < 6)
    {
        printf("Begin Quiz (%d question(s))\n", numques);
        
        //Questions for quiz
        //If the user chooses 1 question
        if(numques == 1)
        {
            int ans = 0;
            int guess;
            int randnum1= rand() % 10 + 1;
            int randnum2= rand() % 10 + 1;
            int randnum3= rand() % 10 + 1;
            
            printf("Question 1:\n");
            
            //print the question
            printf("%d - %d + %d\n", randnum1, randnum2, randnum3);
            scanf("%d", &guess);
            ans = randnum1 - randnum2 + randnum3;
            if(ans == guess)
            {
                printf("Correct!!\n\n");
                }//end inside if
                else
                {
                    printf("You entered: %d. This is incorrect! The correct answer is %d\n\n", guess, ans);
            }//end inside else
            
            if(ans == guess)
            {
                correct = correct + 1;
            }//end if
            if(ans != guess)
            {
                incorrect = incorrect + 1;
            }//end if
            
        }//end inside if
        
        //If the user chooses 2 questions
        else if(numques == 2)
        {
            for(numques = 1; numques < 3; numques++)
            {
                int ans = 0;
                int guess;
                int randnum1= rand() % 10 + 1;
                int randnum2= rand() % 10 + 1;
                int randnum3= rand() % 10 + 1;
                
                printf("Question %d:\n", numques);
                
                //print the question
                printf("%d + %d * %d\n", randnum1, randnum2, randnum3);
                scanf("%d", &guess);
                ans = randnum1 + randnum2 * randnum3;
                if(ans == guess)
                {
                    printf("Correct!!\n\n");
                }//end inside if
                else
                {
                    printf("You entered: %d. This is incorrect! The correct answer is %d\n\n", guess, ans);
                }//end inside else
                
                if(ans == guess)
                {
                    correct = correct + 1;
                }//end if
                if(ans != guess)
                {
                    incorrect = incorrect + 1;
                }//end if
                
            }//end inside for
        }//end inside else..if
        
        //if the user chooses 3 questions
        else if(numques == 3)
        {
            for(numques = 1; numques < 4; numques++)
            {
                int ans = 0;
                int guess;
                int randnum1= rand() % 10 + 1;
                int randnum2= rand() % 10 + 1;
                int randnum3= rand() % 10 + 1;
                       
                printf("Question %d:\n", numques);
                       
                //print the question
                printf("%d + %d - %d\n", randnum1, randnum2, randnum3);
                scanf("%d", &guess);
                ans = randnum1 + randnum2 - randnum3;
                if(ans == guess)
                {
                    printf("Correct!!\n\n");
                }//end inside if
                else
                {
                    printf("You entered: %d. This is incorrect! The correct answer is %d\n\n", guess, ans);
                }//end inside else
                
                if(ans == guess)
                {
                    correct = correct + 1;
                }//end if
                if(ans != guess)
                {
                    incorrect = incorrect + 1;
                }//end if
                
            }//end inside for
        }//end inside else..if
        
        //if the user chooses 4 questions
        else if(numques == 4)
        {
            for(numques = 1; numques < 5; numques++)
            {
                int ans = 0;
                int guess;
                int randnum1= rand() % 10 + 1;
                int randnum2= rand() % 10 + 1;
                int randnum3= rand() % 10 + 1;
                   
                printf("Question %d:\n", numques);
                   
                //print the question
                printf("%d * %d - %d\n", randnum1, randnum2, randnum3);
                scanf("%d", &guess);
                ans = randnum1 * randnum2 - randnum3;
                if(ans == guess)
                {
                    printf("Correct!!\n\n");
                }//end inside if
                else
                {
                    printf("You entered: %d. This is incorrect! The correct answer is %d\n\n", guess, ans);
                }//end inside else
                
                if(ans == guess)
                {
                    correct = correct + 1;
                }//end if
                if(ans != guess)
                {
                    incorrect = incorrect + 1;
                }//end if
                
            }//end inside for
        }//end inside else..if
        
        //if the user chooses 5 questions
        else if(numques == 5)
        {
            for(numques = 1; numques < 6; numques++)
            {
                int ans = 0;
                int guess;
                int randnum1= rand() % 10 + 1;
                int randnum2= rand() % 10 + 1;
                int randnum3= rand() % 10 + 1;
                   
                printf("Question %d:\n", numques);
                   
                //print the question
                printf("%d * %d + %d\n", randnum1, randnum2, randnum3);
                scanf("%d", &guess);
                ans = randnum1 * randnum2 + randnum3;
                if(ans == guess)
                {
                    printf("Correct!!\n\n");
                }//end inside if
                else
                {
                    printf("You entered: %d. This is incorrect! The correct answer is %d\n\n", guess, ans);
                }//end inside else
                
                if(ans == guess)
                {
                    correct = correct + 1;
                }//end if
                if(ans != guess)
                {
                    incorrect = incorrect + 1;
                }//end if
                
            }//end inside for
        }//end inside else..if
    }//end else if
    else if(menu == 3 && numques > 0)
    {
        do
        {
            printf("Here are your results:\n");
            printf("You got %d correct and %d incorrect for this round.\n", correct, incorrect);
        }//end do..while
        while(correct == 0 && incorrect == 0);
        
        if(correct >= 1 || incorrect >= 1)
        {
            correct = correct - correct;
            incorrect = incorrect - incorrect;
        }//end inside if
        
    }//end else..if
    
    //message for if the user decides to close the program
    else if(menu == 4)
    {
        printf("You have chosen to exit the program.\n");
    }//end else..if
    
    //if the user tries to start the quiz before choosing a number of questions
    else if(menu == 2 && numques < 1)
    {
        printf("You cannot select this option before choosing a number of questions to be asked.\n\n");
    }//end else..if
        
    //display message if user tries to see results before taking the quiz
    else if(menu == 3 && correct < 1)
    {
        printf("You cannot select this option before taking the quiz.\n\n");
    }//end else..if
        else if(menu == 3 && incorrect < 1)
        {
            printf("You cannot select this option before taking the quiz.\n\n");
        }//end else..if
        
        
    }//end do..while
    
    //if user enters 4 into the menu it terminates the program
    while(menu != 4);
    
    return 0;
}//end main
