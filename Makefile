PROJECT=data_structure
CC=gcc
FLAGS=-g
OUTPUT=${PROJECT}
SRC=./src/main.c ./src/searchNode.c ./src/header.h

${PROJECT}: ${SRC} | create
	${CC} ${FLAGS} -o ./bin/${PROJECT} ${SRC}

doubleLinkedList: ./src/doubleLinkedList.c | create
	${CC} ${FLAGS} -o ./bin/doubleLinkedList ./src/doubleLinkedList.c

doubleAddatHead: ./src/doubleLinkedList_AddatHead.c
	${CC} -o ./bin/doubleAddAtHead ./src/doubleLinkedList_AddatHead.c

all: ${PROJECT} doubleLinkedList doubleAddatHead

create: 
	-mkdir -p ./bin

remove: ./bin
	-echo "Deleting bin directory!"
	-rm -rfv ./bin

run: ./bin/${PROJECT}
	-./bin/${OUTPUT}

runDoubleLinkedList: ./bin/doubleLinkedList | doubleLinkedList
	-./bin/doubleLinkedList

runDoubleAtHead: ./bin/doubleAddAtHead doubleAddatHead
	-./bin/doubleAddAtHead