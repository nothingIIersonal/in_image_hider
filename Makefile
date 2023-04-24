all: hider_png
ifdef WIN32
	$(CXX) main.cpp hider_png.o -lpng -o hider_png.exe
else
	$(CXX) main.cpp hider_png.o -lpng -o hider_png
endif


run: all
ifdef WIN32
	.\hider_png.exe
else
	./hider_png
endif


hider_png: hider_png.cpp hider_png.h
	$(CXX) -c hider_png.cpp -o hider_png.o


clean:
ifdef WIN32
	rm *.o & rm hider_png.exe & output.png
else
	rm *.o hider_png output.png
endif