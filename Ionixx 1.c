#include<stdio.h>
#include<string.h>
void main(){
	//Declaration of variables
	int length=0;
	int no_of_rep_char_A=0,no_of_rep_char_B=0;
	int no_of_rep_word_A=0,no_of_rep_word_B=0;
	int i;
	int flag=0,result;
	//Loop to converse continuously
	for(i=0;i<10000;i++){
		if(flag==0){
			char s[10];
			//conversation of A
			printf("A :");
			scanf("%s",&s);
			//Check if the conversation is quit
			if((result=strcmp(s,"quit"))==0)
			{
				break;//If it is quit conversation ends
			}
			//else to perform conditions	
			else{
				length=length+1;//to find the length of the conversation
				no_of_rep_word_A=no_of_rep_word_A+1;//to find the number of repetition of a word
				no_of_rep_char_A=no_of_rep_char_A+1;//to find the number of repetition of a character
			}
			flag=1;	
		}
		else{
			char ss[10];
			//Conversation of B
			printf("B :");
			scanf("%s",&ss);
			//Check if the conversation is quit
			if((result=strcmp(ss,"quit"))==0)
			{
				break;//If it is quit conversation ends
			}
			//else to perform conditions
			else
			{
				length=length+1;//to find the length of the conversation
				no_of_rep_word_B=no_of_rep_word_B+1;//to find the number of repetition of a word
				no_of_rep_char_B=no_of_rep_char_B+1;//to find the number of repetition of a character
		}
		flag=0;		
		}		
	}
	//Pop up the questions
	printf("The number of repetition of a characters A and B\n");
	printf("Number of repetition of a characters A:%d",no_of_rep_word_A);
	printf("\nNumber of repetition of a characters B:%d",no_of_rep_word_B);
	
	printf(" \nThe number of repetition of  Word Ping and Pong\n");
	printf("Number of repetition of Word Ping :%d",no_of_rep_char_A);
	printf("\nNumber of repetition of Word Pong :%d",no_of_rep_char_B);
	
	printf("\nLength of Conversation: %d",length);
	
}
