CXX = g++
CXXFLAGS = -Wall
OBJECTS = main.o
RM = rm -rf

queue: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.hpp
	$(CXX) -c $(CXXFLAGS) -o $@ $<

run: queue
	./queue

clean:
	$(RM) queue $(OBJECTS)

help:
	@echo "Available targets:"
	@echo "  queue    - Build the program (default)"
	@echo "  run      - Build and run the program"
	@echo "  clean    - Remove build artifacts"
	@echo "  help     - Show this help message"
