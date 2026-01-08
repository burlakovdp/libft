#include "../includes/libft.h"

int ft_length (char * sentence, char s){

    int counter_words = 0;
    int global_counter_letters = 0;
    int counter_space = 0;
    int counter_letters = 0;
    int i = 0;

    if(sentence == NULL)
    return -1;

    while(sentence[i] != '\0'){

        if(sentence[i] == s)
        counter_space++;

        i++;
    }
    global_counter_letters = strlen(sentence);
    global_counter_letters -= counter_space;

    i = 0;

    while(sentence[i] != '\0'){

        

        if(sentence[i] != s){
            counter_letters++;
        }

        if(sentence[i] == s && counter_letters != 0){
        counter_words++;
        global_counter_letters -= counter_letters;
        counter_letters = 0;
        }
        i++;
        
    }

    if(global_counter_letters != 0)
    counter_words++;

    return counter_words;


}