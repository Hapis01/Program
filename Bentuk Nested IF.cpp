#include <iostream>
	int main()
	{
	int a = 10;
	int b = 5;
	int c = 2;

	if(a% b == 0)
	{
		printf("%d adalah bilangan kelipatan %d\n",a,b);
		if(a%c == 0)
		{
			printf("%d adalah bilangan genap\n",a);
		}
		else
		{
			printf("%d adalah bilangan ganjil\n",a);
		}
	} 
	return 0;
}
