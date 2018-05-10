
#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../make_opaque_vectors.hpp"

#include "filters/crop_box.hpp"
#include "filters/crop_hull.hpp"
#include "filters/extract_indices.hpp"


void defineFiltersClasses2(py::module &m) {
    py::module m_filters = m.def_submodule("filters", "Submodule filters");
    defineFiltersCropBoxClasses(m_filters);
    defineFiltersCropHullClasses(m_filters);
    defineFiltersExtractIndicesClasses(m_filters);
}