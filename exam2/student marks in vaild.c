#include <stdio.h>

int main() {
	
    int score;
    char grade;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    
    switch (score / 10) {
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            grade = 'F';
            break;
    }

        switch (grade) {
            case 'A':
                printf("Excellent work! ");
                break;
            case 'B':
                printf("Well done. ");
                break;
            case 'C':
                printf("Good job. ");
                break;
            case 'D':
                printf("You passed, but you could do better. ");
                break;
            case 'F':
                printf("Sorry, you failed. ");
                break;
        }

        if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
            printf("Congratulations! You are eligible for the next level.\n");
        } 
		
		else if (grade == 'F') {
            printf("Please try again next time.\n");
        }
       
}
