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

long get_char_from_int_range_as_long(int num, int start, int end)
{
	
}

char get_char_from_int(int num, int idx)
{

}

int main(){
	printf("%i\n", count_int_digits(9999));
}
