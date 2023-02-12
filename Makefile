#hello make file
hello:
	echo "hello"

comp:
	g++ main.cpp -o bin/main	

run:
	./bin/main
