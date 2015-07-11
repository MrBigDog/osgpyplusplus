// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "nullwidget.pypp.hpp"

namespace bp = boost::python;

struct NullWidget_wrapper : osgWidget::NullWidget, bp::wrapper< osgWidget::NullWidget > {

    NullWidget_wrapper(::std::string const & n="", ::osgWidget::point_type w=0.0f, ::osgWidget::point_type h=0.0f )
    : osgWidget::NullWidget( n, w, h )
      , bp::wrapper< osgWidget::NullWidget >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgWidget::NullWidget::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgWidget::NullWidget::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgWidget::NullWidget::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgWidget::NullWidget::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgWidget::NullWidget::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgWidget::NullWidget::cloneType( );
    }

    virtual bool focus( ::osgWidget::WindowManager const * arg0 ) {
        if( bp::override func_focus = this->get_override( "focus" ) )
            return func_focus( boost::python::ptr(arg0) );
        else{
            return this->osgWidget::NullWidget::focus( boost::python::ptr(arg0) );
        }
    }
    
    bool default_focus( ::osgWidget::WindowManager const * arg0 ) {
        return osgWidget::NullWidget::focus( boost::python::ptr(arg0) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgWidget::NullWidget::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgWidget::NullWidget::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgWidget::NullWidget::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgWidget::NullWidget::libraryName( );
    }

    virtual bool mouseDrag( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseDrag = this->get_override( "mouseDrag" ) )
            return func_mouseDrag( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NullWidget::mouseDrag( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseDrag( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NullWidget::mouseDrag( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseEnter( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseEnter = this->get_override( "mouseEnter" ) )
            return func_mouseEnter( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NullWidget::mouseEnter( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseEnter( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NullWidget::mouseEnter( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseLeave( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseLeave = this->get_override( "mouseLeave" ) )
            return func_mouseLeave( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NullWidget::mouseLeave( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseLeave( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NullWidget::mouseLeave( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseOver( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseOver = this->get_override( "mouseOver" ) )
            return func_mouseOver( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NullWidget::mouseOver( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseOver( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NullWidget::mouseOver( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mousePush( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mousePush = this->get_override( "mousePush" ) )
            return func_mousePush( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NullWidget::mousePush( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mousePush( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NullWidget::mousePush( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseRelease( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseRelease = this->get_override( "mouseRelease" ) )
            return func_mouseRelease( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NullWidget::mouseRelease( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseRelease( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NullWidget::mouseRelease( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool mouseScroll( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_mouseScroll = this->get_override( "mouseScroll" ) )
            return func_mouseScroll( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::NullWidget::mouseScroll( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_mouseScroll( double arg0, double arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::NullWidget::mouseScroll( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool unfocus( ::osgWidget::WindowManager const * arg0 ) {
        if( bp::override func_unfocus = this->get_override( "unfocus" ) )
            return func_unfocus( boost::python::ptr(arg0) );
        else{
            return this->osgWidget::NullWidget::unfocus( boost::python::ptr(arg0) );
        }
    }
    
    bool default_unfocus( ::osgWidget::WindowManager const * arg0 ) {
        return osgWidget::NullWidget::unfocus( boost::python::ptr(arg0) );
    }

    virtual bool keyDown( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_keyDown = this->get_override( "keyDown" ) )
            return func_keyDown( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::EventInterface::keyDown( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_keyDown( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::EventInterface::keyDown( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual bool keyUp( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        if( bp::override func_keyUp = this->get_override( "keyUp" ) )
            return func_keyUp( arg0, arg1, boost::python::ptr(arg2) );
        else{
            return this->osgWidget::EventInterface::keyUp( arg0, arg1, boost::python::ptr(arg2) );
        }
    }
    
    bool default_keyUp( int arg0, int arg1, ::osgWidget::WindowManager const * arg2 ) {
        return osgWidget::EventInterface::keyUp( arg0, arg1, boost::python::ptr(arg2) );
    }

    virtual void managed( ::osgWidget::WindowManager * arg0 ) {
        if( bp::override func_managed = this->get_override( "managed" ) )
            func_managed( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::managed( boost::python::ptr(arg0) );
        }
    }
    
    void default_managed( ::osgWidget::WindowManager * arg0 ) {
        osgWidget::Widget::managed( boost::python::ptr(arg0) );
    }

    virtual void parented( ::osgWidget::Window * arg0 ) {
        if( bp::override func_parented = this->get_override( "parented" ) )
            func_parented( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::parented( boost::python::ptr(arg0) );
        }
    }
    
    void default_parented( ::osgWidget::Window * arg0 ) {
        osgWidget::Widget::parented( boost::python::ptr(arg0) );
    }

    virtual void positioned(  ) {
        if( bp::override func_positioned = this->get_override( "positioned" ) )
            func_positioned(  );
        else{
            this->osgWidget::Widget::positioned(  );
        }
    }
    
    void default_positioned(  ) {
        osgWidget::Widget::positioned( );
    }

    virtual void unmanaged( ::osgWidget::WindowManager * arg0 ) {
        if( bp::override func_unmanaged = this->get_override( "unmanaged" ) )
            func_unmanaged( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::unmanaged( boost::python::ptr(arg0) );
        }
    }
    
    void default_unmanaged( ::osgWidget::WindowManager * arg0 ) {
        osgWidget::Widget::unmanaged( boost::python::ptr(arg0) );
    }

    virtual void unparented( ::osgWidget::Window * arg0 ) {
        if( bp::override func_unparented = this->get_override( "unparented" ) )
            func_unparented( boost::python::ptr(arg0) );
        else{
            this->osgWidget::Widget::unparented( boost::python::ptr(arg0) );
        }
    }
    
    void default_unparented( ::osgWidget::Window * arg0 ) {
        osgWidget::Widget::unparented( boost::python::ptr(arg0) );
    }

};

void register_NullWidget_class(){

    { //::osgWidget::NullWidget
        typedef bp::class_< NullWidget_wrapper, bp::bases< osgWidget::Widget >, osg::ref_ptr< ::osgWidget::NullWidget >, boost::noncopyable > NullWidget_exposer_t;
        NullWidget_exposer_t NullWidget_exposer = NullWidget_exposer_t( "NullWidget", bp::init< bp::optional< std::string const &, osgWidget::point_type, osgWidget::point_type > >(( bp::arg("n")="", bp::arg("w")=0.0f, bp::arg("h")=0.0f )) );
        bp::scope NullWidget_scope( NullWidget_exposer );
        bp::implicitly_convertible< std::string const &, osgWidget::NullWidget >();
        { //::osgWidget::NullWidget::className
        
            typedef char const * ( ::osgWidget::NullWidget::*className_function_type )(  ) const;
            typedef char const * ( NullWidget_wrapper::*default_className_function_type )(  ) const;
            
            NullWidget_exposer.def( 
                "className"
                , className_function_type(&::osgWidget::NullWidget::className)
                , default_className_function_type(&NullWidget_wrapper::default_className) );
        
        }
        { //::osgWidget::NullWidget::clone
        
            typedef ::osg::Object * ( ::osgWidget::NullWidget::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( NullWidget_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            NullWidget_exposer.def( 
                "clone"
                , clone_function_type(&::osgWidget::NullWidget::clone)
                , default_clone_function_type(&NullWidget_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgWidget::NullWidget::cloneType
        
            typedef ::osg::Object * ( ::osgWidget::NullWidget::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( NullWidget_wrapper::*default_cloneType_function_type )(  ) const;
            
            NullWidget_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgWidget::NullWidget::cloneType)
                , default_cloneType_function_type(&NullWidget_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgWidget::NullWidget::focus
        
            typedef bool ( ::osgWidget::NullWidget::*focus_function_type )( ::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_focus_function_type )( ::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "focus"
                , focus_function_type(&::osgWidget::NullWidget::focus)
                , default_focus_function_type(&NullWidget_wrapper::default_focus)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::NullWidget::isSameKindAs
        
            typedef bool ( ::osgWidget::NullWidget::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( NullWidget_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            NullWidget_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgWidget::NullWidget::isSameKindAs)
                , default_isSameKindAs_function_type(&NullWidget_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgWidget::NullWidget::keyPress
        
            typedef bool ( ::osgWidget::NullWidget::*keyPress_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "keyPress"
                , keyPress_function_type( &::osgWidget::NullWidget::keyPress )
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::keyRelease
        
            typedef bool ( ::osgWidget::NullWidget::*keyRelease_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "keyRelease"
                , keyRelease_function_type( &::osgWidget::NullWidget::keyRelease )
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::libraryName
        
            typedef char const * ( ::osgWidget::NullWidget::*libraryName_function_type )(  ) const;
            typedef char const * ( NullWidget_wrapper::*default_libraryName_function_type )(  ) const;
            
            NullWidget_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgWidget::NullWidget::libraryName)
                , default_libraryName_function_type(&NullWidget_wrapper::default_libraryName) );
        
        }
        { //::osgWidget::NullWidget::mouseDrag
        
            typedef bool ( ::osgWidget::NullWidget::*mouseDrag_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_mouseDrag_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "mouseDrag"
                , mouseDrag_function_type(&::osgWidget::NullWidget::mouseDrag)
                , default_mouseDrag_function_type(&NullWidget_wrapper::default_mouseDrag)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::mouseEnter
        
            typedef bool ( ::osgWidget::NullWidget::*mouseEnter_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_mouseEnter_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "mouseEnter"
                , mouseEnter_function_type(&::osgWidget::NullWidget::mouseEnter)
                , default_mouseEnter_function_type(&NullWidget_wrapper::default_mouseEnter)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::mouseLeave
        
            typedef bool ( ::osgWidget::NullWidget::*mouseLeave_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_mouseLeave_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "mouseLeave"
                , mouseLeave_function_type(&::osgWidget::NullWidget::mouseLeave)
                , default_mouseLeave_function_type(&NullWidget_wrapper::default_mouseLeave)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::mouseOver
        
            typedef bool ( ::osgWidget::NullWidget::*mouseOver_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_mouseOver_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "mouseOver"
                , mouseOver_function_type(&::osgWidget::NullWidget::mouseOver)
                , default_mouseOver_function_type(&NullWidget_wrapper::default_mouseOver)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::mousePush
        
            typedef bool ( ::osgWidget::NullWidget::*mousePush_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_mousePush_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "mousePush"
                , mousePush_function_type(&::osgWidget::NullWidget::mousePush)
                , default_mousePush_function_type(&NullWidget_wrapper::default_mousePush)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::mouseRelease
        
            typedef bool ( ::osgWidget::NullWidget::*mouseRelease_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_mouseRelease_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "mouseRelease"
                , mouseRelease_function_type(&::osgWidget::NullWidget::mouseRelease)
                , default_mouseRelease_function_type(&NullWidget_wrapper::default_mouseRelease)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::mouseScroll
        
            typedef bool ( ::osgWidget::NullWidget::*mouseScroll_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_mouseScroll_function_type )( double,double,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "mouseScroll"
                , mouseScroll_function_type(&::osgWidget::NullWidget::mouseScroll)
                , default_mouseScroll_function_type(&NullWidget_wrapper::default_mouseScroll)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::NullWidget::unfocus
        
            typedef bool ( ::osgWidget::NullWidget::*unfocus_function_type )( ::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_unfocus_function_type )( ::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "unfocus"
                , unfocus_function_type(&::osgWidget::NullWidget::unfocus)
                , default_unfocus_function_type(&NullWidget_wrapper::default_unfocus)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::EventInterface::keyDown
        
            typedef bool ( ::osgWidget::EventInterface::*keyDown_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_keyDown_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "keyDown"
                , keyDown_function_type(&::osgWidget::EventInterface::keyDown)
                , default_keyDown_function_type(&NullWidget_wrapper::default_keyDown)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::EventInterface::keyUp
        
            typedef bool ( ::osgWidget::EventInterface::*keyUp_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            typedef bool ( NullWidget_wrapper::*default_keyUp_function_type )( int,int,::osgWidget::WindowManager const * ) ;
            
            NullWidget_exposer.def( 
                "keyUp"
                , keyUp_function_type(&::osgWidget::EventInterface::keyUp)
                , default_keyUp_function_type(&NullWidget_wrapper::default_keyUp)
                , ( bp::arg("arg0"), bp::arg("arg1"), bp::arg("arg2") ) );
        
        }
        { //::osgWidget::Widget::managed
        
            typedef void ( ::osgWidget::Widget::*managed_function_type )( ::osgWidget::WindowManager * ) ;
            typedef void ( NullWidget_wrapper::*default_managed_function_type )( ::osgWidget::WindowManager * ) ;
            
            NullWidget_exposer.def( 
                "managed"
                , managed_function_type(&::osgWidget::Widget::managed)
                , default_managed_function_type(&NullWidget_wrapper::default_managed)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::Widget::parented
        
            typedef void ( ::osgWidget::Widget::*parented_function_type )( ::osgWidget::Window * ) ;
            typedef void ( NullWidget_wrapper::*default_parented_function_type )( ::osgWidget::Window * ) ;
            
            NullWidget_exposer.def( 
                "parented"
                , parented_function_type(&::osgWidget::Widget::parented)
                , default_parented_function_type(&NullWidget_wrapper::default_parented)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::Widget::positioned
        
            typedef void ( ::osgWidget::Widget::*positioned_function_type )(  ) ;
            typedef void ( NullWidget_wrapper::*default_positioned_function_type )(  ) ;
            
            NullWidget_exposer.def( 
                "positioned"
                , positioned_function_type(&::osgWidget::Widget::positioned)
                , default_positioned_function_type(&NullWidget_wrapper::default_positioned) );
        
        }
        { //::osgWidget::Widget::unmanaged
        
            typedef void ( ::osgWidget::Widget::*unmanaged_function_type )( ::osgWidget::WindowManager * ) ;
            typedef void ( NullWidget_wrapper::*default_unmanaged_function_type )( ::osgWidget::WindowManager * ) ;
            
            NullWidget_exposer.def( 
                "unmanaged"
                , unmanaged_function_type(&::osgWidget::Widget::unmanaged)
                , default_unmanaged_function_type(&NullWidget_wrapper::default_unmanaged)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgWidget::Widget::unparented
        
            typedef void ( ::osgWidget::Widget::*unparented_function_type )( ::osgWidget::Window * ) ;
            typedef void ( NullWidget_wrapper::*default_unparented_function_type )( ::osgWidget::Window * ) ;
            
            NullWidget_exposer.def( 
                "unparented"
                , unparented_function_type(&::osgWidget::Widget::unparented)
                , default_unparented_function_type(&NullWidget_wrapper::default_unparented)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
