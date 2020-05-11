#************************************************
#
# @author :   Mohab Ahmed 
#
# @mail   :   mohamb.ahmed.2032@gmail.com
#
# sources to our make file which are :
#	main.c 
#	memory.c
#	interrupts_msp432p401r_gcc.c
#	startup_msp432p401r_gcc.c
#	system_msp432p401r.c
# 
# Include path to header files :
#	common
#	CMSIS
#	msp432
#
#************************************************
SRC1 = src/main.c \
       src/memory.c \
       src/course1.c \
       src/data.c \
       src/stats.c

SRC2 = src/main.c \
       src/memory.c \
       src/course1.c \
       src/data.c \
       src/stats.c \
       src/interrupts_msp432p401r_gcc.c \
       src/startup_msp432p401r_gcc.c \
       src/system_msp432p401r.c 

INCLUDE1 = include/common
INCLUDE2 = include/CMSIS 
INCLUDE3 = include/msp432
