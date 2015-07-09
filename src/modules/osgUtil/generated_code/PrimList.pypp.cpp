// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgutil.h"
#include "primlist.pypp.hpp"

namespace bp = boost::python;

void register_PrimList_class(){

    { //::std::vector< osg::ref_ptr<osgUtil::Tessellator::Prim> >
        typedef bp::class_< std::vector< osg::ref_ptr<osgUtil::Tessellator::Prim> > > PrimList_exposer_t;
        PrimList_exposer_t PrimList_exposer = PrimList_exposer_t( "PrimList" );
        bp::scope PrimList_scope( PrimList_exposer );
        PrimList_exposer.def( bp::indexing::vector_suite< std::vector< osg::ref_ptr<osgUtil::Tessellator::Prim> > >() );
    }

}