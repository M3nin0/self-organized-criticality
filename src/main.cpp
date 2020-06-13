#include "soc.hpp"

#include <xtensor/xtensor.hpp>
#include <xtensor/xio.hpp>

int main()
{
    xt::xtensor<double, 1> elements = {1, 2, 3, 4, 5, 6, 7};
    std::vector<xt::xtensor<double, 1>> output = soc(elements, 50);

    xt::xtensor<double, 1> gamma = output.at(0);
    xt::xtensor<double, 1> count = output.at(1);

    std::cout << gamma << std::endl;
    std::cout << count << std::endl;

    return 0;
}
