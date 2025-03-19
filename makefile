all: a.out

a.out:
	g++ app.cpp Rectangle1.cpp Point.cpp test.cpp -o a.out
	chmod +x a.out

test: a.out
	./a.out -s -d -t