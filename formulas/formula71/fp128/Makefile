all:
	${CXX} -c lhs.cpp -o lhs.o ${CXXFLAGS}
	${CXX} -c rhs.cpp -o rhs.o ${CXXFLAGS}
	${CXX} -c macheps.cpp -o macheps.o ${CXXFLAGS}
	${CXX} -c to_str.cpp -o to_str.o ${CXXFLAGS}
	${CXX} -c main.cpp -o main.o ${CXXFLAGS}
	${CXX} lhs.o rhs.o macheps.o to_str.o main.o -o main.exe ${LDFLAGS}
