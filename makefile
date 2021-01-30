OBJECTS = node.o ttree.o main.o
HEADERS = node.h ttree.h
Project2: $(OBJECTS)
	g++ $^ -o $@

%.o: %.cpp $(HEADERS)
	g++ -c $< -o $@

clean:
	rm -i *.o Project2

run:
	./Project2 inputs.txt inputData.txt
