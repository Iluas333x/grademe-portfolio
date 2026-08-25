#include <unistd.h>

// This file does not build yet. The output is already right, the declaration is
// not: repair the build without changing a single printed byte.
void	print_report(void)
{
	write(1, "status: green\n", 14);
	write(1, "tests: 12 passed\n", 17);
	write(1, "warnings: 0\n", 12);
	
}

int	main()
{
	print_report();
}
