main: main.cpp vonat.cpp gyorsvonat.cpp szemelyvonat.cpp allomas.cpp jarat.cpp menetrend.cpp menetrend.h vonat.h gyorsvonat.h
	g++ -o main main.cpp vonat.cpp gyorsvonat.cpp szemelyvonat.cpp allomas.cpp jarat.cpp menetrend.cpp
clean: main
	rm main
run: main
	./main

