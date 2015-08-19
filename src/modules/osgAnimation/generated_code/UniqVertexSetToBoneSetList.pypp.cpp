// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osganimation.h"
#include "_UniqVertexSetToBoneSet__value_traits.pypp.hpp"
#include "uniqvertexsettobonesetlist.pypp.hpp"

namespace bp = boost::python;

void register_UniqVertexSetToBoneSetList_class(){

    { //::std::vector< osgAnimation::VertexInfluenceSet::UniqVertexSetToBoneSet >
        typedef bp::class_< std::vector< osgAnimation::VertexInfluenceSet::UniqVertexSetToBoneSet > > UniqVertexSetToBoneSetList_exposer_t;
        UniqVertexSetToBoneSetList_exposer_t UniqVertexSetToBoneSetList_exposer = UniqVertexSetToBoneSetList_exposer_t( "UniqVertexSetToBoneSetList" );
        bp::scope UniqVertexSetToBoneSetList_scope( UniqVertexSetToBoneSetList_exposer );
        UniqVertexSetToBoneSetList_exposer.def( bp::indexing::vector_suite< std::vector< osgAnimation::VertexInfluenceSet::UniqVertexSetToBoneSet > >() );
    }

}