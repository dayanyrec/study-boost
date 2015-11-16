#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    unsigned i;

    vector<double> v (6);

    // populando vetor
    for (i = 0; i < v.size (); ++ i)
        v (i) = i;

    //multiplicacao por escalar
    vector<double> w = 3.0 * v;

    std::cout << "v=\n" << v << std::endl;
    std::cout << "w=\n" << w << std::endl;
}