// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "resizehandler.pypp.hpp"

namespace bp = boost::python;

struct ResizeHandler_wrapper : osgWidget::ResizeHandler, bp::wrapper< osgWidget::ResizeHandler > {

    ResizeHandler_wrapper(::osgWidget::WindowManager * arg0, ::osg::Camera * arg1=0 )
    : osgWidget::ResizeHandler( boost::python::ptr(arg0), boost::python::ptr(arg1) )
      , bp::wrapper< osgWidget::ResizeHandler >(){
        // constructor
    
    }

    virtual bool handle( ::osgGA::GUIEventAdapter const & arg0, ::osgGA::GUIActionAdapter & arg1, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), arg0, arg1, arg2, arg3 );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgWidget::ResizeHandler::handle( boost::ref(arg0), boost::ref(arg1), boost::python::ptr(arg2), boost::python::ptr(arg3) );
        }
    }
    
    static boost::python::object default_handle( ::osgWidget::ResizeHandler & inst, ::osgGA::GUIEventAdapter & arg0, ::osgGA::GUIActionAdapter & arg1, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ){
        bool result;
        if( dynamic_cast< ResizeHandler_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgWidget::ResizeHandler::handle(arg0, arg1, arg2, arg3);
        }
        else{
            result = inst.handle(arg0, arg1, arg2, arg3);
        }
        return bp::object( result );
    }

};

void register_ResizeHandler_class(){

    { //::osgWidget::ResizeHandler
        typedef bp::class_< ResizeHandler_wrapper, osg::ref_ptr< ::osgWidget::ResizeHandler >, boost::noncopyable > ResizeHandler_exposer_t;
        ResizeHandler_exposer_t ResizeHandler_exposer = ResizeHandler_exposer_t( "ResizeHandler", bp::init< osgWidget::WindowManager *, bp::optional< osg::Camera * > >(( bp::arg("arg0"), bp::arg("arg1")=bp::object() )) );
        bp::scope ResizeHandler_scope( ResizeHandler_exposer );
        bp::implicitly_convertible< osgWidget::WindowManager *, osgWidget::ResizeHandler >();
        { //::osgWidget::ResizeHandler::handle
        
            typedef boost::python::object ( *default_handle_function_type )( ::osgWidget::ResizeHandler &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter &,::osg::Object *,::osg::NodeVisitor * );
            
            ResizeHandler_exposer.def( 
                "handle"
                , default_handle_function_type( &ResizeHandler_wrapper::default_handle )
                , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2"), bp::arg("arg3") ) );
        
        }
    }

}
