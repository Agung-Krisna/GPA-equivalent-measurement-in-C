#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    char letter[5];
    double scale;
    char description[30];
    printf ("Input the test score:\n");
    scanf ("%d", &score);

    if (score >= 80 && score <= 100){
        strcpy (letter, "A");
        scale = 4.0;
        strcpy (description, "Excellent");
    }
    else if (score >= 71 && score <= 79){
        strcpy (letter, "B+");
        scale = 3.5;
        strcpy (description, "Very Good");
    }
    else if (score >= 65 && score <= 70){
        strcpy (letter, "B");
        scale = 3.0;
        strcpy (description, "Good");
    }
    else if (score >= 60 && score <= 64){
        strcpy (letter, "C+");
        scale = 2.5;
        strcpy (description, "Satisfactory");
    }
    else if (score >= 55 && score <= 59){
        strcpy (letter, "C");
        scale = 2.0;
        strcpy (description, "Adequate");
    }
    else if (score >= 50 && score <= 54){
        strcpy (letter, "D+");
        scale = 1.5;
        strcpy (description, "Upper Marginal");
    }
    else if (score >= 40 && score <= 49){
        strcpy (letter, "D");
        scale = 1.0;
        strcpy (description, "Marginal");
    }
    else if (score >= 0 && score <= 39){
        strcpy (letter, "E");
        scale = 0;
        strcpy (description, "Failure");
    }

    if  (score > 0 && score <=100){
        printf ("Letter Grade: %s", letter);
        printf ("\n");
        printf ("GPA Scale: %.1f", scale);
        printf ("\n");
        printf ("Short Description: %s", description);
    }
    else {
        printf ("Test score input failed, please recheck the value that you've entered");
    }
    return 0;
    
}
