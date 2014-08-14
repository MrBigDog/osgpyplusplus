// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "vec2f.pypp.hpp"

namespace bp = boost::python;

void register_Vec2f_class(){

    { //::osg::Vec2f
        typedef bp::class_< osg::Vec2f > Vec2f_exposer_t;
        Vec2f_exposer_t Vec2f_exposer = Vec2f_exposer_t( "Vec2f", bp::init< >() );
        bp::scope Vec2f_scope( Vec2f_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec2f::num_components;
        Vec2f_exposer.def( bp::init< float, float >(( bp::arg("x"), bp::arg("y") )) );
        { //::osg::Vec2f::isNaN
        
            typedef bool ( ::osg::Vec2f::*isNaN_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "isNaN"
                , isNaN_function_type( &::osg::Vec2f::isNaN ) );
        
        }
        { //::osg::Vec2f::length
        
            typedef float ( ::osg::Vec2f::*length_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "length"
                , length_function_type( &::osg::Vec2f::length ) );
        
        }
        { //::osg::Vec2f::length2
        
            typedef float ( ::osg::Vec2f::*length2_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "length2"
                , length2_function_type( &::osg::Vec2f::length2 ) );
        
        }
        { //::osg::Vec2f::normalize
        
            typedef float ( ::osg::Vec2f::*normalize_function_type)(  ) ;
            
            Vec2f_exposer.def( 
                "normalize"
                , normalize_function_type( &::osg::Vec2f::normalize ) );
        
        }
        Vec2f_exposer.def( bp::self != bp::self );
        Vec2f_exposer.def( bp::self * bp::self );
        Vec2f_exposer.def( bp::self * bp::other< float >() );
        Vec2f_exposer.def( bp::self *= bp::other< float >() );
        Vec2f_exposer.def( bp::self + bp::self );
        Vec2f_exposer.def( bp::self += bp::self );
        Vec2f_exposer.def( bp::self - bp::self );
        Vec2f_exposer.def( -bp::self );
        Vec2f_exposer.def( bp::self -= bp::self );
        Vec2f_exposer.def( bp::self / bp::other< float >() );
        Vec2f_exposer.def( bp::self /= bp::other< float >() );
        Vec2f_exposer.def( bp::self < bp::self );
        Vec2f_exposer.def( bp::self == bp::self );
        { //::osg::Vec2f::operator[]
        
            typedef float & ( ::osg::Vec2f::*__getitem___function_type)( int ) ;
            
            Vec2f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2f::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec2f::operator[]
        
            typedef float ( ::osg::Vec2f::*__getitem___function_type)( int ) const;
            
            Vec2f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2f::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec2f::set
        
            typedef void ( ::osg::Vec2f::*set_function_type)( float,float ) ;
            
            Vec2f_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec2f::set )
                , ( bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::osg::Vec2f::valid
        
            typedef bool ( ::osg::Vec2f::*valid_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "valid"
                , valid_function_type( &::osg::Vec2f::valid ) );
        
        }
        { //::osg::Vec2f::x
        
            typedef float & ( ::osg::Vec2f::*x_function_type)(  ) ;
            
            Vec2f_exposer.def( 
                "x"
                , x_function_type( &::osg::Vec2f::x )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec2f::x
        
            typedef float ( ::osg::Vec2f::*x_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "x"
                , x_function_type( &::osg::Vec2f::x ) );
        
        }
        { //::osg::Vec2f::y
        
            typedef float & ( ::osg::Vec2f::*y_function_type)(  ) ;
            
            Vec2f_exposer.def( 
                "y"
                , y_function_type( &::osg::Vec2f::y )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec2f::y
        
            typedef float ( ::osg::Vec2f::*y_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "y"
                , y_function_type( &::osg::Vec2f::y ) );
        
        }
    }

}
