// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "uiobjectparent_less__osgwidget_scope_widget__greater_.pypp.hpp"

namespace bp = boost::python;

void register_UIObjectParent_less__osgWidget_scope_Widget__greater__class(){

    bp::class_< osgWidget::UIObjectParent< osgWidget::Widget > >( "UIObjectParent_less__osgWidget_scope_Widget__greater_" )    
        .def( 
            "begin"
            , (::std::_Vector_iterator< osg::observer_ptr< osgWidget::Widget >, std::allocator< osg::observer_ptr< osgWidget::Widget > > > ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) )( &::osgWidget::UIObjectParent< osgWidget::Widget >::begin ) )    
        .def( 
            "begin"
            , (::std::_Vector_const_iterator< osg::observer_ptr< osgWidget::Widget >, std::allocator< osg::observer_ptr< osgWidget::Widget > > > ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) const)( &::osgWidget::UIObjectParent< osgWidget::Widget >::begin ) )    
        .def( 
            "end"
            , (::std::_Vector_iterator< osg::observer_ptr< osgWidget::Widget >, std::allocator< osg::observer_ptr< osgWidget::Widget > > > ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) )( &::osgWidget::UIObjectParent< osgWidget::Widget >::end ) )    
        .def( 
            "end"
            , (::std::_Vector_const_iterator< osg::observer_ptr< osgWidget::Widget >, std::allocator< osg::observer_ptr< osgWidget::Widget > > > ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) const)( &::osgWidget::UIObjectParent< osgWidget::Widget >::end ) )    
        .def( 
            "getByIndex"
            , (::osgWidget::Widget * ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )( unsigned int ) )( &::osgWidget::UIObjectParent< osgWidget::Widget >::getByIndex )
            , ( bp::arg("index") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getByIndex"
            , (::osgWidget::Widget const * ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )( unsigned int ) const)( &::osgWidget::UIObjectParent< osgWidget::Widget >::getByIndex )
            , ( bp::arg("index") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getByName"
            , (::osgWidget::Widget * ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )( ::std::string const & ) )( &::osgWidget::UIObjectParent< osgWidget::Widget >::getByName )
            , ( bp::arg("name") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getByName"
            , (::osgWidget::Widget const * ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )( ::std::string const & ) const)( &::osgWidget::UIObjectParent< osgWidget::Widget >::getByName )
            , ( bp::arg("name") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNumObjects"
            , (unsigned int ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) const)( &::osgWidget::UIObjectParent< osgWidget::Widget >::getNumObjects ) )    
        .def( 
            "getObjects"
            , (::std::vector< osg::observer_ptr<osgWidget::Widget> > & ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) )( &::osgWidget::UIObjectParent< osgWidget::Widget >::getObjects )
            , bp::return_internal_reference< >() )    
        .def( 
            "getObjects"
            , (::std::vector< osg::observer_ptr<osgWidget::Widget> > const & ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) const)( &::osgWidget::UIObjectParent< osgWidget::Widget >::getObjects )
            , bp::return_internal_reference< >() )    
        .def( 
            "size"
            , (::size_t ( ::osgWidget::UIObjectParent<osgWidget::Widget>::* )(  ) const)( &::osgWidget::UIObjectParent< osgWidget::Widget >::size ) );

}
