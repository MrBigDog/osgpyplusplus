// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgga.h"
#include "wrap_referenced.h"
#include "eventvisitor.pypp.hpp"

namespace bp = boost::python;

struct EventVisitor_wrapper : osgGA::EventVisitor, bp::wrapper< osgGA::EventVisitor > {

    EventVisitor_wrapper( )
    : osgGA::EventVisitor( )
      , bp::wrapper< osgGA::EventVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osg::Node & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Node & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Geode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Geode & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Billboard & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Billboard & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LightSource & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LightSource & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Group & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Group & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Transform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Transform & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Projection & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Projection & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Switch & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Switch & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LOD & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OccluderNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgGA::EventVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OccluderNode & node ) {
        osgGA::EventVisitor::apply( boost::ref(node) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgGA::EventVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgGA::EventVisitor::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgGA::EventVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgGA::EventVisitor::libraryName( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgGA::EventVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgGA::EventVisitor::reset( );
    }

    virtual void apply( ::osg::ProxyNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ProxyNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CoordinateSystemNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CoordinateSystemNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClipNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClipNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::TexGenNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::TexGenNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Camera & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Camera & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CameraView & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CameraView & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::MatrixTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::MatrixTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PositionAttitudeTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PositionAttitudeTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Sequence & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Sequence & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PagedLOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PagedLOD & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClearNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClearNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OcclusionQueryNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OcclusionQueryNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual float getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceFromEyePoint = this->get_override( "getDistanceFromEyePoint" ) )
            return func_getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToViewPoint = this->get_override( "getDistanceToViewPoint" ) )
            return func_getDistanceToViewPoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
    }

    virtual ::osg::Vec3 getEyePoint(  ) const  {
        if( bp::override func_getEyePoint = this->get_override( "getEyePoint" ) )
            return func_getEyePoint(  );
        else{
            return this->osg::NodeVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osg::NodeVisitor::getEyePoint( );
    }

    virtual ::osg::Vec3 getViewPoint(  ) const  {
        if( bp::override func_getViewPoint = this->get_override( "getViewPoint" ) )
            return func_getViewPoint(  );
        else{
            return this->osg::NodeVisitor::getViewPoint(  );
        }
    }
    
    ::osg::Vec3 default_getViewPoint(  ) const  {
        return osg::NodeVisitor::getViewPoint( );
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

void register_EventVisitor_class(){

    bp::class_< EventVisitor_wrapper, bp::bases< ::osg::NodeVisitor >, osg::ref_ptr< ::osgGA::EventVisitor >, boost::noncopyable >( "EventVisitor", "\n Basic EventVisitor implementation for animating a scene.\n This visitor traverses the scene graph, calling each nodes appCallback if\n it exists.\n", bp::init< >("\n Basic EventVisitor implementation for animating a scene.\n This visitor traverses the scene graph, calling each nodes appCallback if\n it exists.\n") )    
        .def( 
            "addEvent"
            , (void ( ::osgGA::EventVisitor::* )( ::osgGA::GUIEventAdapter * ))( &::osgGA::EventVisitor::addEvent )
            , ( bp::arg("event") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::Node & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::Node & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::Geode & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::Geode & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::Billboard & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::Billboard & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::LightSource & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::LightSource & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::Group & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::Group & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::Transform & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::Transform & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::Projection & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::Projection & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::Switch & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::Switch & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::LOD & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::LOD & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgGA::EventVisitor::* )( ::osg::OccluderNode & ))(&::osgGA::EventVisitor::apply)
            , (void ( EventVisitor_wrapper::* )( ::osg::OccluderNode & ))(&EventVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "className"
            , (char const * ( ::osgGA::EventVisitor::* )(  )const)(&::osgGA::EventVisitor::className)
            , (char const * ( EventVisitor_wrapper::* )(  )const)(&EventVisitor_wrapper::default_className) )    
        .def( 
            "getActionAdapter"
            , (::osgGA::GUIActionAdapter * ( ::osgGA::EventVisitor::* )(  ))( &::osgGA::EventVisitor::getActionAdapter )
            , bp::return_internal_reference< >() )    
        .def( 
            "getActionAdapter"
            , (::osgGA::GUIActionAdapter const * ( ::osgGA::EventVisitor::* )(  )const)( &::osgGA::EventVisitor::getActionAdapter )
            , bp::return_internal_reference< >() )    
        .def( 
            "getEventHandled"
            , (bool ( ::osgGA::EventVisitor::* )(  )const)( &::osgGA::EventVisitor::getEventHandled ) )    
        .def( 
            "getEvents"
            , (::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > & ( ::osgGA::EventVisitor::* )(  ))( &::osgGA::EventVisitor::getEvents )
            , bp::return_internal_reference< >() )    
        .def( 
            "getEvents"
            , (::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > const & ( ::osgGA::EventVisitor::* )(  )const)( &::osgGA::EventVisitor::getEvents )
            , bp::return_internal_reference< >() )    
        .def( 
            "libraryName"
            , (char const * ( ::osgGA::EventVisitor::* )(  )const)(&::osgGA::EventVisitor::libraryName)
            , (char const * ( EventVisitor_wrapper::* )(  )const)(&EventVisitor_wrapper::default_libraryName) )    
        .def( 
            "removeEvent"
            , (void ( ::osgGA::EventVisitor::* )( ::osgGA::GUIEventAdapter * ))( &::osgGA::EventVisitor::removeEvent )
            , ( bp::arg("event") ) )    
        .def( 
            "reset"
            , (void ( ::osgGA::EventVisitor::* )(  ))(&::osgGA::EventVisitor::reset)
            , (void ( EventVisitor_wrapper::* )(  ))(&EventVisitor_wrapper::default_reset) )    
        .def( 
            "setActionAdapter"
            , (void ( ::osgGA::EventVisitor::* )( ::osgGA::GUIActionAdapter * ))( &::osgGA::EventVisitor::setActionAdapter )
            , ( bp::arg("actionAdapter") ) )    
        .def( 
            "setEventHandled"
            , (void ( ::osgGA::EventVisitor::* )( bool ))( &::osgGA::EventVisitor::setEventHandled )
            , ( bp::arg("handled") ) )    
        .def( 
            "setEvents"
            , (void ( ::osgGA::EventVisitor::* )( ::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > const & ))( &::osgGA::EventVisitor::setEvents )
            , ( bp::arg("events") ) );

}