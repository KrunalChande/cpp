#include<cstdlib>
#include"paullinkedlist.h"

using namespace std;

int main()
{
List Paul;
Paul.AddNode(4);
Paul.AddNode(5);
Paul.AddNode(6);
Paul.PrintList();


Paul.DeleteNode(5);
Paul.PrintList();

Paul.DeleteNode(4);
Paul.PrintList();
}
