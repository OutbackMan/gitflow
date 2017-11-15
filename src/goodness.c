#include <stdint.h>

uint8_t some_func(void)
{
	return (uint8_t) (10 << 2) + (3 & 1);
}
