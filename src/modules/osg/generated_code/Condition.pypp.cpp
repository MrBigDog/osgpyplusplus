// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "condition.pypp.hpp"

namespace bp = boost::python;

struct Condition_wrapper : OpenThreads::Condition, bp::wrapper< OpenThreads::Condition > {

    Condition_wrapper( )
    : OpenThreads::Condition( )
      , bp::wrapper< OpenThreads::Condition >(){
        // null constructor
    
    }

    virtual int broadcast(  ) {
        if( bp::override func_broadcast = this->get_override( "broadcast" ) )
            return func_broadcast(  );
        else{
            return this->OpenThreads::Condition::broadcast(  );
        }
    }
    
    int default_broadcast(  ) {
        return OpenThreads::Condition::broadcast( );
    }

    virtual int signal(  ) {
        if( bp::override func_signal = this->get_override( "signal" ) )
            return func_signal(  );
        else{
            return this->OpenThreads::Condition::signal(  );
        }
    }
    
    int default_signal(  ) {
        return OpenThreads::Condition::signal( );
    }

    virtual int wait( ::OpenThreads::Mutex * mutex ) {
        if( bp::override func_wait = this->get_override( "wait" ) )
            return func_wait( boost::python::ptr(mutex) );
        else{
            return this->OpenThreads::Condition::wait( boost::python::ptr(mutex) );
        }
    }
    
    int default_wait( ::OpenThreads::Mutex * mutex ) {
        return OpenThreads::Condition::wait( boost::python::ptr(mutex) );
    }

    virtual int wait( ::OpenThreads::Mutex * mutex, long unsigned int ms ) {
        if( bp::override func_wait = this->get_override( "wait" ) )
            return func_wait( boost::python::ptr(mutex), ms );
        else{
            return this->OpenThreads::Condition::wait( boost::python::ptr(mutex), ms );
        }
    }
    
    int default_wait( ::OpenThreads::Mutex * mutex, long unsigned int ms ) {
        return OpenThreads::Condition::wait( boost::python::ptr(mutex), ms );
    }

};

void register_Condition_class(){

    bp::class_< Condition_wrapper, boost::noncopyable >( "Condition", bp::init< >() )    
        .def( 
            "broadcast"
            , (int ( ::OpenThreads::Condition::* )(  ))(&::OpenThreads::Condition::broadcast)
            , (int ( Condition_wrapper::* )(  ))(&Condition_wrapper::default_broadcast) )    
        .def( 
            "signal"
            , (int ( ::OpenThreads::Condition::* )(  ))(&::OpenThreads::Condition::signal)
            , (int ( Condition_wrapper::* )(  ))(&Condition_wrapper::default_signal) )    
        .def( 
            "wait"
            , (int ( ::OpenThreads::Condition::* )( ::OpenThreads::Mutex * ))(&::OpenThreads::Condition::wait)
            , (int ( Condition_wrapper::* )( ::OpenThreads::Mutex * ))(&Condition_wrapper::default_wait)
            , ( bp::arg("mutex") ) )    
        .def( 
            "wait"
            , (int ( ::OpenThreads::Condition::* )( ::OpenThreads::Mutex *,long unsigned int ))(&::OpenThreads::Condition::wait)
            , (int ( Condition_wrapper::* )( ::OpenThreads::Mutex *,long unsigned int ))(&Condition_wrapper::default_wait)
            , ( bp::arg("mutex"), bp::arg("ms") ) );

}