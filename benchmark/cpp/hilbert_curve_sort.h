// hilbert_curve_sort.h

#ifndef HILBERT_CURVE_SORT
#define HILBERT_CURVE_SORT

#include <array>
#include <cstdint>
#include <functional>
#include <iterator>
#include <limits>
#include <set>
#include <utility>
#include <vector>

void HilbertCurveSort2D(std::vector<std::array<double, 2>> &vec2s);

#include "hilbert_curve_sort.cc"

#endif
