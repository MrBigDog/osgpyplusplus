// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "linesegment.pypp.hpp"

namespace bp = boost::python;

struct LineSegment_wrapper : osg::LineSegment, bp::wrapper< osg::LineSegment > {

    LineSegment_wrapper( )
    : osg::LineSegment( )
      , bp::wrapper< osg::LineSegment >(){
        // null constructor
    
    }

    LineSegment_wrapper(::osg::Vec3d const & s, ::osg::Vec3d const & e )
    : osg::LineSegment( boost::ref(s), boost::ref(e) )
      , bp::wrapper< osg::LineSegment >(){
        // constructor
    
    }

    static void mult_fd02a9af0cd9edfbc1014d4fec2323b7( ::osg::LineSegment & inst, ::osg::LineSegment & seg, ::osg::Matrix const & m ){
        inst.mult(seg, m);
    }

    static void mult_7acf0751e61ed99fb72d625ef7f7e859( ::osg::LineSegment & inst, ::osg::Matrix const & m, ::osg::LineSegment & seg ){
        inst.mult(m, seg);
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_LineSegment_class(){

    { //::osg::LineSegment
        typedef bp::class_< LineSegment_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::LineSegment > > LineSegment_exposer_t;
        LineSegment_exposer_t LineSegment_exposer = LineSegment_exposer_t( "LineSegment", "\n LineSegment class for representing a line segment.\n", bp::no_init );
        bp::scope LineSegment_scope( LineSegment_exposer );
        LineSegment_exposer.def( bp::init< >() );
        LineSegment_exposer.def( bp::init< osg::Vec3d const &, osg::Vec3d const & >(( bp::arg("s"), bp::arg("e") )) );
        { //::osg::LineSegment::end
        
            typedef ::osg::Vec3d & ( ::osg::LineSegment::*end_function_type )(  ) ;
            
            LineSegment_exposer.def( 
                "end"
                , end_function_type( &::osg::LineSegment::end )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::LineSegment::end
        
            typedef ::osg::Vec3d const & ( ::osg::LineSegment::*end_function_type )(  ) const;
            
            LineSegment_exposer.def( 
                "end"
                , end_function_type( &::osg::LineSegment::end )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::BoundingBox const & ) const;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("bb") )
                , " return true if segment intersects BoundingBox." );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::BoundingBox const &,float &,float & ) const;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("bb"), bp::arg("r1"), bp::arg("r2") )
                , " return true if segment intersects BoundingBox\n and return the intersection ratios." );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::BoundingBox const &,double &,double & ) const;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("bb"), bp::arg("r1"), bp::arg("r2") )
                , " return true if segment intersects BoundingBox\n and return the intersection ratios." );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::BoundingSphere const & ) const;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("bs") )
                , " return true if segment intersects BoundingSphere." );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::BoundingSphere const &,float &,float & ) const;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("bs"), bp::arg("r1"), bp::arg("r2") )
                , " return true if segment intersects BoundingSphere and return the\n intersection ratio." );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::BoundingSphere const &,double &,double & ) const;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("bs"), bp::arg("r1"), bp::arg("r2") )
                , " return true if segment intersects BoundingSphere and return the\n intersection ratio." );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::Vec3f const &,::osg::Vec3f const &,::osg::Vec3f const &,float & ) ;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("r") )
                , " return true if segment intersects triangle\n and set ratio long segment." );
        
        }
        { //::osg::LineSegment::intersect
        
            typedef bool ( ::osg::LineSegment::*intersect_function_type )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d const &,double & ) ;
            
            LineSegment_exposer.def( 
                "intersect"
                , intersect_function_type( &::osg::LineSegment::intersect )
                , ( bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("r") )
                , " return true if segment intersects triangle\n and set ratio long segment." );
        
        }
        { //::osg::LineSegment::mult
        
            typedef void ( *mult_function_type )( ::osg::LineSegment &,::osg::LineSegment &,::osg::Matrix const & );
            
            LineSegment_exposer.def( 
                "mult"
                , mult_function_type( &LineSegment_wrapper::mult_fd02a9af0cd9edfbc1014d4fec2323b7 )
                , ( bp::arg("inst"), bp::arg("seg"), bp::arg("m") )
                , "\n post multiply a segment by matrix.\n" );
        
        }
        { //::osg::LineSegment::mult
        
            typedef void ( *mult_function_type )( ::osg::LineSegment &,::osg::Matrix const &,::osg::LineSegment & );
            
            LineSegment_exposer.def( 
                "mult"
                , mult_function_type( &LineSegment_wrapper::mult_7acf0751e61ed99fb72d625ef7f7e859 )
                , ( bp::arg("inst"), bp::arg("m"), bp::arg("seg") )
                , "\n pre multiply a segment by matrix.\n" );
        
        }
        { //::osg::LineSegment::set
        
            typedef void ( ::osg::LineSegment::*set_function_type )( ::osg::Vec3d const &,::osg::Vec3d const & ) ;
            
            LineSegment_exposer.def( 
                "set"
                , set_function_type( &::osg::LineSegment::set )
                , ( bp::arg("s"), bp::arg("e") ) );
        
        }
        { //::osg::LineSegment::start
        
            typedef ::osg::Vec3d & ( ::osg::LineSegment::*start_function_type )(  ) ;
            
            LineSegment_exposer.def( 
                "start"
                , start_function_type( &::osg::LineSegment::start )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::LineSegment::start
        
            typedef ::osg::Vec3d const & ( ::osg::LineSegment::*start_function_type )(  ) const;
            
            LineSegment_exposer.def( 
                "start"
                , start_function_type( &::osg::LineSegment::start )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::LineSegment::valid
        
            typedef bool ( ::osg::LineSegment::*valid_function_type )(  ) const;
            
            LineSegment_exposer.def( 
                "valid"
                , valid_function_type( &::osg::LineSegment::valid ) );
        
        }
        { //::osg::Referenced::setThreadSafeRefUnref
        
            typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type )( bool ) ;
            typedef void ( LineSegment_wrapper::*default_setThreadSafeRefUnref_function_type )( bool ) ;
            
            LineSegment_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&LineSegment_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
    }

}
