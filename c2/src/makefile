#************************************************
#
# this make file for coursera second assignment 
# 
# use : make [TARGET] [PLATFORM=<PLATFORM-NAME>]
# 
# build targets :
# 	*.i files
# 	*.asm files
# 	*.o files
# 	compile_all
# 	final excutable
# 	build-all	
# 
# overrides :
# 	CPU = cortex-m4
# 	ARCH = thumb
# 	SPECS = nosys.specs
#
#************************************************

include sources.mk

# Platform Overrides
PLATFORM = HOST
TARGET = c1m2

# Linker File
LINKER_FILE= msp432p401r.lds

ifeq ($(PLATFORM),HOST)
# Compiler and Flags
SOURCES=$(SRC1)
CC=gcc
CFLAGS= -Wall -O0 -Werror -std=c99 -g -DHOST -I $(INCLUDE1) 
endif

# Architecture Specific Flags
CPU = cortex-m4
ARCH = thumb
SPECS = nosys.specs

ifeq ($(PLATFORM),MSP432)
#compiler and flags
SOURCES=$(SRC2)
CC= arm-none-eabi-gcc
CFLAGS= -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -Wall -O0 -Werror -std=c99 -g -DMSP432 -I $(INCLUDE1) -I $(INCLUDE2) -I $(INCLUDE3)
LDFLAGS= -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
endif

PP = $(SOURCES:.c=.i)

%.i:%.c $(INCLUDE1) $(INCLUDE2) $(INCLUDE3)
	$(CC) $< -E $(CFLAGS) -o $@

ASM = $(SOURCES:.c=.asm)

%.asm:%.c $(INCLUDE1) $(INCLUDE2) $(INCLUDE3)
	$(CC) $< -S $(CFLAGS) -o $@

OBJ = $(SOURCES:.c=.o)

%.o:%.c $(INCLUDE1) $(INCLUDE2) $(INCLUDE3)
	$(CC) $< -c $(CFLAGS) -o $@

.PHONY: build
build : $(SOURCES) $(INCLUDE1) $(INCLUDE2) $(INCLUDE3)
	$(CC) $(SOURCES) $(CFLAGS) $(LDFLAGS) -o $(TARGET).out

.PHONY: compile-all
compile_all : $(OBJ)

.PHONY: build-all
build-all : $(PP) $(ASM) $(OBJ) build

.PHONY : clean
clean :
	rm -f $(OBJ) $(PP) $(ASM) $(TARGET).out $(TARGET).map
