#**********************************************************
#
# simple makefile for coursera first assignment
#
# it generates :
# 	*.o files
# 	$(TARGET).out <OUTPUT EXCUTABLE>
#
#**********************************************************

include sources.mk

#target variable name
TARGET = demo

#compilers variables
CC = gcc
CFLAGS = -std=c99 -Wall -g -Werror

#object files variables
OBJ = $(SRC:.c=.o)

%.o : %.c $(HEADER)
	$(CC) $< -c $(CFLAGS) -o $@ 

$(TARGET).out : $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $@

.PHONY : all
all : $(TARGET).out

.PHONY : clean
clean :
	rm -f $(OBJ) $(TARGET).out
