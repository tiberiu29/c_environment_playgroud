flags=-g -Wall -std=c2x

all: linked_list

linked_list: linked_list.o
	gcc ${flags} $^ -o $@ 

linked_list.o: linked_list.c
	gcc ${flags} -c $^

clean: 
	rm -f *.o linked_list
