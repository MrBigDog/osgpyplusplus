// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "translateinlinecommand.pypp.hpp"

namespace bp = boost::python;

struct TranslateInLineCommand_wrapper : osgManipulator::TranslateInLineCommand, bp::wrapper< osgManipulator::TranslateInLineCommand > {

    TranslateInLineCommand_wrapper( )
    : osgManipulator::TranslateInLineCommand( )
      , bp::wrapper< osgManipulator::TranslateInLineCommand >(){
        // null constructor
    
    }

    TranslateInLineCommand_wrapper(::osg::Vec3d const & s, ::osg::Vec3d const & e )
    : osgManipulator::TranslateInLineCommand( boost::ref(s), boost::ref(e) )
      , bp::wrapper< osgManipulator::TranslateInLineCommand >(){
        // constructor
    
    }

    virtual void accept( ::osgManipulator::Constraint const & constraint ) {
        namespace bpl = boost::python;
        if( bpl::override func_accept = this->get_override( "accept" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_accept.ptr(), constraint );
        }
        else{
            osgManipulator::TranslateInLineCommand::accept( boost::ref(constraint) );
        }
    }
    
    static void default_accept_cea64bb686fec00cab445e47b283dbff( ::osgManipulator::TranslateInLineCommand & inst, ::osgManipulator::Constraint & constraint ){
        if( dynamic_cast< TranslateInLineCommand_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgManipulator::TranslateInLineCommand::accept(constraint);
        }
        else{
            inst.accept(constraint);
        }
    }

    virtual void accept( ::osgManipulator::DraggerCallback & callback ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(callback) );
        else{
            this->osgManipulator::TranslateInLineCommand::accept( boost::ref(callback) );
        }
    }
    
    void default_accept( ::osgManipulator::DraggerCallback & callback ) {
        osgManipulator::TranslateInLineCommand::accept( boost::ref(callback) );
    }

    virtual ::osgManipulator::MotionCommand * createCommandInverse(  ) {
        if( bp::override func_createCommandInverse = this->get_override( "createCommandInverse" ) )
            return func_createCommandInverse(  );
        else{
            return this->osgManipulator::TranslateInLineCommand::createCommandInverse(  );
        }
    }
    
    ::osgManipulator::MotionCommand * default_createCommandInverse(  ) {
        return osgManipulator::TranslateInLineCommand::createCommandInverse( );
    }

    virtual ::osg::Matrix getMotionMatrix(  ) const  {
        if( bp::override func_getMotionMatrix = this->get_override( "getMotionMatrix" ) )
            return func_getMotionMatrix(  );
        else{
            return this->osgManipulator::TranslateInLineCommand::getMotionMatrix(  );
        }
    }
    
    ::osg::Matrix default_getMotionMatrix(  ) const  {
        return osgManipulator::TranslateInLineCommand::getMotionMatrix( );
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

void register_TranslateInLineCommand_class(){

    bp::class_< TranslateInLineCommand_wrapper, bp::bases< osgManipulator::MotionCommand >, osg::ref_ptr< ::osgManipulator::TranslateInLineCommand >, boost::noncopyable >( "TranslateInLineCommand", "\n Command for translating in a line.\n", bp::no_init )    
        .def( bp::init< >("\n Command for translating in a line.\n") )    
        .def( bp::init< osg::Vec3d const &, osg::Vec3d const & >(( bp::arg("s"), bp::arg("e") )) )    
        .def( 
            "accept"
            , (void (*)( ::osgManipulator::TranslateInLineCommand &,::osgManipulator::Constraint & ))( &TranslateInLineCommand_wrapper::default_accept_cea64bb686fec00cab445e47b283dbff )
            , ( bp::arg("inst"), bp::arg("constraint") ) )    
        .def( 
            "accept"
            , (void ( ::osgManipulator::TranslateInLineCommand::* )( ::osgManipulator::DraggerCallback & ) )(&::osgManipulator::TranslateInLineCommand::accept)
            , (void ( TranslateInLineCommand_wrapper::* )( ::osgManipulator::DraggerCallback & ) )(&TranslateInLineCommand_wrapper::default_accept)
            , ( bp::arg("callback") ) )    
        .def( 
            "createCommandInverse"
            , (::osgManipulator::MotionCommand * ( ::osgManipulator::TranslateInLineCommand::* )(  ) )(&::osgManipulator::TranslateInLineCommand::createCommandInverse)
            , (::osgManipulator::MotionCommand * ( TranslateInLineCommand_wrapper::* )(  ) )(&TranslateInLineCommand_wrapper::default_createCommandInverse)
            , bp::return_internal_reference< >() )    
        .def( 
            "getLineEnd"
            , (::osg::Vec3d const & ( ::osgManipulator::TranslateInLineCommand::* )(  ) const)( &::osgManipulator::TranslateInLineCommand::getLineEnd )
            , bp::return_internal_reference< >() )    
        .def( 
            "getLineStart"
            , (::osg::Vec3d const & ( ::osgManipulator::TranslateInLineCommand::* )(  ) const)( &::osgManipulator::TranslateInLineCommand::getLineStart )
            , bp::return_internal_reference< >() )    
        .def( 
            "getMotionMatrix"
            , (::osg::Matrix ( ::osgManipulator::TranslateInLineCommand::* )(  ) const)(&::osgManipulator::TranslateInLineCommand::getMotionMatrix)
            , (::osg::Matrix ( TranslateInLineCommand_wrapper::* )(  ) const)(&TranslateInLineCommand_wrapper::default_getMotionMatrix) )    
        .def( 
            "getTranslation"
            , (::osg::Vec3d const & ( ::osgManipulator::TranslateInLineCommand::* )(  ) const)( &::osgManipulator::TranslateInLineCommand::getTranslation )
            , bp::return_internal_reference< >() )    
        .def( 
            "setLine"
            , (void ( ::osgManipulator::TranslateInLineCommand::* )( ::osg::Vec3d const &,::osg::Vec3d const & ) )( &::osgManipulator::TranslateInLineCommand::setLine )
            , ( bp::arg("s"), bp::arg("e") ) )    
        .def( 
            "setTranslation"
            , (void ( ::osgManipulator::TranslateInLineCommand::* )( ::osg::Vec3 const & ) )( &::osgManipulator::TranslateInLineCommand::setTranslation )
            , ( bp::arg("t") ) );

}
