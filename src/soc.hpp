#ifndef __SOC_HEADER__
#define __SOC_HEADER__

#include <cstddef>
#include "xtensor/xarray.hpp"

xt::xarray<double> soc(xt::xarray<double>& soc, std::size_t binSize = 50);

#endif // __SOC__HEADER__
