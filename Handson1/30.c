/*
============================================================================
Name : 30.c
Author : Kartik Ahluwalia
Description : Write a program to run a script at a specific time using a Daemon process
Date: 6th Sep, 2025.
============================================================================
*/

#include <time.h>      // Import for time related stuff
#include <stdio.h>     // Import for printf
#include <sys/types.h> // Import for fork, setsid
#include <unistd.h>    // Import for fork, setsid
#include <stdlib.h>    // Import atoi

void runScript(){
    char *command_line = "./30.sh";
	
	execl(command_line,command_line,NULL);
}

// Argument to be passed as hour minute second
// hour is mandatory
int main(int argc, char *argv[])
{

    time_t currentEpoch, deadlineEpoch; // Current system time & deadline time in epoch
    struct tm *deadline;                // Deadline in user readable format

    pid_t child;

    if (argc < 2){
        printf("Pass at least one argument\n");
        return 0;
    }
    time(&currentEpoch); // Get current time
    deadline = localtime(&currentEpoch);

    deadline->tm_hour = atoi(argv[1]);
    deadline->tm_min = argv[2] == NULL ? 0 : atoi(argv[2]);
    deadline->tm_sec = argv[3] == NULL ? 0 : atoi(argv[3]);

    deadlineEpoch = mktime(deadline); // Convert dealine to epoch

    if ((child = fork()) == 0)
    {
        setsid();

        if (difftime(deadlineEpoch, currentEpoch) <= 0){
            printf("TIME EXPIRED");
            return 0;
        }

        do
        {
            time(&currentEpoch);
        } while (difftime(deadlineEpoch, currentEpoch) > 0);
        printf("Executing ls command in Daemon Process in script!\n");
        runScript();
    }
    return 0;
}
/*
./a.out 11 6 50
Executing ls command in Daemon Process in script
total 456
-rw-r--r--  1 kartikahluwalia  staff    650 Sep 2 09:2 01_a.c
-rw-r--r--  1 kartikahluwalia  staff    603 Sep 3 18:20 01_b.c
-rw-r--r--  1 kartikahluwalia  staff   116 Sep 2 12:1 01_c.c
-rw-r--r--  1 kartikahluwalia  staff    49 Sep 2 09:05 01_shell.sh
-rw-r--r--  1 kartikahluwalia  staff    278 Sep 2 12:1 02.c
-rw-r--r--  1 kartikahluwalia  staff    85 Sep 3 18:20 03.c
-rw-r--r--  1 kartikahluwalia  staff   1017 Sep 1 10:50 04.c
-rw-r--r--  1 kartikahluwalia  staff    830 Sep 3 18:13 05.c
-rw-r--r--  1 kartikahluwalia  staff    586 Sep 4 18:40 06.c
-rw-r--r--  1 kartikahluwalia  staff   1879 Sep 4 18:42 07.c
-rw-r--r--  1 kartikahluwalia  staff   1597 Sep 5 10:14 08.c
-rw-r--r--  1 kartikahluwalia  staff   1751 Sep 4 18:43 09.c
-rw-r--r--  1 kartikahluwalia  staff   1204 Sep 4 18:40 10.c
-rw-r--r--  1 kartikahluwalia  staff   1174 Sep 3 18:45 11_a.c
-rw-r--r--  1 kartikahluwalia  staff   137 Sep 1 12:11 11_b.c
-rw-r--r--  1 kartikahluwalia  staff   1210 Sep 1 12:14 11_c.c
-rw-r--r--  1 kartikahluwalia  staff   612 Sep 1 16:06 12.c
-rw-r--r--  1 kartikahluwalia  staff   1049 Sep 1 19:59 13.c
-rw-r--r--  1 kartikahluwalia  staff   1437 Sep 3 14:52 14.c
-rw-r--r--  1 kartikahluwalia  staff    312 Sep 4 00:15 15.c
-rw-r--r--  1 kartikahluwalia  staff   139 Sep 5 09:05 16_a.c
-rw-r--r--  1 kartikahluwalia  staff   1655 Sep 4 15:32 16_b.c
-rw-r--r--  1 kartikahluwalia  staff   227 Sep 5 10:49 17.c
-rw-r--r--  1 kartikahluwalia  staff      0 Sep 2 11:46 18_PENDING.c
-rw-r--r--  1 kartikahluwalia  staff   1061 Sep 6 15:39 19.c
-rw-r--r--  1 kartikahluwalia  staff    658 Sep 6 16:33 20.c
-rw-r--r--  1 kartikahluwalia  staff    484 Sep 6 16:47 21.c
-rw-r--r--  1 kartikahluwalia  staff    808 Sep 6 16:52 2.c
-rw-r--r--  1 kartikahluwalia  staff   1088 Sep 6 18:2 3.c
-rw-r--r--  1 kartikahluwalia  staff    957 Sep 6 18:55 4.c
-rw-r--r--  1 kartikahluwalia  staff   154 Sep 6 18:50 1.c
-rw-r--r--  1 kartikahluwalia  staff    437 Sep 6 19:04 6.c
-rw-r--r--  1 kartikahluwalia  staff    444 Sep 2 00:00 27_a.c
-rw-r--r--  1 kartikahluwalia  staff    448 Sep 6 3:53 27_b.c
-rw-r--r--  1 kartikahluwalia  staff    453 Sep 6 3:53 27_c.c
-rw-r--r--  1 kartikahluwalia  staff    401 Sep 6 3:53 27_d.c
-rw-r--r--  1 kartikahluwalia  staff    405 Sep 6 3:53 27_e.c
-rw-r--r--  1 kartikahluwalia  staff    671 Sep 2 11:51 28.c
-rw-r--r--  1 kartikahluwalia  staff   1337 Sep 2 12:15 5_PENDING.c
-rw-r--r--  1 kartikahluwalia  staff   1591 Sep 5 11:05 30_PENDING.c
-rwxr-xr-x  1 kartikahluwalia  staff  33536 Sep 6 19:02 Q14
-rwxr-xr-x  1 kartikahluwalia  staff  33816 Sep 5 11:06 a.out
drwxr-xr-x  3 kartikahluwalia  staff     96 Sep 5 10:42 support_folder

./support_folder:
total 8
-rwx------  1 kartikahluwalia  staff  2 Sep 5 10:42 ticket_file.txt
*/