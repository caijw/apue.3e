#include "apue.h"

int
main(void)
{
	printf("hello world from process ID %ld, uid = %d, gid = %d\n", (long)getpid(), getuid(), getgid() );
	exit(0);
}
