#include "../includes/libft.h"

char* ft_strcopy(char*src, char*dest){

    int i = 0;  
    if(!src || !dest){
        return (NULL);
    }
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
        
    } 
    dest[i] = '\0';
    return dest;
}