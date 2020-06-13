#ifndef __SOC_HEADER__
#define __SOC_HEADER__

#include <cstddef>
#include "xtensor/xarray.hpp"

#include <vector>

std::vector<xt::xtensor<double, 1>> soc(xt::xtensor<double, 1>& soc, std::size_t binSize = 50);

#endif // __SOC__HEADER__
