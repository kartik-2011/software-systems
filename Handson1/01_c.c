/*
============================================================================
Name : 01_c.c
Author : Kartik Ahluwalia
Description : Create a FIFO file using the `mkfifo` library function or `mknod` system call
Date: 21nd Aug, 2025.
============================================================================
*/

#include<sys/types.h> // Import data type used in System call
#include<sys/stat.h>  // Import micros for data type in System call
#include<stdio.h>     // Import printf and perror

int main(int argc, char *argv[]){
	if(argc != 3){
		printf("Enter 2 file names FIFO with mkfifo and mknod\n");
		return 0;
	}	
	const char *mkfifoName = argv[1];
	const char *mknodName = argv[2];

	int mkfifo_status = mkfifo(mkfifoName, S_IRWXU);
	
	if(mkfifo_status == -1){
		perror("Error while creating FIFO mkfifo\n");
	}else{
		printf("FIFO mkfifo creation successfully\n");
	}

	int mknod_status = mknod(mknodName, S_IFIFO | S_IRWXU ,0); // 3rd arguement is for dev_t which is not required for FIFO file

	if(mknod_status == -1){
		perror("Error while creating FIFO  mknod\n");
	}else{
		printf("FIFO mknod creation successfully\n");
	}
}

/*
./a.out mkfifo mknod
Created FIFO file with mkfifo successfully
Created FIFO file with mknod successfully

*/
