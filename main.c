/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:28:39 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/08 18:32:12 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
	char teste[] = "teste";
	char teste2[] = "luiz";
	char teste3[] = "sabao";
	// int number = 30;
	// printf("%.90f\n",10.92);
	// printf("%c\n", 't');
	// printf("<%-10s>\n", "teste");
	// printf("%p\n", teste);
	// printf("%x\n", 124312);
	// printf("%#X\n", 123123);
	// printf("%i\n", 16);
	//  printf("%u\n",-1);
	// printf("%x\n", 15);
	// printf("%X\n", 15);
	// printf("%%\n");
	// printf("%-5s\n","pokemon");
	// printf("%#x\n", 15);
	// printf("%d\n", -15);
	// printf("<%20f>\n",(float) 15);
	// printf("<%+020.10f>\n", 15.92);
	// printf("%+0d\n", 15);
	// printf("%+.2f\n", 15.21);
	// printf("%-10da\n", number);
	// printf("%10da\n", number);
	// printf("%-#2f\n",(float) number);
	// printf("%#f\n", (float) number);
	// printf(" = size :%d\n",printf("%-s", teste));
	// printf("= %d\n",printf("%-22s.", teste));
	// printf("= %d\n",printf("%22s.", teste));
	
	
	printf("TESTE STRING\033[1;32m\n");
	printf(" len = %d\n",ft_printf(" %.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 "));
	printf(" len = %d\n",printf(" %.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 "));
	printf(" len = %d\n",ft_printf("MyFunc =<%.s>", ""));
	printf(" len = %d\n",printf("Origin =<%.s>", ""));
	printf(" len = %d\n",ft_printf("MyFunc =<%22s>", teste));
	printf(" len = %d\n",printf("Origin =<%22s>", teste));
	
	// printf("\033[1;0m\nTESTE MULTI STRING\033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%-7s> <%-7s> <%-7s>", teste,teste3, teste2));
	// printf(" len = %d\n",printf("Origin =<%-7s> <%-7s> <%-7s>",teste, teste3, teste2));
	// printf(" len = %d\n",printf("Origin =<%22s> <%22s> <%22s>",teste, "coco", "lelasdasde"));
	// printf(" len = %d\n",ft_printf("MyFunc =<%22s> <%22s> <%22s>",teste, "coco", "lelasdasde"));
	

	// printf(" len = %d\n",printf(" %p %p ", 0, 0));
	// printf(" len = %d\n",ft_printf(" %p %p ", 0, 0));
	
	// printf("\033[1;0m\nTESTE CHAR\033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%2c>", 'L'));
	// printf(" len = %d\n",printf("Origin =<%2c>", 'L'));
	// printf(" len = %d\n",ft_printf("MyFunc =<%-5c>", 'a'));
	// printf(" len = %d\n",printf("Origin =<%-5c>", 'a'));

	// printf("\033[1;0m\nTESTE MULT CHAR\033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%2c> <%2c> <%2c>", 'L', 'a', 'b'));
	// printf(" len = %d\n",printf("Origin =<%2c> <%2c> <%2c>", 'L', 'a', 'b'));
	
	// printf(" len = %d\n",ft_printf(" %c,%c,%c ", '0', 0, '1'));	
	// printf(" len = %d\n",printf(" %c,%c,%c ", '0', 0, '1'));
	// printf(" len = %d\n",ft_printf(" %c %c %c ", '2', '1', 0));
	// printf(" len = %d\n",printf(" %c %c %c ", '2', '1', 0));
	// printf(" len = %d\n",ft_printf(" %c %c %c ", 0, '1', '2'));
	// printf(" len = %d\n",printf(" %c %c %c ", 0, '1', '2'));
	
	// // printf("\033[1;0m\nTESTE ADRESS\033[1;32m\n");
	// // printf(" len = %d\n",printf("Origin =<%-20p>", teste));
	// printf(" len = %d\n",ft_printf("MyFunc =<%-20p>", teste));
	// printf(" len = %d\n",printf("Origin =<%20p>", teste));
	// printf(" len = %d\n",ft_printf("MyFunc =<%20p>", teste));

	// printf("\033[1;0m\nTESTE MULTI ADRESS\033[1;32m\n");
	// printf(" len = %d\n",printf("Origin =<%-20p> <%-20p> <%-20p>", teste, teste3, teste2));
	// printf(" len = %d\n",ft_printf("MyFunc =<%-20p> <%-20p> <%-20p>",teste, teste3, teste2));
	// printf(" len = %d\n",printf("Origin =<%20p> <%20p> <%20p>",teste,teste3, teste2));
	// printf(" len = %d\n",ft_printf("MyFunc =<%20p> <%20p> <%20p>", teste,teste3, teste2));
	
	// printf("\033[1;0m\nTESTE MULT D \033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%10d> <%7.5d> <%d>", -20, 400, 123123));
	// printf(" len = %d\n",printf("Origin =<%+10d> <%7.5d> <%2d>", -20, 400, 123123));
	// printf(" len = %d\n",ft_printf("MyFunc =<%5d> <%5d> <%-6d>", 20, 70,400));
	// printf(" len = %d\n",printf("Origin =<%5d> <%5d> <%-6d>", 20, 70,400));

	// printf("\033[1;0m\nTESTE MULT i \033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%d>", 10));
	// printf(" len = %d\n",printf("Origin =<%d>", 0));
	// printf(" len = %d\n",ft_printf("MyFunc =<%5i> <%5i> <%-6i>", 20, 70,4000));
	// printf(" len = %d\n",printf("Origin =<%5i> <%5i> <%-6i>",20, 70,4000));

	// printf("\033[1;0m\nTESTE MULT u \033[1;32m\n");
	// printf(" len = %d\n",ft_printf("MyFunc =<%u> <%7.5u> <%u>",LONG_MAX, 400, 123123));
	// printf(" len = %d\n",printf("Origin =<%u> <%7.5u> <%2u>", LONG_MAX, 400, 123123));
	// printf(" len = %d\n",ft_printf("MyFunc =<%5u> <%5u> <%-6u>", 20, 70,400));
	// printf(" len = %d\n",printf("Origin =<%5u> <%5u> <%-6u>", 20, 70,400));

// 	printf("\033[1;0m\nTESTE MULT x \033[1;32m\n");
// 	printf(" len = %d\n",ft_printf("MyFunc =<%10x> <%7.5x> <%x>", -20, 400, 123123));
// 	printf(" len = %d\n",printf("Origin =<%10x> <%7.5x> <%2x>", -20, 400, 123123));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%5x> <%5x> <%-6x>", 20, 70, 400));
// 	printf(" len = %d\n",printf("Origin =<%5x> <%5x> <%-6x>", 20, 70,400));

// 	printf("\033[1;0m\nTESTE MULT X \033[1;32m\n");
// 	printf(" len = %d\n",ft_printf("MyFunc =<%10X> <%7.5X> <%X>", -20, 400, 123123));
// 	printf(" len = %d\n",printf("Origin =<%10X> <%7.5X> <%2X>", -20, 400, 123123));
// 	printf(" len = %d\n",ft_printf("MyFunc =<%5X> <%#10.7X> <%-6X>", 20, 350, 40));
// 	printf(" len = %d\n",printf("Origin =<%5X> <%#10.7X> <%-6X>", 20, 350, 40));
// 	printf("\033[1;0m");

	// printf("\033[1;0m\nTESTE MULT %% \033[1;32m\n");
	// printf(" = len %d\n", printf(" %% "));
	// printf(" = len %d\n\n", ft_printf(" %% "));
	// printf(" = len %d\n", printf(" %%%% "));
	// printf(" = len %d\n", ft_printf(" %%%% "));
	// printf(" = len %d\n", printf(" %% %% %% "));
	// printf(" = len %d\n", ft_printf(" %% %% %% "));
	// printf(" = len %d\n", printf(" %%  %%  %% "));
	// printf(" = len %d\n", ft_printf(" %%  %%  %% "));
	// printf(" = len %d\n", printf(" %%   %%   %% "));
	// printf(" = len %d\n", ft_printf(" %%   %%   %% "));
	// printf(" = len %d\n", printf("%%"));
	// printf(" = len %d\n", ft_printf("%%"));
	// printf(" = len %d\n", printf("%% %%"));
	// printf(" = len %d\n", ft_printf("%% %%"));

	// printf("\033[1;0m\nTESTE flags 0 \033[1;32m\n");
	// printf(" = len %d\n", printf("%011d", LONG_MAX));
	// printf(" = len %d\n", ft_printf("%011d", LONG_MAX));
	// printf(" = len %d\n", printf("%011d", LONG_MAX));

}