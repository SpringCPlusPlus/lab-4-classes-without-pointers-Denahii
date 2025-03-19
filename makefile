all: a.out

a.out: Rectangle1.cpp Point.cpp test.cpp
	g++ ./Rectangle1.cpp Point.cpp test.cpp -o a.out
	chmod +x a.out

test: a.out
	./a.out -s -d -t