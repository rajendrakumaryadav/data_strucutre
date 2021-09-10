PROJECT=data_structure
CC=gcc
FLAGS=-g
OUTPUT=${PROJECT}
SRC=./src/main.c ./src/searchNode.c ./src/header.h

${PROJECT}: ${SRC} | create
	${CC} ${FLAGS} -o ./bin/${PROJECT} ${SRC}

create: 
	-mkdir -p ./bin

remove: ./bin
	-echo "Deleting bin directory!"
	-rm -rfv ./bin

run: ./bin/${PROJECT}
	-./bin/${OUTPUT}
