
#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h" 

int main(void) //fixed the fatal error
{
tokenizing(); //removed void from name to fix error
}
void tokenizing() { //tokenizing function definition begins

    
// 	 /* Version1*/
	 
// 	 printf("*** Start of Tokenizing Words Demo ***\n"); // print header to start tokenizing the phrases
// 		char words[200]; // character array(string) declared having size 200
// 		char* word = 0; // word is pointer to char which is	initialised with 0
// 		int w_counter; // varialble w_counter of int data-type is declared
// 		while (TRUE) // initiate the while iteration
// 		// while loop do looping till the user does not want to quit tokenizing
// 		{
// 		printf("Type a few words seperated by space(q - to quit):\n");
// 	//prompt user to enter the words where there are spaces between them
// 	gets(words); // read and store the user input in words
// 	//exit while loop if the input (words) is equal "q"
// 	if (strcmp(words, "q") == 0)
// 		break; 
	
// 	word = strtok(words, " "); 
// 	w_counter = 1; // w_counter is assigned to 1
// 	while (word) // initiate the while iteration annd loops run until there is no word string left to be tokenized
// 	{
// 	printf("Word #%d is \'%s\'\n", w_counter++,word); // print the index(w_counter) of token(word) and token(word) itself.
//     	word = strtok(NULL, " "); // returns null pointer while no tokens left to be retreived
// 	}
// 		}
// 	printf("*** End of Tokenizing Words Demo ***\n\n"); // print header to end the tokenizing after concatenating process


// }


//       /*version 2 */

//     printf("*** Start of Tokenizing Phrases Demo ***\n"); // print header to start tokenizing the phrases
// 		char phrases[200]; // character array(string) declared having size 200
// 		char* phrase; // phrase is pointer to char which is	initialised with 0
// 		int p_counter; // varialble p_counter of int data-type is declared
// 		while (TRUE) // initiate the while iteration
// 		// while loop do looping till the user does not want to quit tokenizing
// 		{
// 		printf("Type a few phrases separated by comma(q - to quit):\n");
// 	//prompt user to enter the phrases where there are spaces between them
// 	gets(phrases); // read and store the user input in words
// 	//exit while loop if the input (words) is equal "q"
// 	if (strcmp(phrases, "q") == 0)
// 		break; 
	
// 	phrase = strtok(phrases, ","); 
// 	p_counter = 1; // p_counter is assigned to 1
// 	while (phrase) // initiate the while iteration annd loops run until there is no word string left to be tokenized
// 	{
// 	printf("Phrase #%d is \'%s\'\n", p_counter++,phrase); // print the index(p_counter) of token(word) and token(word) itself.
//     	phrase = strtok(NULL, ","); // returns null pointer while no tokens left to be retreived
// 	}
// 		}
// 	printf("*** End of Tokenizing Phrases Demo ***\n\n"); // print header to end the tokenizing after concatenating process


// }

       /* version 3 */

    printf("*** Start of Tokenizing Sentences Demo ***\n"); // print header to start tokenizing the sentences
		char sentences[200]; // character array(string) declared having size 200
		char* sentence; // sentence is pointer to char which is	initialised with 0
		int s_counter; // varialble s_counter of int data-type is declared
		while (TRUE) // initiate the while iteration
		// while loop do looping till the user does not want to quit tokenizing
		{
		printf("Type a few sentences separated by dot(q - to quit):\n");
	//prompt user to enter the sentences where there are spaces between them
	gets(sentences); // read and store the user input in sentences
	//exit while loop if the input (sentences) is equal "q"
	if (strcmp(sentences, "q") == 0)
		break; 
	
	sentence = strtok(sentences, "."); 
	s_counter = 1; // s_counter is assigned to 1
	while (sentence) // initiate the while iteration annd loops run until there is no word string left to be tokenized
	{
	printf("Sentence #%d is \'%s\'\n", s_counter++, sentence); // print the index(s_counter) of tokens(words) and tokens(words) itself.
    	sentence = strtok(NULL, "."); // returns null pointer while no tokens left to be retreived
	}
		}
	printf("*** End of Tokenizing Sentences Demo ***\n\n"); // print header to end the tokenizing after concatenating process

}