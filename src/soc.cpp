#include <cstddef>

#include <vector>

#include "xtensor/xarray.hpp"
#include <xtensor/xhistogram.hpp>
#include "xtensor/xadapt.hpp"

xt::xarray<double> soc(xt::xarray<double>& vec, std::size_t binSize = 50)
{
    std::size_t n = vec.size();
    std::vector<std::size_t> shape = { 1, n };

    auto mean = xt::mean(vec);
    auto std = xt::stddev(vec);

    std::vector<double> gamma;

    for (auto data: vec)
    {
        gamma.push_back(((data - mean) / std)(0));
    }

    auto histData = xt::adapt(gamma, shape);

}