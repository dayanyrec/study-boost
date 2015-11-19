// Método da bisseção para obter raizes de equações
#include <iostream>
#include <boost/math/tools/roots.hpp>

using namespace std;
using namespace boost::math::tools;

struct fn {
    double operator() (double x) {
        return 2 * x - 1;
    }
};

struct condition {
    double m_limit;
    condition(double limit) : m_limit(limit) { }
    double operator() (double min, double max) {
        return abs(min - max) <= m_limit;
    }
};

int main() {
    std::pair<double, double> result = bisect(fn(), -1.0, 1.0, condition(0.0001));

    double root = (result.first + result.second) / 2;

    cout << "Raiz: " << root << endl;

    return 0;
}