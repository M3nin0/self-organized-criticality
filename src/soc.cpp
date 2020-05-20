#include <cstddef>

#include <vector>

#include "xtensor/xarray.hpp"
#include <xtensor/xhistogram.hpp>

xt::xarray<double> soc(xt::xarray<double>& soc, std::size_t binSize = 50)
{
    std::size_t n = soc.size();
    std::vector<std::size_t> shape = { 1, n };

    auto mean = xt::mean(soc);
    auto var = xt::variance(soc);
    auto std = xt::stddev(soc);

    std::vector<double> vec;

    for (auto data: soc)
    {
        vec.push_back(((data - mean) / std)(0));
    }

}