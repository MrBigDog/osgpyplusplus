// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "scale1dcommand.pypp.hpp"

namespace bp = boost::python;

struct Scale1DCommand_wrapper : osgManipulator::Scale1DCommand, bp::wrapper< osgManipulator::Scale1DCommand > {

    Scale1DCommand_wrapper( )
    : osgManipulator::Scale1DCommand( )
      , bp::wrapper< osgManipulator::Scale1DCommand >(){
        // null constructor
    
    }

    virtual void accept( ::osgManipulator::Constraint const & constraint ) {
        namespace bpl = boost::python;
        if( bpl::override func_accept = this->get_override( "accept" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_accept.ptr(), constraint );
        }
        else{
            osgManipulator::Scale1DCommand::accept( boost::ref(constraint) );
        }
    }
    
    static void default_accept_529f61c43342656c969dfd85d3a77c27( ::osgManipulator::Scale1DCommand & inst, ::osgManipulator::Constraint & constraint ){
        if( dynamic_cast< Scale1DCommand_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgManipulator::Scale1DCommand::accept(constraint);
        }
        else{
            inst.accept(constraint);
        }
    }

    virtual void accept( ::osgManipulator::DraggerCallback & callback ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(callback) );
        else{
            this->osgManipulator::Scale1DCommand::accept( boost::ref(callback) );
        }
    }
    
    void default_accept( ::osgManipulator::DraggerCallback & callback ) {
        osgManipulator::Scale1DCommand::accept( boost::ref(callback) );
    }

    virtual ::osgManipulator::MotionCommand * createCommandInverse(  ) {
        if( bp::override func_createCommandInverse = this->get_override( "createCommandInverse" ) )
            return func_createCommandInverse(  );
        else{
            return this->osgManipulator::Scale1DCommand::createCommandInverse(  );
        }
    }
    
    ::osgManipulator::MotionCommand * default_createCommandInverse(  ) {
        return osgManipulator::Scale1DCommand::createCommandInverse( );
    }

    virtual ::osg::Matrix getMotionMatrix(  ) const  {
        if( bp::override func_getMotionMatrix = this->get_override( "getMotionMatrix" ) )
            return func_getMotionMatrix(  );
        else{
            return this->osgManipulator::Scale1DCommand::getMotionMatrix(  );
        }
    }
    
    ::osg::Matrix default_getMotionMatrix(  ) const  {
        return osgManipulator::Scale1DCommand::getMotionMatrix( );
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

void register_Scale1DCommand_class(){

    bp::class_< Scale1DCommand_wrapper, bp::bases< osgManipulator::MotionCommand >, osg::ref_ptr< Scale1DCommand_wrapper >, boost::noncopyable >( "Scale1DCommand", "\n Command for 1D scaling.\n", bp::no_init )    
        .def( bp::init< >("\n Command for 1D scaling.\n") )    
        .def( 
            "accept"
            , (void (*)( ::osgManipulator::Scale1DCommand &,::osgManipulator::Constraint & ))( &Scale1DCommand_wrapper::default_accept_529f61c43342656c969dfd85d3a77c27 )
            , ( bp::arg("inst"), bp::arg("constraint") ) )    
        .def( 
            "accept"
            , (void ( ::osgManipulator::Scale1DCommand::* )( ::osgManipulator::DraggerCallback & ))(&::osgManipulator::Scale1DCommand::accept)
            , (void ( Scale1DCommand_wrapper::* )( ::osgManipulator::DraggerCallback & ))(&Scale1DCommand_wrapper::default_accept)
            , ( bp::arg("callback") ) )    
        .def( 
            "createCommandInverse"
            , (::osgManipulator::MotionCommand * ( ::osgManipulator::Scale1DCommand::* )(  ))(&::osgManipulator::Scale1DCommand::createCommandInverse)
            , (::osgManipulator::MotionCommand * ( Scale1DCommand_wrapper::* )(  ))(&Scale1DCommand_wrapper::default_createCommandInverse)
            , bp::return_internal_reference< >() )    
        .def( 
            "getMinScale"
            , (double ( ::osgManipulator::Scale1DCommand::* )(  )const)( &::osgManipulator::Scale1DCommand::getMinScale ) )    
        .def( 
            "getMotionMatrix"
            , (::osg::Matrix ( ::osgManipulator::Scale1DCommand::* )(  )const)(&::osgManipulator::Scale1DCommand::getMotionMatrix)
            , (::osg::Matrix ( Scale1DCommand_wrapper::* )(  )const)(&Scale1DCommand_wrapper::default_getMotionMatrix) )    
        .def( 
            "getReferencePoint"
            , (double ( ::osgManipulator::Scale1DCommand::* )(  )const)( &::osgManipulator::Scale1DCommand::getReferencePoint ) )    
        .def( 
            "getScale"
            , (double ( ::osgManipulator::Scale1DCommand::* )(  )const)( &::osgManipulator::Scale1DCommand::getScale ) )    
        .def( 
            "getScaleCenter"
            , (double ( ::osgManipulator::Scale1DCommand::* )(  )const)( &::osgManipulator::Scale1DCommand::getScaleCenter ) )    
        .def( 
            "setMinScale"
            , (void ( ::osgManipulator::Scale1DCommand::* )( double ))( &::osgManipulator::Scale1DCommand::setMinScale )
            , ( bp::arg("min") ) )    
        .def( 
            "setReferencePoint"
            , (void ( ::osgManipulator::Scale1DCommand::* )( double ))( &::osgManipulator::Scale1DCommand::setReferencePoint )
            , ( bp::arg("rp") )
            , " ReferencePoint is used only for snapping." )    
        .def( 
            "setScale"
            , (void ( ::osgManipulator::Scale1DCommand::* )( double ))( &::osgManipulator::Scale1DCommand::setScale )
            , ( bp::arg("s") ) )    
        .def( 
            "setScaleCenter"
            , (void ( ::osgManipulator::Scale1DCommand::* )( double ))( &::osgManipulator::Scale1DCommand::setScaleCenter )
            , ( bp::arg("center") ) );

}
