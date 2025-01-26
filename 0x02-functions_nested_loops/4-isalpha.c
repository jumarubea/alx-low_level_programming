/**
 * _isalpha - function to check (a-zA-Z)
 *
 * Description: it is function
 * @c : params
 *
 * Return: 1 if satisfy and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
