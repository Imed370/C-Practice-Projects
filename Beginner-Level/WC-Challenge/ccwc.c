#include <stdio.h>  // for stdin, fopen, FILE
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include <ctype.h>  // for isspace function
#include <unistd.h> // for getopt function

void count(FILE *fp, int *chars, int *words, int *lines);
void print_counts(int lines, int words, int chars, int print_lines, int print_words, int print_chars, const char *filename);

int main(int argc, char *argv[])
{
	
	int print_chars = 0, print_words = 0, print_lines = 0;
	int chars = 0;
	int words = 0
	int lines = 0;
	int opt;
	FILE *fp;

	while((opt = getopt(argc,argv,"lwc")) != -1)
	{
		switch(opt)
		{
			case 'l':
				print_lines = 1;
				break;
			case 'w': 
				print_words = 1;
				break;
			case 'c':
				print_chars = 1;
				break;
			default:
			        fprintf(stderr, "Usage: %s [-lwc] [file...]\n", argv[0]);
			        exit(EXIT_FAILURE);
		}
	}

	if(!print_words && !print_lines && !print_chars)
	{
		print_lines = 1;
		print_words = 1;
		print_chars =1;
	}

	if(optind < argc){
		for(int i = optind; i < argc; i++){
			fp = fopen(argv[i], "r");
			if(fp == NULL){
				perror(argv[i]);
				continue;
			}
			count(fp, &chars, &words, &lines);
			print_counts(lines, words, chars, print_lines, print_words, print_chars, argv[i]);
			fclose(fp);
		}
	}else{
		count(stdin, &chars, &words, &lines);
		print_counts(lines, words, chars, print_lines, print_words, print_chars, NULL);
	}

	
        return EXIT_SUCCESS;
}

void count(FILE *fp, int *chars, int *words, int *lines)
{
	
	char ch;
	int in_word = 0;
	*chars = 0;
	*words = 0; 
	*lines = 0;

	while((ch = fgetc(fp))!= EOF){
		(*chars)++;
		if(ch == '\n'){
			(*lines)++;
		}
		if(isspace(ch)){
			in_word = 0;
		}else{
			in_word = 1;
			(*words)++;
		}
	}
}


void print_counts(int lines, int words, int chars, int print_lines, int print_words, int print_chars, const char *filename) 
{
    if (print_lines) printf("%d ", lines);
    if (print_words) printf("%d ", words);
    if (print_chars) printf("%d ", chars);
    if (filename) printf("%s", filename);
    printf("\n");
}
