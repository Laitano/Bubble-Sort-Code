#
# This is an example Makefile for a countwords program.  This
# program uses both the scanner module and a counter module.
# Typing 'make' or 'make count' will create the executable file.
#

# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++
CC = gcc
CFLAGS  = -g -Wall

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
default: count

# To create the executable file count we need the object files                                 countwords=main         counter=bubble
# main.o, bubble.o:

# %%%%%%%%%%%% count: main.o bubble.o significa que  vou recriar o meu executável toda vez que meus object files main.o e bubble.o forem alterados. E eu vou fazer isso com a instrução $(CC) $(CFLAGS) -o count main.o bubble.o Observe que os executáveis main e bubble vão ser escritos em um único executável chamado " count "
count:  main.o bubble.o 
	$(CC) $(CFLAGS) -o count main.o bubble.o
# To create the object file main.o, we need the source
# files main.c, bubble.h:


# %%%%%%%%%%%% Quando eu faço main.o: main.c bubble.h ... significa que todas vez que o arquivo main.c ou bubble.h forem modificados eu vou recriar o meu main.o  .
main.o:  main.c bubble.h 
	$(CC) $(CFLAGS) -c main.c

# To create the object file counter.o, we need the source files
# bubble.c and bubble.h:


# %%%%%%%%%%%% Quando eu faço bubble.o:  bubble.c bubble.h ... significa que todas vez que o arquivo bubble.c ou bubble.h forem modificados eu vou recriar o meu bubble.o  .
bubble.o:  bubble.c bubble.h 
	$(CC) $(CFLAGS) -c bubble.c

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
# %%%%%%%%%%%% No comando de cima eu criei o bubble.o. No meu bubble.o eu botei o arquivo .c e também chamei a biblioteca que está nele. o .h
clean: 
	$(RM) count *.o *~
