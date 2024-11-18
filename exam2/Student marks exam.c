#include<stdio.h>

int main () {
	
	int score;
	char grade;
	
	printf("Enter your socre : ");
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
		    grade = 'F';
		    break;
	}
	
	switch (grade) {
		case 'A':
		   printf("Your grade is A.");
		   break;
		   
		case 'B':
		   printf("Your grade is B..");
		   break;
		   
		case 'C':
		   printf("Your grade is C...");
		   break;
		   
		case 'D':
		   printf("Your grade is D....");
		   break;
		   
		case 'E':
		   printf("Your grade is E.....");
		   break;
		   
		case 'F':
		   printf("Your grade is F(Fail)......");
		   break;
		   
		default: {
			printf("Marks is Vaild...........");
			break;
		}
	}
		    
}