# project2
Instructions to run:
1.	Please clone the directory from https://github.com/prajjwaldangal/project2.git
2.	cd into the directory you just cloned.
3.	Run ‘make’ command. This builds the .c file: part1.c present in the same directory which has the code for this project. This step will generate many files but most importantly, it will generate part1.ko which is the module we will insert into the kernel for execution.
4.	Run sudo insmod part1.ko. This will load part1.ko into the kernel.
5.	Run dmesg. You should see the output message from the program in the kernel log buffer.
6.	Finally run sudo rmmod part1 to remove the module from the kernel.
