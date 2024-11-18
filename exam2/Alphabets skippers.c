#include <stdio.h>

int main() {
    char letter = 'a'; 
    
    printf("Alphabet skippers in 3-word increments : ");
    
    do {
        printf("%c ", letter); 
        letter += 4;         
    } 
	
	while (letter <= 'z');   
    
    printf("\n");
    return 0;
}
