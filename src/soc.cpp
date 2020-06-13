#include <cstddef>
#include <vector>

#include <xtensor/xtensor.hpp>
#include <xtensor/xhistogram.hpp>

#include "soc.hpp"

std::vector<xt::xtensor<double, 1>> soc(xt::xtensor<double, 1>& vec, std::size_t binSize)
{
    std::size_t n = vec.size();
    std::vector<std::size_t> shape = { 1, n };

    auto mean = xt::mean(vec);
    auto stdd = xt::stddev(vec);

    xt::xtensor<double, 1> gamma = (vec - mean) / stdd;
    xt::xtensor<double, 1> count = xt::histogram(gamma, binSize);
    
    // Criando resultado
    std::vector<xt::xtensor<double, 1>> res;
    res.push_back(count / n);
    res.push_back(count);
    return res;
}
