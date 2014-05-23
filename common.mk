INCLUDE = -I. -I/usr/local/include
CPP 	= g++
LIBRARY = -L. -L/usr/local/lib
SYSLIBS = 

obj-go_krist += Screen.o
obj-go_krist += Render.o
obj-go_krist += Engine.o
obj-go_krist += main.o

