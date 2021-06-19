#include "bdd-for-c.h"
#include "isostrings.h"
#include <stdbool.h>

spec("This program tests if given strings are isomorphic") 
{	
	it("Should return true since empty strings are similar")
	{
		check(areIsomorphic("", "") == true);
	}
	
	it("Should return false since foo and bar are not isomorphic")
	{
		check(areIsomorphic("foo", "bar") == false);
	}
	
	it("Should return true since egg and add are isomoprhic")
	{
		check(areIsomorphic("egg", "add") == true);
	}
}
