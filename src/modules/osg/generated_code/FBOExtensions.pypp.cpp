// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "fboextensions.pypp.hpp"

namespace bp = boost::python;

struct FBOExtensions_wrapper : osg::FBOExtensions, bp::wrapper< osg::FBOExtensions > {

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

void register_FBOExtensions_class(){

    bp::class_< FBOExtensions_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< FBOExtensions_wrapper >, boost::noncopyable >( "FBOExtensions", "\n FBOExtensions\n", bp::no_init )    
        .def( 
            "instance"
            , (::osg::FBOExtensions * (*)( unsigned int,bool ))( &::osg::FBOExtensions::instance )
            , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
            , bp::return_internal_reference< >() )    
        .def( 
            "isMultisampleCoverageSupported"
            , (bool ( ::osg::FBOExtensions::* )(  )const)( &::osg::FBOExtensions::isMultisampleCoverageSupported ) )    
        .def( 
            "isMultisampleSupported"
            , (bool ( ::osg::FBOExtensions::* )(  )const)( &::osg::FBOExtensions::isMultisampleSupported ) )    
        .def( 
            "isPackedDepthStencilSupported"
            , (bool ( ::osg::FBOExtensions::* )(  )const)( &::osg::FBOExtensions::isPackedDepthStencilSupported ) )    
        .def( 
            "isSupported"
            , (bool ( ::osg::FBOExtensions::* )(  )const)( &::osg::FBOExtensions::isSupported ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( FBOExtensions_wrapper::* )( bool ))(&FBOExtensions_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .staticmethod( "instance" );

}
