#include <stdio.h>
#include <stdint.h>
int bit,pos,res;
uint32_t extract_even_bits(uint32_t reg) 
{	   
	res=0,pos=0;
	for(bit=0;bit<=31;bit+=2)
	{
		if(reg & (1<<bit))
		{
			res |=(1<<pos);
		}
		pos++;
	}
	return res;
}
int main() 
{
	uint32_t reg;
	scanf("%u", &reg);
	printf("%u", extract_even_bits(reg));
	return 0;
}
