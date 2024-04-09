
OBJ=main.o cal.o arr.o
BIN=main
CC=gcc
RM=rm

#编译规则1
$(BIN):$(OBJ)
	$(CC) $(OBJ) -o $(BIN)
	
#编译规则2
%.o:%.c
	gcc -c $< -o $@

#伪目标
clean:
	$(RM) $(OBJ) $(BIN)
