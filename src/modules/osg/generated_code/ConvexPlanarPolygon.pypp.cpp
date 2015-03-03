// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "convexplanarpolygon.pypp.hpp"

namespace bp = boost::python;

void register_ConvexPlanarPolygon_class(){

    bp::class_< osg::ConvexPlanarPolygon >( "ConvexPlanarPolygon", "\n A class for representing components of convex clipping volumes.\n", bp::init< >(" A class for representing components of convex clipping volumes.") )    
        .def( 
            "add"
            , (void ( ::osg::ConvexPlanarPolygon::* )( ::osg::Vec3 const & ))( &::osg::ConvexPlanarPolygon::add )
            , ( bp::arg("v") ) )    
        .def( 
            "getVertexList"
            , (::std::vector< osg::Vec3f > & ( ::osg::ConvexPlanarPolygon::* )(  ))( &::osg::ConvexPlanarPolygon::getVertexList )
            , bp::return_internal_reference< >() )    
        .def( 
            "getVertexList"
            , (::std::vector< osg::Vec3f > const & ( ::osg::ConvexPlanarPolygon::* )(  )const)( &::osg::ConvexPlanarPolygon::getVertexList )
            , bp::return_internal_reference< >() )    
        .def( 
            "setVertexList"
            , (void ( ::osg::ConvexPlanarPolygon::* )( ::std::vector< osg::Vec3f > const & ))( &::osg::ConvexPlanarPolygon::setVertexList )
            , ( bp::arg("vertexList") ) )    
        .def( bp::self == bp::self );

}