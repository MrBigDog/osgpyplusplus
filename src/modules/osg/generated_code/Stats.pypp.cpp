// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "stats.pypp.hpp"

namespace bp = boost::python;

struct Stats_wrapper : osg::Stats, bp::wrapper< osg::Stats > {

    Stats_wrapper(::std::string const & name )
    : osg::Stats( name )
      , bp::wrapper< osg::Stats >(){
        // constructor
    
    }

    Stats_wrapper(::std::string const & name, unsigned int numberOfFrames )
    : osg::Stats( name, numberOfFrames )
      , bp::wrapper< osg::Stats >(){
        // constructor
    
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

void register_Stats_class(){

    { //::osg::Stats
        typedef bp::class_< Stats_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::Stats >, boost::noncopyable > Stats_exposer_t;
        Stats_exposer_t Stats_exposer = Stats_exposer_t( "Stats", bp::no_init );
        bp::scope Stats_scope( Stats_exposer );
        Stats_exposer.def( bp::init< std::string const & >(( bp::arg("name") )) );
        bp::implicitly_convertible< std::string const &, osg::Stats >();
        Stats_exposer.def( bp::init< std::string const &, unsigned int >(( bp::arg("name"), bp::arg("numberOfFrames") )) );
        { //::osg::Stats::allocate
        
            typedef void ( ::osg::Stats::*allocate_function_type)( unsigned int ) ;
            
            Stats_exposer.def( 
                "allocate"
                , allocate_function_type( &::osg::Stats::allocate )
                , ( bp::arg("numberOfFrames") ) );
        
        }
        { //::osg::Stats::collectStats
        
            typedef void ( ::osg::Stats::*collectStats_function_type)( ::std::string const &,bool ) ;
            
            Stats_exposer.def( 
                "collectStats"
                , collectStats_function_type( &::osg::Stats::collectStats )
                , ( bp::arg("str"), bp::arg("flag") ) );
        
        }
        { //::osg::Stats::collectStats
        
            typedef bool ( ::osg::Stats::*collectStats_function_type)( ::std::string const & ) const;
            
            Stats_exposer.def( 
                "collectStats"
                , collectStats_function_type( &::osg::Stats::collectStats )
                , ( bp::arg("str") ) );
        
        }
        { //::osg::Stats::getAttributeMap
        
            typedef ::std::map< std::string, double > & ( ::osg::Stats::*getAttributeMap_function_type)( unsigned int ) ;
            
            Stats_exposer.def( 
                "getAttributeMap"
                , getAttributeMap_function_type( &::osg::Stats::getAttributeMap )
                , ( bp::arg("frameNumber") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Stats::getAttributeMap
        
            typedef ::std::map< std::string, double > const & ( ::osg::Stats::*getAttributeMap_function_type)( unsigned int ) const;
            
            Stats_exposer.def( 
                "getAttributeMap"
                , getAttributeMap_function_type( &::osg::Stats::getAttributeMap )
                , ( bp::arg("frameNumber") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Stats::getEarliestFrameNumber
        
            typedef unsigned int ( ::osg::Stats::*getEarliestFrameNumber_function_type)(  ) const;
            
            Stats_exposer.def( 
                "getEarliestFrameNumber"
                , getEarliestFrameNumber_function_type( &::osg::Stats::getEarliestFrameNumber ) );
        
        }
        { //::osg::Stats::getLatestFrameNumber
        
            typedef unsigned int ( ::osg::Stats::*getLatestFrameNumber_function_type)(  ) const;
            
            Stats_exposer.def( 
                "getLatestFrameNumber"
                , getLatestFrameNumber_function_type( &::osg::Stats::getLatestFrameNumber ) );
        
        }
        { //::osg::Stats::getName
        
            typedef ::std::string const & ( ::osg::Stats::*getName_function_type)(  ) const;
            
            Stats_exposer.def( 
                "getName"
                , getName_function_type( &::osg::Stats::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osg::Stats::report
        
            typedef void ( ::osg::Stats::*report_function_type)( ::std::ostream &,char const * ) const;
            
            Stats_exposer.def( 
                "report"
                , report_function_type( &::osg::Stats::report )
                , ( bp::arg("out"), bp::arg("indent")=bp::object() ) );
        
        }
        { //::osg::Stats::report
        
            typedef void ( ::osg::Stats::*report_function_type)( ::std::ostream &,unsigned int,char const * ) const;
            
            Stats_exposer.def( 
                "report"
                , report_function_type( &::osg::Stats::report )
                , ( bp::arg("out"), bp::arg("frameNumber"), bp::arg("indent")=bp::object() ) );
        
        }
        { //::osg::Stats::setAttribute
        
            typedef bool ( ::osg::Stats::*setAttribute_function_type)( unsigned int,::std::string const &,double ) ;
            
            Stats_exposer.def( 
                "setAttribute"
                , setAttribute_function_type( &::osg::Stats::setAttribute )
                , ( bp::arg("frameNumber"), bp::arg("attributeName"), bp::arg("value") ) );
        
        }
        { //::osg::Stats::setName
        
            typedef void ( ::osg::Stats::*setName_function_type)( ::std::string const & ) ;
            
            Stats_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Stats::setName )
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Referenced::setThreadSafeRefUnref
        
            typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( Stats_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            Stats_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&Stats_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
    }

}
