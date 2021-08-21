#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int 
main(int argc, char *argv[])
{
	printf(1,"La cantidad de procesos en ejecucion en la CPU es: %d\n", getprocs());
	exit();
}
