#include "../includes/libft.h"

void ft_freetab(char ** tab){
    int i = 0;
    while (tab[i] != NULL){
        free(tab[i]);
        i++;
    }
    free(tab);
}