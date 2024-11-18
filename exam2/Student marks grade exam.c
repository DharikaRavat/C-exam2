#include<stdio.h>

int main () {
	
	int score;
	char grade;
	
	printf("Enter the score : ");
	scanf("%d" ,&score);
	
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
		    grade = 'E';
		    break;
		    
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
		   printf("Your grade is A. Excellent work!");
		   break;
		   
		case 'B':
		   printf("Your grade is B. Well done.");
		   break;
		   
		case 'C':
		   printf("Your grade is C. Good job. ");
		   break;
		   
		case 'D':
		   printf("Your grade is D. You Passed, but you could do better.");
		   break;
		   
		case 'E':
		   printf("Your grade is E. Need Improvement");
		   break;
		   
		case 'F':
		   printf("Your grade is F. Sorry, you failed.");
		   break;
		   
		default: {
			printf("Invalid score! Please enter a number between 0 and 100.\n");
			break;
		}
	}
		    
}