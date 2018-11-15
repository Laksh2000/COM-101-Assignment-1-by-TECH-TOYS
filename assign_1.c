//WAP that logs when a given file was modified.

#include <stdio.h>
#include<time.h>
#include <sys/stat.h>
void main()
{
	char file[]="/var/log";      //put address of the file here
	char t[100]="";             //array for storing the time stamp
	struct stat b;           //initializing a system struct 'b'   
	for(int i=0;;i++)
	{
		if (!stat(file,&b))  // A system struct 'b' that stores information of the given file
	{
		strftime(t,100,"%d/%m/%Y %H:%M:%S",localtime(&b.st_mtime));   //function used for producing time stamp
		printf("\nLast modified date and time : %s\n",t);       //printing time stamp
	}
	else
	{
		printf("Cannot display the time\n");
		break;
	}
	long long int delay;
	for(delay=0;delay<120000000000;delay++)           //loop used for delaying the programme for 5 minutes
	{}
	}
	
}
