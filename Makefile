# g++ -Wall -fPIC -c Image.cpp
# g++ -shared -o libimage.so Image.o
# g++ -I . -c task5b.cpp
# g++ -o task5b task5b.o -limage
# ./task5b

all:
	g++ -c Image.cpp -o Image.o
	g++ -c ImageResizer.cpp -o ImageResizer.o
	ar rcs libImage.a Image.o ImageResizer.o
	g++ task5b.cpp -L. -lImage -o task5b
	./task5b
