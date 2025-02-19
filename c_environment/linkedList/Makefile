FLAGS=-g -Wall -Wextra -std=c2x

LINK_OBJECTS=main.o linked_list.o
MAIN=main

all: ${MAIN}

${MAIN}: ${LINK_OBJECTS}
	gcc ${FLAGS} $^ -o $@ 

%.o: %.c
	gcc ${FLAGS} $^ -c $@ 

clean: 
	rm -f *.o ${MAIN}

