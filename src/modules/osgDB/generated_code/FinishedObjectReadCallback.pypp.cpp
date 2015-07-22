// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "finishedobjectreadcallback.pypp.hpp"

namespace bp = boost::python;

struct FinishedObjectReadCallback_wrapper : osgDB::FinishedObjectReadCallback, bp::wrapper< osgDB::FinishedObjectReadCallback > {

    FinishedObjectReadCallback_wrapper()
    : osgDB::FinishedObjectReadCallback()
      , bp::wrapper< osgDB::FinishedObjectReadCallback >(){
        // null constructor
        
    }

    virtual void objectRead( ::osgDB::InputStream & is, ::osg::Object & obj ){
        bp::override func_objectRead = this->get_override( "objectRead" );
        func_objectRead( boost::ref(is), boost::ref(obj) );
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

void register_FinishedObjectReadCallback_class(){

    bp::class_< FinishedObjectReadCallback_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< FinishedObjectReadCallback_wrapper >, boost::noncopyable >( "FinishedObjectReadCallback", bp::no_init )    
        .def( 
            "objectRead"
            , bp::pure_virtual( (void ( ::osgDB::FinishedObjectReadCallback::* )( ::osgDB::InputStream &,::osg::Object & ))(&::osgDB::FinishedObjectReadCallback::objectRead) )
            , ( bp::arg("is"), bp::arg("obj") ) );

}
