#include "bdd-for-c.h"
#include "isostrings.h"
#include <stdbool.h>

spec("This program tests if given strings are isomorphic") 
{	
	it("Should return true since empty strings are similar")
	{
		check(areIsomorphic("", "") == true);
	}
}
