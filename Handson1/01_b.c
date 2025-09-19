/*
============================================================================
Name : 01_b.c
Author : Kartik Ahluwalia
Description : Create a hard link file using the `link` system call
Date: 20nd Aug, 2025.
============================================================================
*/

#include<unistd.h>	// Import link
#include<stdio.h>	// Import printf and perror

int main(int argc, char *argv[]){
	if(argc != 3){
		printf("Enter target and source\n");
		return 0;
	}
	const char *source = argv[1];
	const char *target = argv[2];
	
	int status = link(source,target);

	if(status == -1){
		perror("Error while craeting head\n");	
	}else{
		printf("creation successfully\n");
	}
}

/*
./a.out source.txt hardLink 
Hard Link created successfully


*/
