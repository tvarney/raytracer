
EXEC := raytracer
INC := ./include
SRC := ./source
BIN := ./build

CC := g++

OBJECTS := $(patsubst ${SRC}/%.cpp, ${BIN}/%.o, $(wildcard ${SRC}/*.cpp))
CPPFLAGS := -Wall -Werror `sdlwrap-config --cflags`
LIBS := `sdlwrap-config --libs`

.PHONEY: all clean

all: ${BIN}/${EXEC}

clean:
	rm -rf ${BIN}/*.o ${BIN}/${EXEC}

${BIN}/${EXEC}: ${OBJECTS}
	${CC} -o $@ ${OBJECTS} ${LIBS}

${BIN}/%.o: ${SRC}/%.cpp
	${CC} -c -I${INC} ${CPPFLAGS} -o $@ $<
