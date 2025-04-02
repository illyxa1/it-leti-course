#include <cassert>
#include "increments.h"

int main()
{
	long int a = 5;
	
	assert(post_inc(&a) == 5);
	assert(a == 6);
	assert(pref_inc(&a) == 7);

	return 0;
}
