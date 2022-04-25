1 #include "main.h"

2 /**
3 * print_triangle - prints triangle
4 * @size: print size
5 * Return: Always zero
6 */
7
8 void print_triangle(int size)
9  {
10 
11 int i;
12 int z;
13 int d;
14 int p;
15
16 if (size > 0)
{ 
	d = size -1;
	for (i = 0; i < size ; i++)
	{
		for (z = d; z > 0 ; z--)
		{
			_putchar (' ');
		}

		for (p = 0; p<= i; p++)
		{
			_putchar (35);
		}
		
		d--;

		_putchar ('\n');

	}

}

else 
{
	_putchar ('\n');
}
}
