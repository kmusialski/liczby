# Project: liczby3
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = Dekoder.o main.o ../proba/Fibbo.o "../dziennik/source\ files/Subject.o"
LINKOBJ  = Dekoder.o main.o ../proba/Fibbo.o "../dziennik/source files/Subject.o"
LIBS     = -L"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib" -L"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/Users/kmusialski/Downloads/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = liczby3.exe
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

Dekoder.o: Dekoder.cpp
	$(CPP) -c Dekoder.cpp -o Dekoder.o $(CXXFLAGS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

../proba/Fibbo.o: ../proba/Fibbo.cpp
	$(CPP) -c ../proba/Fibbo.cpp -o ../proba/Fibbo.o $(CXXFLAGS)

"../dziennik/source\ files/Subject.o": ../dziennik/source\ files/Subject.cpp
	$(CPP) -c "../dziennik/source files/Subject.cpp" -o "../dziennik/source files/Subject.o" $(CXXFLAGS)
