#************************************************
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
SRC1 = main.c \
       memory.c \

SRC2 = main.c \
       memory.c \
       interrupts_msp432p401r_gcc.c \
       startup_msp432p401r_gcc.c \
       system_msp432p401r.c 

INCLUDE1 = ../include/common
INCLUDE2 = ../include/CMSIS 
INCLUDE3 = ../include/msp432
