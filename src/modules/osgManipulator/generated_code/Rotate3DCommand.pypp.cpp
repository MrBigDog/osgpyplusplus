// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "rotate3dcommand.pypp.hpp"

namespace bp = boost::python;

struct Rotate3DCommand_wrapper : osgManipulator::Rotate3DCommand, bp::wrapper< osgManipulator::Rotate3DCommand > {

    Rotate3DCommand_wrapper( )
    : osgManipulator::Rotate3DCommand( )
      , bp::wrapper< osgManipulator::Rotate3DCommand >(){
        // null constructor
    
    }

    virtual void accept( ::osgManipulator::Constraint const & constraint ) {
        namespace bpl = boost::python;
        if( bpl::override func_accept = this->get_override( "accept" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_accept.ptr(), constraint );
        }
        else{
            osgManipulator::Rotate3DCommand::accept( boost::ref(constraint) );
        }
    }
    
    static void default_accept_6a6602db2f1c1e83e351aee180184e35( ::osgManipulator::Rotate3DCommand & inst, ::osgManipulator::Constraint & constraint ){
        if( dynamic_cast< Rotate3DCommand_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgManipulator::Rotate3DCommand::accept(constraint);
        }
        else{
            inst.accept(constraint);
        }
    }

    virtual void accept( ::osgManipulator::DraggerCallback & callback ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(callback) );
        else{
            this->osgManipulator::Rotate3DCommand::accept( boost::ref(callback) );
        }
    }
    
    void default_accept( ::osgManipulator::DraggerCallback & callback ) {
        osgManipulator::Rotate3DCommand::accept( boost::ref(callback) );
    }

    virtual ::osgManipulator::MotionCommand * createCommandInverse(  ) {
        if( bp::override func_createCommandInverse = this->get_override( "createCommandInverse" ) )
            return func_createCommandInverse(  );
        else{
            return this->osgManipulator::Rotate3DCommand::createCommandInverse(  );
        }
    }
    
    ::osgManipulator::MotionCommand * default_createCommandInverse(  ) {
        return osgManipulator::Rotate3DCommand::createCommandInverse( );
    }

    virtual ::osg::Matrix getMotionMatrix(  ) const  {
        if( bp::override func_getMotionMatrix = this->get_override( "getMotionMatrix" ) )
            return func_getMotionMatrix(  );
        else{
            return this->osgManipulator::Rotate3DCommand::getMotionMatrix(  );
        }
    }
    
    ::osg::Matrix default_getMotionMatrix(  ) const  {
        return osgManipulator::Rotate3DCommand::getMotionMatrix( );
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

void register_Rotate3DCommand_class(){

    bp::class_< Rotate3DCommand_wrapper, bp::bases< osgManipulator::MotionCommand >, osg::ref_ptr< ::osgManipulator::Rotate3DCommand >, boost::noncopyable >( "Rotate3DCommand", "\n Command for rotation in 3D.\n", bp::no_init )    
        .def( bp::init< >("\n Command for rotation in 3D.\n") )    
        .def( 
            "accept"
            , (void (*)( ::osgManipulator::Rotate3DCommand &,::osgManipulator::Constraint & ))( &Rotate3DCommand_wrapper::default_accept_6a6602db2f1c1e83e351aee180184e35 )
            , ( bp::arg("inst"), bp::arg("constraint") ) )    
        .def( 
            "accept"
            , (void ( ::osgManipulator::Rotate3DCommand::* )( ::osgManipulator::DraggerCallback & ) )(&::osgManipulator::Rotate3DCommand::accept)
            , (void ( Rotate3DCommand_wrapper::* )( ::osgManipulator::DraggerCallback & ) )(&Rotate3DCommand_wrapper::default_accept)
            , ( bp::arg("callback") ) )    
        .def( 
            "createCommandInverse"
            , (::osgManipulator::MotionCommand * ( ::osgManipulator::Rotate3DCommand::* )(  ) )(&::osgManipulator::Rotate3DCommand::createCommandInverse)
            , (::osgManipulator::MotionCommand * ( Rotate3DCommand_wrapper::* )(  ) )(&Rotate3DCommand_wrapper::default_createCommandInverse)
            , bp::return_internal_reference< >() )    
        .def( 
            "getMotionMatrix"
            , (::osg::Matrix ( ::osgManipulator::Rotate3DCommand::* )(  ) const)(&::osgManipulator::Rotate3DCommand::getMotionMatrix)
            , (::osg::Matrix ( Rotate3DCommand_wrapper::* )(  ) const)(&Rotate3DCommand_wrapper::default_getMotionMatrix) )    
        .def( 
            "getRotation"
            , (::osg::Quat const & ( ::osgManipulator::Rotate3DCommand::* )(  ) const)( &::osgManipulator::Rotate3DCommand::getRotation )
            , bp::return_internal_reference< >() )    
        .def( 
            "setRotation"
            , (void ( ::osgManipulator::Rotate3DCommand::* )( ::osg::Quat const & ) )( &::osgManipulator::Rotate3DCommand::setRotation )
            , ( bp::arg("rotation") ) );

}
