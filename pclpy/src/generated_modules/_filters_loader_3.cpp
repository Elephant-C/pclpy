
#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../make_opaque_vectors.hpp"

#include "filters/passthrough.hpp"
#include "filters/random_sample.hpp"
#include "filters/sampling_surface_normal.hpp"
#include "filters/shadowpoints.hpp"
#include "filters/uniform_sampling.hpp"


void defineFiltersClasses3(py::module &m) {
    py::module m_filters = m.def_submodule("filters", "Submodule filters");
    defineFiltersPassthroughClasses(m_filters);
    defineFiltersRandomSampleClasses(m_filters);
    defineFiltersSamplingSurfaceNormalClasses(m_filters);
    defineFiltersShadowpointsClasses(m_filters);
    defineFiltersUniformSamplingClasses(m_filters);
}