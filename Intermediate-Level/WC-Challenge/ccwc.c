#include <stdio.h>  // for stdin, fopen, FILE
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include <ctype.h>  // for isspace function
#include <unistd.h> // for getopt function
#include <getopt.h> // for getopt function

extern int optind;

void count(FILE *fp, int *words, int *lines, int* bytes);
void print_counts(int lines, int words, int bytes, int print_lines, int print_words, int print_bytes, const char *filename);

int main(int argc, char *argv[])
{
	
	int print_words = 0, print_lines = 0, print_bytes = 0;
	int words = 0;
	int lines = 0;
	int bytes = 0;
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
				print_bytes = 1;
				break;
			default:
			        fprintf(stderr, "Usage: %s [-lwc] [file...]\n", argv[0]);
			        exit(EXIT_FAILURE);
		}
	}

	if(!print_words && !print_lines && !print_bytes)
	{
		print_lines = 1;
		print_words = 1;
		print_bytes =1;
		
	}

	if(optind < argc){
		for(int i = optind; i < argc; i++){
			fp = fopen(argv[i], "r");
			if(fp == NULL){
				perror(argv[i]);
				continue;
			}
			count(fp, &words, &lines, &bytes);
			print_counts(lines, words, bytes, print_lines, print_words, print_bytes, argv[i]);
			fclose(fp);
		}
	}else{
		count(stdin, &words, &lines, &bytes);
		print_counts(lines, words, bytes, print_lines, print_words, print_bytes, NULL);
	}

	
        return EXIT_SUCCESS;
}

void count(FILE *fp, int *words, int *lines, int *bytes)
{
	
	char ch;
	int in_word = 0;
	*words = 0; 
	*lines = 0;
	*bytes = 0;

	while((ch = fgetc(fp))!= EOF){
		(*bytes)++;
		if(ch == '\n'){
			(*lines)++;
		}
		if(isspace(ch)){
			in_word = 0;
		}else if(in_word == 0){
			in_word = 1;
			(*words)++;
		}
	}
}


void print_counts(int lines, int words, int bytes, int print_lines, int print_words, int print_bytes, const char *filename)
{
    if (print_lines) printf("%d ", lines);
    if (print_words) printf("%d ", words);
    if (print_bytes) printf("%d ", bytes);
    if (filename) printf("%s", filename);
    printf("\n");
}
