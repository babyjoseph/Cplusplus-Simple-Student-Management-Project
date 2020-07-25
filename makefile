OBJ = main.o addStudent.o displayStudent.o studentData.o
CPP = g++
all : main
.PHONY : all
	$(OBJ) : %.o : %.cpp
	$(CPP) -c -I. $< -o $@
main : $(OBJ)
	$(CPP) $(OBJ) -o $@
.PHONY : clean
clean :
	rm $(OBJ) main
