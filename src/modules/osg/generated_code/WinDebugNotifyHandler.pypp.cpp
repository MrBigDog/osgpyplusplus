// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "windebugnotifyhandler.pypp.hpp"

namespace bp = boost::python;

struct WinDebugNotifyHandler_wrapper : osg::WinDebugNotifyHandler, bp::wrapper< osg::WinDebugNotifyHandler > {

    WinDebugNotifyHandler_wrapper()
    : osg::WinDebugNotifyHandler()
      , bp::wrapper< osg::WinDebugNotifyHandler >(){
        // null constructor
        
    }

    virtual void notify( ::osg::NotifySeverity severity, char const * message ) {
        if( bp::override func_notify = this->get_override( "notify" ) )
            func_notify( severity, message );
        else{
            this->osg::WinDebugNotifyHandler::notify( severity, message );
        }
    }
    
    void default_notify( ::osg::NotifySeverity severity, char const * message ) {
        osg::WinDebugNotifyHandler::notify( severity, message );
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

void register_WinDebugNotifyHandler_class(){

    bp::class_< WinDebugNotifyHandler_wrapper, bp::bases< osg::NotifyHandler >, boost::noncopyable >( "WinDebugNotifyHandler" )    
        .def( 
            "notify"
            , (void ( ::osg::WinDebugNotifyHandler::* )( ::osg::NotifySeverity,char const * ))(&::osg::WinDebugNotifyHandler::notify)
            , (void ( WinDebugNotifyHandler_wrapper::* )( ::osg::NotifySeverity,char const * ))(&WinDebugNotifyHandler_wrapper::default_notify)
            , ( bp::arg("severity"), bp::arg("message") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( WinDebugNotifyHandler_wrapper::* )( bool ))(&WinDebugNotifyHandler_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}