#include <unistd.h>

void    ft_print_comb2(void)
{
    char    i;
    char    j;
    char    k;
    char    l;
    char    output[5];

    output[2]=' ';
    i = '0';
    while (i <= '9')
    {
        j = '0';
        while (j <= '9')
        {       
        	k = i;
        	while (k <= '9')
        	{
			l = j;
			while (l <= '9')
			{
				output[0] = i;
				output[1] = j;
				output[3] = k;
				output[4] = l;
				if (output[0] != output[3] || output[1] != output[4])
				{
					write(1, &output, 5);
					if (output[0] != '9' || output[1] != '9' || output[3] != '9' || output[4] != '9')                
					{
						write(1, ", ", 2);	
					}
					else 
					{
						write(1, "\n", 1);
					}
					}

				
				l++;
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
    ft_print_comb2();
    return (0);
}
