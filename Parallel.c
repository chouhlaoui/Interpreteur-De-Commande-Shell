#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include <errno.h>

int main()
{
	int p1, p2;
    char * argv[] = { "pwd", (char *) NULL };
    char * argv2[] = { "ls","/Users/mac/Desktop/projet/", (char *) NULL };

    p1 = fork();
    
	if (p1 < 0) {
		printf("\nCould not fork");
	}
    
    if (p1 == 0) 
    {
		
        if (execvp(argv2[0], argv2) < 0) {
			printf("\nCould not execute command 1..");
            exit(0);

		}
        
	} 
    else {
		wait(NULL);
	
		// Parent executing
        
		    p2 = fork();

		    if (p2 < 0) {
			    printf("\nCould not fork");
		    }
		
		    if (p2 == 0) {
			    if (execvp(argv[0], argv) < 0) {
				    printf("\nCould not execute command 2..");
				    exit(0);
			    }
		    } 
      
	}
    
}