#include <sstream>
#include "TopologyGenerator.hpp"

using std::ostringstream;
using std::cout;
using std::endl;
using std::cin;

int
main()
{

int count = 0;

#if 0
  TopologyGenerator generator(2, 2, OneParticleIrreducible);
#else
  vector<int> node_count(4);
  node_count[0] = 2;
  node_count[1] = 0;
  node_count[2] = 4;
  node_count[3] = 0;

  cout << "please input the diagram you want to draw" << endl;
  cout <<"please input the number of points with degree 1 / aka External points:";

  cin >> node_count[0];

  cout << endl <<"please input the number of points with degree 2:";

  cin >> node_count[1];

  cout << endl <<"please input the number of points with degree 3:";

  cin >> node_count[2];

   cout << endl <<"please input the number of points with degree 4:";

  cin >> node_count[3];




  TopologyGenerator generator(node_count,
			      EquivalentExternalNodes |
			      OneParticleIrreducible |
			      NoSelfEnergies);
#endif

  while (generator.next_topology())
    {
      ++count;

      Topology t = generator.current_topology();
      t.assign_momenta();
      //t.print_edge_list();
      cout << endl;

      ostringstream command;
      command << "mkdir " << path;

      system(command);

      ostringstream name;
      name << path << "/" << count << ".pdf";
      t.postscript_print(name.str());
    }
  cout << count << " generated topologies" << endl;
}
