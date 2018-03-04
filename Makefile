LIBS = `pkg-config --libs opencv`
CFLAGS = `pkg-config --cflags opencv`

rtc.exe: rtc.o
	g++ -g -o rtc.exe rtc.o $(LIBS) $(CFLAGS)
rtc.o: rtc-test.cpp
	g++ -g -c rtc-test.cpp -o rtc.o $(LIBS) $(CFLAGS)
Camera.exe: Camera.o
	g++ -g -o Camera.exe Camera.o $(LIBS) $(CFLAGS)
Camera.o: Camera.cpp
	g++ -g -c Camera.cpp -o Camera.o $(LIBS) $(CFLAGS)
clean:
	rm *.o *.exe
