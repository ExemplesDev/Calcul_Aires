OBJECTS = Polygone.o Rectangle.o Triangle.o
$(BUILD_DIR)/libFormesGeometriques.a: $(OBJECTS)
	$(AR) -r $@ $(OBJECTS)

%.o : %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -f *.o *.gc*
