#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise
 * @c : to be checked
*/

int _isalpha(int c)

{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
