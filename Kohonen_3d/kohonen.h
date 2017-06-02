#ifndef KOHONEN_H
#define KOHONEN_H

#include <cstdlib>.
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;


typedef float FF;
typedef int II;
typedef vector<FF> neuron;
typedef vector<vector<vector<neuron>>> map_3d;
typedef vector<vector<FF>> inputs;

class Kohonen
{
private:
    map_3d map;
    II neurons_per_side;
    II n_features;
    inputs training_set;

public:
    Kohonen(II neurons_per_side, II n_features, inputs training_set);

    void generate_map();
    FF euclidean_distance(neuron n, neuron m);

};

#endif // KOHONEN_H
