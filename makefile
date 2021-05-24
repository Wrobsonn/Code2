.PHONY: clean
.SUFFIXES: .c .s .a$
%.o: %c.
	gcc -c $<
%: %.o
	gcc -o $@ $^
Code2: kwadrat.c szescian.c libkwadrat.a libszescian.so Code2.c
clean:
	rm -f Code2 *.o *.a
