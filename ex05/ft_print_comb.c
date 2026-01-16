#include <unistd.h>

void    ft_print_comb(void)
{
    char    i;
    char    j;
    char    k;
    char    output[3];
    char    spacing[2];    
    
    spacing[0] = ',';
    spacing[1] = ' ';
    
    i = '0';
    while (i <= '7')
    {
        j = i;
        while (j <= '8')
        {
            k = j;
            while (k <= '9')
            {
                if (i != j && j != k && i != k)
		{
			output[0] = i;
                	output[1] = j;
                	output [2] = k;
                	write(1, &output, 3);
                if (i != '7' || j != '8' || k != '9')
                {
                	write(1, &spacing, 2);	
                }
                else 
                {
                	write(1, "\n", 1);
                }
		}
                k++;
            }
            j++;
            
        }
        i++;
    }
}



int main()
{
    ft_print_comb();
  
    return (0);
}
