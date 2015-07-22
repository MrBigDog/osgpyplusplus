// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "scriptengine.pypp.hpp"

namespace bp = boost::python;

struct ScriptEngine_wrapper : osgWidget::ScriptEngine, bp::wrapper< osgWidget::ScriptEngine > {

    ScriptEngine_wrapper()
    : osgWidget::ScriptEngine()
      , bp::wrapper< osgWidget::ScriptEngine >(){
        // null constructor
        
    }

    virtual bool close(  ) {
        if( bp::override func_close = this->get_override( "close" ) )
            return func_close(  );
        else{
            return this->osgWidget::ScriptEngine::close(  );
        }
    }
    
    bool default_close(  ) {
        return osgWidget::ScriptEngine::close( );
    }

    virtual bool eval( ::std::string const & arg0 ) {
        if( bp::override func_eval = this->get_override( "eval" ) )
            return func_eval( arg0 );
        else{
            return this->osgWidget::ScriptEngine::eval( arg0 );
        }
    }
    
    bool default_eval( ::std::string const & arg0 ) {
        return osgWidget::ScriptEngine::eval( arg0 );
    }

    virtual bool initialize(  ) {
        if( bp::override func_initialize = this->get_override( "initialize" ) )
            return func_initialize(  );
        else{
            return this->osgWidget::ScriptEngine::initialize(  );
        }
    }
    
    bool default_initialize(  ) {
        return osgWidget::ScriptEngine::initialize( );
    }

    virtual bool runFile( ::std::string const & arg0 ) {
        if( bp::override func_runFile = this->get_override( "runFile" ) )
            return func_runFile( arg0 );
        else{
            return this->osgWidget::ScriptEngine::runFile( arg0 );
        }
    }
    
    bool default_runFile( ::std::string const & arg0 ) {
        return osgWidget::ScriptEngine::runFile( arg0 );
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

void register_ScriptEngine_class(){

    bp::class_< ScriptEngine_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ScriptEngine_wrapper >, boost::noncopyable >( "ScriptEngine" )    
        .def( 
            "close"
            , (bool ( ::osgWidget::ScriptEngine::* )(  ))(&::osgWidget::ScriptEngine::close)
            , (bool ( ScriptEngine_wrapper::* )(  ))(&ScriptEngine_wrapper::default_close) )    
        .def( 
            "eval"
            , (bool ( ::osgWidget::ScriptEngine::* )( ::std::string const & ))(&::osgWidget::ScriptEngine::eval)
            , (bool ( ScriptEngine_wrapper::* )( ::std::string const & ))(&ScriptEngine_wrapper::default_eval)
            , ( bp::arg("arg0") ) )    
        .def( 
            "getLastErrorText"
            , (::std::string const & ( ::osgWidget::ScriptEngine::* )(  )const)(&::osgWidget::ScriptEngine::getLastErrorText)
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "initialize"
            , (bool ( ::osgWidget::ScriptEngine::* )(  ))(&::osgWidget::ScriptEngine::initialize)
            , (bool ( ScriptEngine_wrapper::* )(  ))(&ScriptEngine_wrapper::default_initialize) )    
        .def( 
            "runFile"
            , (bool ( ::osgWidget::ScriptEngine::* )( ::std::string const & ))(&::osgWidget::ScriptEngine::runFile)
            , (bool ( ScriptEngine_wrapper::* )( ::std::string const & ))(&ScriptEngine_wrapper::default_runFile)
            , ( bp::arg("arg0") ) );

}
