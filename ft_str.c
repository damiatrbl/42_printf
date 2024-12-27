#include "ft_printf.h"

int ft_str(char *str)
{
    int i;
    
    if (str == NULL)
    {
        return (0);
    }
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

/*
int main()
{
    ft_str("test");
}
*/
