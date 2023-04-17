default:
	gcc -o prog main.c stringCode.c input.c utils.c listArrayList.c listElem.c mapArrayList.c mapElem.c -lm
debug:
	gcc -g -o prog main.c stringCode.c input.c  utils.c listArrayList.c listElem.c mapArrayList.c mapElem.c -lm
clean:
	rm -f prog
run:
	./prog