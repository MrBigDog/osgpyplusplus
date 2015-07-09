// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgutil.h"
#include "_ref_ptr_less__osgUtil_scope_EdgeCollector_scope_Point__greater___value_traits.pypp.hpp"
#include "pointlist.pypp.hpp"

namespace bp = boost::python;

void register_PointList_class(){

    { //::std::vector< osg::ref_ptr<osgUtil::EdgeCollector::Point> >
        typedef bp::class_< std::vector< osg::ref_ptr<osgUtil::EdgeCollector::Point> > > PointList_exposer_t;
        PointList_exposer_t PointList_exposer = PointList_exposer_t( "PointList" );
        bp::scope PointList_scope( PointList_exposer );
        PointList_exposer.def( bp::indexing::vector_suite< std::vector< osg::ref_ptr<osgUtil::EdgeCollector::Point> > >() );
    }

}