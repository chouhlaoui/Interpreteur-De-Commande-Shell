
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
//shih
int takeInput(char* str);
int DealWithFiles(FILE *fp);
void printDir();


//mezelt naarach 
int shell(char *readline);
char *get_the_line(void);
char **parse_the_line(char *buff);
int execute_the_line(char *buuf[]);
void sigintHandler(__attribute__((unused)) int sig_num);