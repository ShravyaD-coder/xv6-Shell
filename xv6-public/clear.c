#include "types.h"
#include "user.h"
void clear(int x)
{
	if(x=='x')
		return;
	printf(1,"\xa");
	clear(x+('1'-48));
}
int main(int argc, char *argv[])
{
	clear('A');
	exit();
}

