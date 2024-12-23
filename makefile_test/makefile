FILENAME=app
src = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(src))
$(FILENAME):$(OBJ)
	gcc $^ -o $@
%.o:%.c
	gcc -c $<

.PHONY:clean
clean:
	rm *.o
	rm $(FILENAME)
