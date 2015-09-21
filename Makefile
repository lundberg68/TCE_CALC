CC=gcc
CPP=g++
INCLUDE_FLAGS=-Iinclude
DEBUG_FLAGS=
CFLAGS=-g

C_SRC = cfiles/tceditor.c
CPP_SRC = cppfiles/Calculator.cpp
 
C_OBJ:= $(C_SRC:%.c=%.o)
CPP_OBJ:= $(CPP_SRC:%.cpp=%.o)

	
all : $(CPP_OBJ) $(C_OBJ)
	
cfiles/%.o: cfiles/%.c
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ -c $^  

cppfiles/%.o: cppfiles/%.cpp
	$(CPP) $(CFLAGS) $(INCLUDE_FLAGS) -o $@  -c $^ 

clean:
	rm -rf *.o *.dbo *.ti cfiles/*.o cfiles/*.dbo cfiles/*.ti cppfiles/*.o cppfiles/*.dbo cppfiles/*.ti

