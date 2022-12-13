#include "main.h"
/**
 *  _isalpha - checks if a character i is alphabetic 
 * @c: the xharacter to be checked
 *
 * Return: if character is lowercase or uppeecase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
