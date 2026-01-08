#include "../includes/libft.h"

char * ft_strdup(char *str){

    if(str == NULL){
        return NULL;
    } 

    int memoryCounter = 0;
    
    while(str[memoryCounter] != '\0'){
        memoryCounter++;
    }

    char * res = malloc((memoryCounter + 1) * sizeof(char));

    for(int i = 0; i < memoryCounter; i++){
        res[i] = str[i];
    }
    res[memoryCounter] = '\0';
    
    return res;
}