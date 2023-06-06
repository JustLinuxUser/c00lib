/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:23:40 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/06 17:07:07 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int count_int_digits(int num)
{
	int result;

	result = 0;
	while (num != 0){
		result++;
		num = num/10;
	}
	return result;
}


char get_char_from_int(int num, int idx)
{
	int iter;
	int prev;
	char result;
	
	idx++;
	if (count_int_digits(num) <= idx)
		return '\0';
	iter = 0;
	prev = 0;
	while (iter < idx)
	{
		prev = num;
		num /= 10; 
		iter++;
	}
	result = '0' + prev - num * 10; 
	//printf("%i %i \n", prev, num);
	return result;
}

char* get_char_from_int_range(int num, int start, int end)
{
	static char result[6]; //bec max int is 32767, + \0
	int len;
	int iter;
	
	len = count_int_digits(num);
	iter = 0;
	if (len < end)
		return NULL;
	while (iter <=  end - start){
		result[iter] = get_char_from_int(num, iter);
		iter++;
	}
	result[len] = '\0';
	return result;
}

int main(){
	printf("%s\n", get_char_from_int_range(12324, 1, 4));
	printf("%c\n", get_char_from_int(12345, 1));
}
