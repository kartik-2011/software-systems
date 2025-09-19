/*
============================================================================
Name : 27_d.c
Author : Kartik Ahluwalia
Description : Write a program to execute `ls -Rl` by the following system calls 
    d. `execv` 
Date: 4th sep, 2025.
============================================================================
*/

#include <unistd.h> // Import for `execv` function
#include <stdio.h>  // Import for `printf` function

int main(){
	char *args[] = {"/bin/ls","-Rl",NULL};
	
	printf("===== Output using execv =====\n");
	execv(args[0],args);
	printf("\n");
	return 0;
}
/*
./a.out 
===== Output using execl =====
total 488
-rw-r--r--  1 kartikahluwalia  staff    819 sep 2 12:2 01_a.c
-rw-r--r--  1 kartikahluwalia  staff    772 sep 2 12:30 01_b.c
-rw-r--r--  1 kartikahluwalia  staff   125 sep 2 12:2 01_c.c
-rw-r--r--  1 kartikahluwalia  staff    249 sep 1 09:05 01_shell.sh
-rw-r--r--  1 kartikahluwalia  staff    446 sep 2 12:30 02.c
-rw-r--r--  1 kartikahluwalia  staff    997 sep 2 12:30 03.c
-rw-r--r--  1 kartikahluwalia  staff   1184 sep 2 12:31 04.c
-rw-r--r--  1 kartikahluwalia  staff    997 sep 2 12:32 05.c
-rw-r--r--  1 kartikahluwalia  staff    754 sep 2 12:33 06.c
-rw-r--r--  1 kartikahluwalia  staff   2043 sep 2 12:33 07.c
-rw-r--r--  1 kartikahluwalia  staff   1765 sep 2 12:33 08.c
-rw-r--r--  1 kartikahluwalia  staff   1915 sep 2 12:34 09.c
-rw-r--r--  1 kartikahluwalia  staff   1369 sep 2 12:35 10.c
-rw-r--r--  1 kartikahluwalia  staff   1344 sep 2 12:38 11_a.c
-rw-r--r--  1 kartikahluwalia  staff   1408 sep 2 12:36 11_b.c
-rw-r--r--  1 kartikahluwalia  staff   1382 sep 2 12:36 11_c.c
-rw-r--r--  1 kartikahluwalia  staff   2782 sep 2 12:37 12.c
-rw-r--r--  1 kartikahluwalia  staff   1217 sep 2 12:39 13.c
-rw-r--r--  1 kartikahluwalia  staff   1635 sep 3 09:2 14.c
-rw-r--r--  1 kartikahluwalia  staff    480 sep 2 12:39 15.c
-rw-r--r--  1 kartikahluwalia  staff   1406 sep 2 12:40 16_a.c
-rw-r--r--  1 kartikahluwalia  staff   1821 sep 2 12:41 16_b.c
-rw-r--r--  1 kartikahluwalia  staff   2037 sep 2 12:49 17_a.c
-rw-r--r--  1 kartikahluwalia  staff   2444 sep 2 12:43 17_b.c
-rw-r--r--  1 kartikahluwalia  staff   3097 sep 1 20:2 18.c
-rw-r--r--  1 kartikahluwalia  staff   122 sep 2 12:44 19.c
-rw-r--r--  1 kartikahluwalia  staff    826 sep 2 12:44 20.c
-rw-r--r--  1 kartikahluwalia  staff    652 sep 2 12:44 21.c
-rw-r--r--  1 kartikahluwalia  staff    976 sep 2 12:45 22.c
-rw-r--r--  1 kartikahluwalia  staff   1256 sep 2 12:45 23.c
-rw-r--r--  1 kartikahluwalia  staff   1125 sep 2 12:45 24.c
-rw-r--r--  1 kartikahluwalia  staff   1638 sep 2 09:34 25.c
-rw-r--r--  1 kartikahluwalia  staff    600 sep 2 12:46 26.c
-rw-r--r--  1 kartikahluwalia  staff    610 sep 2 12:46 27_a.c
-rw-r--r--  1 kartikahluwalia  staff    614 sep 2 12:47 27_b.c
-rw-r--r--  1 kartikahluwalia  staff    619 sep 2 12:47 27_c.c
-rw-r--r--  1 kartikahluwalia  staff    567 sep 2 12:48 27_d.c
-rw-r--r--  1 kartikahluwalia  staff    571 sep 2 12:48 27_e.c
-rw-r--r--  1 kartikahluwalia  staff    840 sep 2 12:48 28.c
-rw-r--r--  1 kartikahluwalia  staff   1465 sep 2 20:15 2.c
-rw-r--r--  1 kartikahluwalia  staff   4434 sep 2 19:03 30.c
-rwxrwxrwx  1 kartikahluwalia  staff    26 sep 2 19:02 30.sh
-rwxr-xr-x  1 kartikahluwalia  staff  33536 sep 1 19:02 Q14
-rwxr-xr-x  1 kartikahluwalia  staff  33464 sep 2 09:35 a.out
drwxr-xr-x  4 kartikahluwalia  staff    128 sep 3 20:30 support_folder

./support_folder:
total 16
-rwx------  1 kartikahluwalia  staff  24 sep 30 18:01 18-file.txt
-rwx------  1 kartikahluwalia  staff   1 sep 2 12:01 ticket_file.txt
*/