PROJECT=data_structure
CC=gcc
FLAGS=-g
OUTPUT=${PROJECT}
SRC=./src/main.c ./src/searchNode.c ./src/header.h

${PROJECT}: ${SRC} | create
	${CC} ${FLAGS} -o ./bin/${PROJECT} ${SRC}

doubleLinkedList: ./src/doubleLinkedList.c | create
	${CC} ${FLAGS} -o ./bin/doubleLinkedList ./src/doubleLinkedList.c

doubleAddatHead: ./src/doubleLinkedList_AddatHead.c | create
	${CC} -o ./bin/doubleAddAtHead ./src/doubleLinkedList_AddatHead.c

searchInList: ./src/searchintoDoubly.c | create
	${CC} -o ./bin/searchInList ./src/searchintoDoubly.c

stack: ./src/stack.c | create
	${CC} -o ./bin/stack ./src/stack.c

LinearSearch: ./src/linear_search.c | create
	${CC} -o ./bin/linear_search ./src/linear_search.c

binarySearch: ./src/binary_search.c | create
	${CC} -g -o ./bin/binary_search ./src/binary_search.c

all: ${PROJECT} doubleLinkedList doubleAddatHead searchInList LinearSearch binarySearch | create

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

runsearchInList: searchInList ./bin/searchInList | create
	-./bin/searchInList

runstack: stack 
	-./bin/stack

runLinearSearch: LinearSearch
	-./bin/linear_search

runBinarySearch: binarySearch
	-./bin/binary_search