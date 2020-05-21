#include <cstddef>
#include <vector>

#include "xtensor/xarray.hpp"
#include "xtensor/xadapt.hpp"
#include <xtensor/xhistogram.hpp>

xt::xarray<double> soc(xt::xarray<double>& vec, std::size_t binSize = 50)
{
    std::size_t n = vec.size();
    std::vector<std::size_t> shape = { 1, n };

    auto mean = xt::mean(vec);
    auto std = xt::stddev(vec);

    std::vector<double> vecTmp;

    for (auto data: vec)
    {
        vecTmp.push_back(((data - mean) / std)(0));
    }

    xt::xtensor<double, 1> counts = xt::histogram(xt::adapt(vecTmp, shape), binSize);

    vecTmp.clear();
    for(auto c: counts)
    {
        vecTmp.push_back(c / n);
    }

    return xt::adapt(vecTmp, n);
}