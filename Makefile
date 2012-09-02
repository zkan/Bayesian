#
#	Makefile for compiling all code in this directory.
#	Author: Kan Ouivirach
# 
CFLAGS = -g -Wall
CC = g++ $(CFLAGS)
PROG = bayes
all: $(PROG)

# program to test the function that gets the list of files under a specific folder
get_conditional_probability.o: get_conditional_probability.cc get_conditional_probability.h
	$(CC) -c get_conditional_probability.cc
	
bayes.o: bayes.cc get_conditional_probability.h
	$(CC) -c bayes.cc

bayes: bayes.o get_conditional_probability.o
	$(CC) bayes.o get_conditional_probability.o -o bayes

clean:
	rm *.o $(PROG)







