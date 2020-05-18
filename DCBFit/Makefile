CC=g++
CFLAGS=-I. $(shell root-config --cflags) -lTMVA -lRooFit -lRooFitCore
LDFLAGS=$(shell root-config --libs) -lTMVA -lRooFit -lRooFitCore
DEPS = Analyzer.h

%.o: %.cpp $(DEPS)
	$(CC) $(LDFLAGS) -c -o $@ $< $(CFLAGS)

analyze: analyze.o Analyzer.o
	$(CC) $(LDFLAGS) -o analyze analyze.o Analyzer.o

clean:
	rm -rf *.o analyze
