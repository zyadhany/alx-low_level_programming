#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _isalpha - start
 * Return:0
*/

int _isalpha(int c)
{
	return (islower(c) || isupper(c));
}
