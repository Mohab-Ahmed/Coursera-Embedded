include sources.mk

TARGET= demo

#linker file
LINKER_FILE = msp432p401r.lds

#compiler flags
CC = gcc
LD = ld
CFLAGS = -Wall -Werror -g -std=c99
LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
SIZE = size

#object files

ASM = $(SRC:.c=.asm)

%.asm : %.c $(INCLUDE)
	$(CC) $< -S $(CFLAGS) -o $@

OBJ = $(SRC:.c=.o)

%.o : %.c $(INCLUDE)
	$(CC) $< -c $(CFLAGS) -o $@

.PHONY: build
build : $(SRC) $(INCLUDE)
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(TARGET).out
	size $(TARGET).out

.PHONY: build-all
build-all : $(OBJ) $(ASM) build

.PHONY: clean
clean :
	rm -f  $(OBJ) $(ASM) $(TARGET).out $(TARGET).map
