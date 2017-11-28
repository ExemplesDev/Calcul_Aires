CPPFLAGS = -I..

OBJECTS = main.o
$(BUILD_DIR)/calcul_aires: $(OBJECTS)
	$(LD) $(LDFLAGS) $(OBJECTS) $(BUILD_DIR)/libFormesGeometriques.a -o $@ 

%.o : %.cpp
	$(CC) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o *.gc*
