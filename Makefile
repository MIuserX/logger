
VPATH=./src

CC=gcc
CPP=g++
CFLAGS=-Wall -c 

OBJDIR=obj
LIBDIR=lib

BUILDS=jlogger.o

all:$(BUILDS)

jlogger.o:jlogger.c
	$(CC) $(CFLAGS) -o $(OBJDIR)/$@ $^
	ar rcs $(LIBDIR)/libjlogger.a $(OBJDIR)/$@
