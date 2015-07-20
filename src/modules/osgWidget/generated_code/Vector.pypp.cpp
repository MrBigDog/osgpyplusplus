// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgwidget.h"
#include "vector.pypp.hpp"

namespace bp = boost::python;

void register_Vector_class(){

    { //::std::vector< osg::observer_ptr<osgWidget::Window> >
        typedef bp::class_< std::vector< osg::observer_ptr<osgWidget::Window> > > Vector_exposer_t;
        Vector_exposer_t Vector_exposer = Vector_exposer_t( "Vector" );
        bp::scope Vector_scope( Vector_exposer );
        Vector_exposer.def( bp::indexing::vector_suite< std::vector< osg::observer_ptr<osgWidget::Window> > >() );
    }

}