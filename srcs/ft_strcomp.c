#include "../includes/libft.h"

int ft_strcomp(char * a, char * b){

    if(a == NULL || b == NULL || ft_strlen(a) != ft_strlen(b)){
        return -1;
    }

    for(int i = 0; i < ft_strlen(a); i++){

        if(a[i]-'0' != b[i]-'0'){
            
            return 1;
        }

    }

    return 0;
}