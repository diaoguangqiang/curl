# This is an example makefile for the Triangle MicroWorks, Inc.
# Source Code Library. It will attempt to build a library
#
# This file is a simple example designed to work on Linux.
# It is highly likely that it will have to be modified to run with
# the target make system

CC = gcc
#CFLAGS =  -g -I.. -I./include  -I$(ACE_ROOT)/include -I$(SYS_ROOT)/include -I$(SCC_REL)/include/scs  -I$(SCC_REL)/include -I$(SCC_REL)/include/sccloud -DTMW_LINUX_TARGET -c
CFLAGS =  -g -I.. -I./include  

#CXXFLAGS =  -g -I.. -I./include -I$(ACE_ROOT)/include -I$(SYS_ROOT)/include -I$(SCC_REL)/include/scs -I$(SCC_REL)/include/sccloud  -I$(SCC_REL)/3rd/include -I$(SCC_REL)/include -I$(SCC_REL)/include  -DTMW_LINUX_TARGET -c
CXXFLAGS =  -g -I.. -I./include 

LINK   = g++ -v -g 
#LIBS   = ../tmwscl/i870.lib ../tmwscl/utils.lib  ../liniotarg.lib -L./ -lcurl  -lpthread
LIBS   = -L./ -lcurl  -lpthread

SRC =	\
        ./source/main.cpp 

OBJ = $(SRC:.cpp=.o)

#.c.o: $(CC) $(CFLAGS) $(.SOURCE)

all: $(OBJ)
	$(LINK) -o./bin/scs_curl $(OBJ) $(LIBS)

clean:
	rm ./source/*.o
