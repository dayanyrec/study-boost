#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    unsigned i;

    vector<double> v (6);

    // populando vetor
    for (i = 0; i < v.size (); ++ i)
        v (i) = i;

    std::cout << "v=\n" << v << std::endl;

    // multiplicacao por escalar
    vector<double> w = 3.0 * v;
    std::cout << "w=\n" << w << std::endl;

    // soma de vetores
    vector<double> x = v + w;
    std::cout << "x=\n" << x << std::endl;

}