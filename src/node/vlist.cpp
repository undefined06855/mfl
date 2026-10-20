#include "node/vlist.hpp"

#include <asp/iter.hpp>

namespace mfl
{
    dist_t vlist_size(const vlist& l)
    {
        return asp::iter::from(l.nodes).fold(dist_t{}, [](dist_t& accumulator, const node_variant& n) { accumulator += vsize(n); });
    }
}