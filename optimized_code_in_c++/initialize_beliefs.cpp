#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(vector< vector <char> > &grid) {

	// OPTIMIZATION: Which of these variables are necessary?
	// OPTIMIZATION: Reserve space in memory for vectors
    float prob_per_cell = 1.0 / (float) (grid.size() * grid[0].size());
  	vector< vector <float> > newGrid (grid.size(), vector<float> (grid[0].size(), prob_per_cell));

	return newGrid;
}