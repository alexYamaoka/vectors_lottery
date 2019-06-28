CC = g++
FLAGS = -std=c++14 -Wall -g
# OBJS = object code not executable file
# OUT_EXE = .exe file name

all: vectorsSTL

vectorsSTL: vectorsSTL.cpp
	$(CC)	$(FLAGS)	vectorsSTL.cpp	-o	vectorsSTL

clean:
	rm	vectorsSTL vectorsSTL.scr	vectorsSTL.tar

tar:
	tar cf vectorsSTL.tar vectorsSTL.scr Makefile	vectorsSTL.cpp

#rm = remove
#utiltiy called make
#targets: all, vectorsSTL, clean, tar
#macro: CC, FLAGS, OBJS
# macro [$()] is replaced with definition
# -c is for object code
