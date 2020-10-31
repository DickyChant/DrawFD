CXX = g++
CXXFLAGS = -std=c++11

SRC = gen.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = gen

Topo = Topology.cpp
TopoOBJ = $(Topo:.cpp=.o)

TopoGen = TopologyGenerator.cpp
TopoGenOBJ = $(TopoGen:.cpp=.o)


$(EXEC):
	$(CXX) $(CXXFLAGS) -c $(Topo)
	$(CXX) $(CXXFLAGS) -c $(TopoGen)
	$(CXX) $(CXXFLAGS) -c $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ) $(TopoOBJ) $(TopoGenOBJ)

clean:
	rm -rf $(OBJ) $(EXEC) $(TopoGenOBJ) $(TopoOBJ)
cleanplot:
	rm -rf *pdf
exec:
	./gen