// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgwidget.h"
#include "vector_less__osg_scope_observer_ptr_less_osgwidget_scope_widget_greater___greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__class(){

    { //::std::vector< osg::observer_ptr<osgWidget::Widget> >
        typedef bp::class_< std::vector< osg::observer_ptr<osgWidget::Widget> > > vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__exposer_t;
        vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__exposer_t vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__exposer = vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__exposer_t( "vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater_" );
        bp::scope vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__scope( vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__exposer );
        vector_less__osg_scope_observer_ptr_less_osgWidget_scope_Widget_greater___greater__exposer.def( bp::indexing::vector_suite< std::vector< osg::observer_ptr<osgWidget::Widget> > >() );
    }

}
