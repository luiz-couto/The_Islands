#include <stdlib.h>
#include <iostream>

#include "Greedy.h"

using namespace std;

int main() {
    
    Greedy g = Greedy(4,2250);
    g.addIsland(1000,60);
    g.addIsland(50,2);
    g.addIsland(100,5);
    g.addIsland(2000, 70);

    g.orderByGreaterCostBenefit();
    g.run();
    
    g.run_dynamic();
    
    return 0;
}