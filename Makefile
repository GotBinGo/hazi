CC=g++
#CFLAGS=-c -Wall
CFLAGS=-c -Iinc -Wall
LDFLAGS=
SRC=./src
FILES=$(notdir $(wildcard $(SRC)/*.cpp))
SOURCES=$(addprefix ./src/, $(FILES))
OBJECTS=$(addprefix ./obj/, $(FILES:.cpp=.o))
LIB=bin/menetrend.a
TEST=bin/test
MAIN=bin/main

all: clean $(SOURCES) $(LIB) $(TEST)
	$(CC) -o $(MAIN) $(MAIN).cpp $(LIB) -Iinc -Isrc

$(LIB): $(OBJECTS) 
	ar rcs $(LIB) $(OBJECTS)

$(TEST): $(LIB)
	$(CC) -o $(TEST) $(TEST).cpp $(LIB) -Iinc -Isrc


$(OBJECTS): obj/%.o : src/%.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f obj/*.o bin/*.a $(TEST) $(MAIN) 

