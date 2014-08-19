// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "vec4ui.pypp.hpp"

namespace bp = boost::python;

void register_Vec4ui_class(){

    { //::osg::Vec4ui
        typedef bp::class_< osg::Vec4ui > Vec4ui_exposer_t;
        Vec4ui_exposer_t Vec4ui_exposer = Vec4ui_exposer_t( "Vec4ui", bp::init< >() );
        bp::scope Vec4ui_scope( Vec4ui_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec4ui::num_components;
        Vec4ui_exposer.def( bp::init< unsigned int, unsigned int, unsigned int, unsigned int >(( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") )) );
        { //::osg::Vec4ui::a
        
            typedef unsigned int & ( ::osg::Vec4ui::*a_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "a"
                , a_function_type( &::osg::Vec4ui::a )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::a
        
            typedef unsigned int ( ::osg::Vec4ui::*a_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "a"
                , a_function_type( &::osg::Vec4ui::a ) );
        
        }
        { //::osg::Vec4ui::b
        
            typedef unsigned int & ( ::osg::Vec4ui::*b_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "b"
                , b_function_type( &::osg::Vec4ui::b )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::b
        
            typedef unsigned int ( ::osg::Vec4ui::*b_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "b"
                , b_function_type( &::osg::Vec4ui::b ) );
        
        }
        { //::osg::Vec4ui::g
        
            typedef unsigned int & ( ::osg::Vec4ui::*g_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "g"
                , g_function_type( &::osg::Vec4ui::g )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::g
        
            typedef unsigned int ( ::osg::Vec4ui::*g_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "g"
                , g_function_type( &::osg::Vec4ui::g ) );
        
        }
        Vec4ui_exposer.def( bp::self != bp::self );
        Vec4ui_exposer.def( bp::self * bp::other< unsigned int >() );
        Vec4ui_exposer.def( bp::self * bp::self );
        Vec4ui_exposer.def( bp::self + bp::other< unsigned int >() );
        Vec4ui_exposer.def( bp::self + bp::self );
        Vec4ui_exposer.def( bp::self - bp::other< unsigned int >() );
        Vec4ui_exposer.def( bp::self - bp::self );
        Vec4ui_exposer.def( bp::self / bp::other< unsigned int >() );
        Vec4ui_exposer.def( bp::self < bp::self );
        Vec4ui_exposer.def( bp::self == bp::self );
        { //::osg::Vec4ui::operator[]
        
            typedef unsigned int & ( ::osg::Vec4ui::*__getitem___function_type)( unsigned int ) ;
            
            Vec4ui_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4ui::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::operator[]
        
            typedef unsigned int ( ::osg::Vec4ui::*__getitem___function_type)( unsigned int ) const;
            
            Vec4ui_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec4ui::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec4ui::r
        
            typedef unsigned int & ( ::osg::Vec4ui::*r_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "r"
                , r_function_type( &::osg::Vec4ui::r )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::r
        
            typedef unsigned int ( ::osg::Vec4ui::*r_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "r"
                , r_function_type( &::osg::Vec4ui::r ) );
        
        }
        { //::osg::Vec4ui::set
        
            typedef void ( ::osg::Vec4ui::*set_function_type)( unsigned int,unsigned int,unsigned int,unsigned int ) ;
            
            Vec4ui_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec4ui::set )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("w") ) );
        
        }
        { //::osg::Vec4ui::w
        
            typedef unsigned int & ( ::osg::Vec4ui::*w_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "w"
                , w_function_type( &::osg::Vec4ui::w )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::w
        
            typedef unsigned int ( ::osg::Vec4ui::*w_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "w"
                , w_function_type( &::osg::Vec4ui::w ) );
        
        }
        { //::osg::Vec4ui::x
        
            typedef unsigned int & ( ::osg::Vec4ui::*x_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "x"
                , x_function_type( &::osg::Vec4ui::x )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::x
        
            typedef unsigned int ( ::osg::Vec4ui::*x_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "x"
                , x_function_type( &::osg::Vec4ui::x ) );
        
        }
        { //::osg::Vec4ui::y
        
            typedef unsigned int & ( ::osg::Vec4ui::*y_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "y"
                , y_function_type( &::osg::Vec4ui::y )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::y
        
            typedef unsigned int ( ::osg::Vec4ui::*y_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "y"
                , y_function_type( &::osg::Vec4ui::y ) );
        
        }
        { //::osg::Vec4ui::z
        
            typedef unsigned int & ( ::osg::Vec4ui::*z_function_type)(  ) ;
            
            Vec4ui_exposer.def( 
                "z"
                , z_function_type( &::osg::Vec4ui::z )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec4ui::z
        
            typedef unsigned int ( ::osg::Vec4ui::*z_function_type)(  ) const;
            
            Vec4ui_exposer.def( 
                "z"
                , z_function_type( &::osg::Vec4ui::z ) );
        
        }
    }

}