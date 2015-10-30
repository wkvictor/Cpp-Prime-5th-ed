// #include "Chapter6.h"

long long fact(long long val)
{
	if (val == 0 || val == 1)
		return 1LL;
	else 
		return val * fact(val-1);

}