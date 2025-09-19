/*
============================================================================
Name : 27_b.c
Author : Kartik Ahluwalia
Description : Write a program to execute `ls -Rl` by the following system calls 
    b. `execlp` 
Date: 4th Sep, 2025.
============================================================================
*/

#include <unistd.h> // Import for `execlp` function
#include <stdio.h>  // Import for `printf` function

int main(){
	char *command_line = "/bin/ls";
	char *options = "-Rl";
	
	printf("===== Output using execlp =====\n");
	execlp(command_line,command_line,options,NULL);
	printf("\n");
	return 0;
}
/*
./a.out 
===== Output using execl =====
total 488
-rw-r--r--  1 kartikahluwalia  staff    819 Sep 1 12:1 01_a.c
-rw-r--r--  1 kartikahluwalia  staff    772 Sep 1 12:30 01_b.c
-rw-r--r--  1 kartikahluwalia  staff   115 Sep 1 12:1 01_c.c
-rw-r--r--  1 kartikahluwalia  staff    249 Aug 29 09:05 01_shell.sh
-rw-r--r--  1 kartikahluwalia  staff    446 Sep 1 12:30 02.c
-rw-r--r--  1 kartikahluwalia  staff    997 Sep 1 12:30 03.c
-rw-r--r--  1 kartikahluwalia  staff   1184 Sep 1 12:31 04.c
-rw-r--r--  1 kartikahluwalia  staff    997 Sep 1 12:32 05.c
-rw-r--r--  1 kartikahluwalia  staff    754 Sep 1 12:33 06.c
-rw-r--r--  1 kartikahluwalia  staff   2043 Sep 1 12:33 07.c
-rw-r--r--  1 kartikahluwalia  staff   1765 Sep 1 12:33 08.c
-rw-r--r--  1 kartikahluwalia  staff   1915 Sep 1 12:34 09.c
-rw-r--r--  1 kartikahluwalia  staff   1369 Sep 1 12:35 10.c
-rw-r--r--  1 kartikahluwalia  staff   1344 Sep 1 12:38 11_a.c
-rw-r--r--  1 kartikahluwalia  staff   1408 Sep 1 12:36 11_b.c
-rw-r--r--  1 kartikahluwalia  staff   1382 Sep 1 12:36 11_c.c
-rw-r--r--  1 kartikahluwalia  staff   2782 Sep 1 12:37 12.c
-rw-r--r--  1 kartikahluwalia  staff   1217 Sep 1 12:39 13.c
-rw-r--r--  1 kartikahluwalia  staff   1635 Sep 2 09:1 14.c
-rw-r--r--  1 kartikahluwalia  staff    480 Sep 1 12:39 15.c
-rw-r--r--  1 kartikahluwalia  staff   1406 Sep 1 12:40 16_a.c
-rw-r--r--  1 kartikahluwalia  staff   1821 Sep 1 12:41 16_b.c
-rw-r--r--  1 kartikahluwalia  staff   2037 Sep 1 12:49 17_a.c
-rw-r--r--  1 kartikahluwalia  staff   2444 Sep 1 12:43 17_b.c
-rw-r--r--  1 kartikahluwalia  staff   3097 Sep 2 20:1 18.c
-rw-r--r--  1 kartikahluwalia  staff   121 Sep 1 12:44 19.c
-rw-r--r--  1 kartikahluwalia  staff    826 Sep 1 12:44 20.c
-rw-r--r--  1 kartikahluwalia  staff    652 Sep 1 12:44 21.c
-rw-r--r--  1 kartikahluwalia  staff    976 Sep 1 12:45 22.c
-rw-r--r--  1 kartikahluwalia  staff   1256 Sep 1 12:45 23.c
-rw-r--r--  1 kartikahluwalia  staff   1125 Sep 1 12:45 24.c
-rw-r--r--  1 kartikahluwalia  staff   1638 Sep 2 09:34 25.c
-rw-r--r--  1 kartikahluwalia  staff    600 Sep 1 12:46 26.c
-rw-r--r--  1 kartikahluwalia  staff    610 Sep 1 12:46 27_a.c
-rw-r--r--  1 kartikahluwalia  staff    614 Sep 1 12:47 27_b.c
-rw-r--r--  1 kartikahluwalia  staff    619 Sep 1 12:47 27_c.c
-rw-r--r--  1 kartikahluwalia  staff    567 Sep 1 12:48 27_d.c
-rw-r--r--  1 kartikahluwalia  staff    571 Sep 1 12:48 27_e.c
-rw-r--r--  1 kartikahluwalia  staff    840 Sep 1 12:48 28.c
-rw-r--r--  1 kartikahluwalia  staff   1465 Sep 3 20:15 1.c
-rw-r--r--  1 kartikahluwalia  staff   4434 Sep 1 19:03 30.c
-rwxrwxrwx  1 kartikahluwalia  staff    16 Sep 1 19:02 30.sh
-rwxr-xr-x  1 kartikahluwalia  staff  33536 Sep 3 19:02 Q14
-rwxr-xr-x  1 kartikahluwalia  staff  33464 Sep 4 09:35 a.out
drwxr-xr-x  4 kartikahluwalia  staff    128 Sep 5 20:30 support_folder

./support_folder:
total 16
-rwx------  1 kartikahluwalia  staff  24 Sep 30 18:01 18-file.txt
-rwx------  1 kartikahluwalia  staff   1 Sep 1 12:01 ticket_file.txt
*/