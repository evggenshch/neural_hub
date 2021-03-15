//
// Created by evggenshch on 16.02.2021.
//

#ifndef NEURAL_HUB_CONVLAYER_H
#define NEURAL_HUB_CONVLAYER_H

#include <boost/numeric/ublas/matrix.hpp>

namespace b_numeric = boost::numeric::ublas;

class ConvLayer {

private:

    b_numeric::matrix data;

public:

    ConvLayer();

};


#endif //NEURAL_HUB_CONVLAYER_H
