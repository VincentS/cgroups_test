/*
* Small test for scope of process restricted by cgroups
*
*
*/



#include <stdio.h>
#include <sys/sysinfo.h>
#include <unistd.h>

#include <pthreads.h>


int main(int argc,char *argv) {



	//Was interested if pthreads returns another number of available cores than sysconf

	printf("Available # of processors (Pthread):\t%d\n",pthread_num_processors_np());
	printf("Available # of processors (sysconf):\t%d\n",get_nprocs());
	printf("Available # of processors in system overall:\t%d\n",get_nprocs_conf);

	printf("Page size:\t%d\n", getpagesize());
	printf("Pages of Physical Pages:\t%lu\n", get_phys_pages());
	printf("Available Pages of Memory\t%ld\n",get_avphys_pages);

	return 0;



}
