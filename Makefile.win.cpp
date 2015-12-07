# Project: liczby
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = Dekoder.o main.o "../../../../proste\ aplikacje\ konsolowe/przypisanie\ 1.2\ final.o"
LINKOBJ  = Dekoder.o main.o "../../../../proste aplikacje konsolowe/przypisanie 1.2 final.o"
LIBS     = -L"D:/Dev-Cpp/MinGW32/lib" -L"D:/Dev-Cpp/MinGW32/mingw32/lib" -static-libstdc++ -static-libgcc
INCS     = -I"D:/Dev-Cpp/MinGW32/include" -I"D:/Dev-Cpp/MinGW32/mingw32/include" -I"D:/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include"
CXXINCS  = -I"D:/Dev-Cpp/MinGW32/include" -I"D:/Dev-Cpp/MinGW32/mingw32/include" -I"D:/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include" -I"D:/Dev-Cpp/MinGW32/lib/gcc/mingw32/4.8.1/include/c++"
BIN      = liczby.exe
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

"../../../../proste\ aplikacje\ konsolowe/przypisanie\ 1.2\ final.o": ../../../../proste\ aplikacje\ konsolowe/przypisanie\ 1.2\ final.cpp
	$(CPP) -c "../../../../proste aplikacje konsolowe/przypisanie 1.2 final.cpp" -o "../../../../proste aplikacje konsolowe/przypisanie 1.2 final.o" $(CXXFLAGS)
