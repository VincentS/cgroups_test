/*
* Small test for scope of process restricted by cgroups
*
*
*/



#include <stdio.h>
#include <sys/sysinfo.h>
#include <unistd.h>

int main(int argc,char *argv) {

	printf("Available # of processors:\t%d\n",get_nprocs());
	printf("Available # of processors in system overall:\t%d\n",get_nprocs_conf());

	printf("Page size:\t%d\n", getpagesize());
	printf("Number of Physical Pages:\t%lu\n", get_phys_pages());
	printf("Available Pages of Memory\t%ld\n",get_avphys_pages());

	return 0;



}
