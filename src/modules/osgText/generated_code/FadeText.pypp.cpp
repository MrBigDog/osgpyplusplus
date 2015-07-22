// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgtext.h"
#include "wrap_referenced.h"
#include "fadetext.pypp.hpp"

namespace bp = boost::python;

struct FadeText_wrapper : osgText::FadeText, bp::wrapper< osgText::FadeText > {

    FadeText_wrapper( )
    : osgText::FadeText( )
      , bp::wrapper< osgText::FadeText >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgText::FadeText::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgText::FadeText::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgText::FadeText::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgText::FadeText::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgText::FadeText::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgText::FadeText::cloneType( );
    }

    virtual void drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_drawImplementation = this->get_override( "drawImplementation" ) )
            func_drawImplementation( boost::ref(renderInfo) );
        else{
            this->osgText::FadeText::drawImplementation( boost::ref(renderInfo) );
        }
    }
    
    void default_drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        osgText::FadeText::drawImplementation( boost::ref(renderInfo) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgText::FadeText::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgText::FadeText::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgText::FadeText::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgText::FadeText::libraryName( );
    }

    virtual void accept( ::osg::Drawable::AttributeFunctor & arg0 ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(arg0) );
        else{
            this->osg::Drawable::accept( boost::ref(arg0) );
        }
    }
    
    void default_accept( ::osg::Drawable::AttributeFunctor & arg0 ) {
        osg::Drawable::accept( boost::ref(arg0) );
    }

    virtual void accept( ::osg::PrimitiveIndexFunctor & arg0 ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(arg0) );
        else{
            this->osg::Drawable::accept( boost::ref(arg0) );
        }
    }
    
    void default_accept( ::osg::PrimitiveIndexFunctor & arg0 ) const  {
        osg::Drawable::accept( boost::ref(arg0) );
    }

    virtual void accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osgText::Text::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        osgText::Text::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::PrimitiveFunctor & pf ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pf) );
        else{
            this->osgText::Text::accept( boost::ref(pf) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & pf ) const  {
        osgText::Text::accept( boost::ref(pf) );
    }

    virtual ::osg::Geometry * asGeometry(  ) {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Drawable::asGeometry(  );
        }
    }
    
    ::osg::Geometry * default_asGeometry(  ) {
        return osg::Drawable::asGeometry( );
    }

    virtual ::osg::Geometry const * asGeometry(  ) const  {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Drawable::asGeometry(  );
        }
    }
    
    ::osg::Geometry const * default_asGeometry(  ) const  {
        return osg::Drawable::asGeometry( );
    }

    virtual void compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(renderInfo) );
        else{
            this->osg::Drawable::compileGLObjects( boost::ref(renderInfo) );
        }
    }
    
    void default_compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        osg::Drawable::compileGLObjects( boost::ref(renderInfo) );
    }

    virtual ::osg::BoundingBox computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osgText::TextBase::computeBound(  );
        }
    }
    
    ::osg::BoundingBox default_computeBound(  ) const  {
        return osgText::TextBase::computeBound( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Drawable::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Drawable::computeDataVariance( );
    }

    virtual void dirtyDisplayList(  ) {
        if( bp::override func_dirtyDisplayList = this->get_override( "dirtyDisplayList" ) )
            func_dirtyDisplayList(  );
        else{
            this->osg::Drawable::dirtyDisplayList(  );
        }
    }
    
    void default_dirtyDisplayList(  ) {
        osg::Drawable::dirtyDisplayList( );
    }

    virtual unsigned int getGLObjectSizeHint(  ) const  {
        if( bp::override func_getGLObjectSizeHint = this->get_override( "getGLObjectSizeHint" ) )
            return func_getGLObjectSizeHint(  );
        else{
            return this->osg::Drawable::getGLObjectSizeHint(  );
        }
    }
    
    unsigned int default_getGLObjectSizeHint(  ) const  {
        return osg::Drawable::getGLObjectSizeHint( );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual void releaseGLObjects( ::osg::State * state=0 ) const  {
        if( bp::override func_releaseGLObjects = this->get_override( "releaseGLObjects" ) )
            func_releaseGLObjects( boost::python::ptr(state) );
        else{
            this->osgText::Text::releaseGLObjects( boost::python::ptr(state) );
        }
    }
    
    void default_releaseGLObjects( ::osg::State * state=0 ) const  {
        osgText::Text::releaseGLObjects( boost::python::ptr(state) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osgText::Text::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osgText::Text::resizeGLObjectBuffers( maxSize );
    }

    virtual void setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        if( bp::override func_setCullCallback = this->get_override( "setCullCallback" ) )
            func_setCullCallback( boost::python::ptr(cc) );
        else{
            this->osg::Drawable::setCullCallback( boost::python::ptr(cc) );
        }
    }
    
    void default_setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        osg::Drawable::setCullCallback( boost::python::ptr(cc) );
    }

    virtual void setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        if( bp::override func_setDrawCallback = this->get_override( "setDrawCallback" ) )
            func_setDrawCallback( boost::python::ptr(dc) );
        else{
            this->osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
        }
    }
    
    void default_setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
    }

    virtual void setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        if( bp::override func_setEventCallback = this->get_override( "setEventCallback" ) )
            func_setEventCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setEventCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        osg::Drawable::setEventCallback( boost::python::ptr(ac) );
    }

    virtual void setFont( ::osgText::Font * font=0 ) {
        if( bp::override func_setFont = this->get_override( "setFont" ) )
            func_setFont( boost::python::ptr(font) );
        else{
            this->osgText::Text::setFont( boost::python::ptr(font) );
        }
    }
    
    void default_setFont( ::osgText::Font * font=0 ) {
        osgText::Text::setFont( boost::python::ptr(font) );
    }

    virtual void setFont( ::osg::ref_ptr< osgText::Font > font ) {
        if( bp::override func_setFont = this->get_override( "setFont" ) )
            func_setFont( font );
        else{
            this->osgText::Text::setFont( font );
        }
    }
    
    void default_setFont( ::osg::ref_ptr< osgText::Font > font ) {
        osgText::Text::setFont( font );
    }

    virtual void setFont( ::std::string const & fontfile ) {
        if( bp::override func_setFont = this->get_override( "setFont" ) )
            func_setFont( fontfile );
        else{
            this->osgText::Text::setFont( fontfile );
        }
    }
    
    void default_setFont( ::std::string const & fontfile ) {
        osgText::Text::setFont( fontfile );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osgText::Text::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osgText::Text::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        if( bp::override func_setUpdateCallback = this->get_override( "setUpdateCallback" ) )
            func_setUpdateCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
    }

    virtual void setUseVertexBufferObjects( bool flag ) {
        if( bp::override func_setUseVertexBufferObjects = this->get_override( "setUseVertexBufferObjects" ) )
            func_setUseVertexBufferObjects( flag );
        else{
            this->osg::Drawable::setUseVertexBufferObjects( flag );
        }
    }
    
    void default_setUseVertexBufferObjects( bool flag ) {
        osg::Drawable::setUseVertexBufferObjects( flag );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

    virtual bool supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Drawable::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        return osg::Drawable::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osgText::Text::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        return osgText::Text::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osgText::Text::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        return osgText::Text::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osgText::Text::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        return osgText::Text::supports( boost::ref(arg0) );
    }

};

void register_FadeText_class(){

    bp::class_< FadeText_wrapper, bp::bases< osgText::Text >, osg::ref_ptr< FadeText_wrapper >, boost::noncopyable >( "FadeText", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "className"
            , (char const * ( ::osgText::FadeText::* )(  )const)(&::osgText::FadeText::className)
            , (char const * ( FadeText_wrapper::* )(  )const)(&FadeText_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgText::FadeText::* )( ::osg::CopyOp const & )const)(&::osgText::FadeText::clone)
            , (::osg::Object * ( FadeText_wrapper::* )( ::osg::CopyOp const & )const)(&FadeText_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgText::FadeText::* )(  )const)(&::osgText::FadeText::cloneType)
            , (::osg::Object * ( FadeText_wrapper::* )(  )const)(&FadeText_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "drawImplementation"
            , (void ( ::osgText::FadeText::* )( ::osg::RenderInfo & )const)(&::osgText::FadeText::drawImplementation)
            , (void ( FadeText_wrapper::* )( ::osg::RenderInfo & )const)(&FadeText_wrapper::default_drawImplementation)
            , ( bp::arg("renderInfo") ) )    
        .def( 
            "getFadeSpeed"
            , (float ( ::osgText::FadeText::* )(  )const)( &::osgText::FadeText::getFadeSpeed )
            , " Get the speed that the alpha value changes." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgText::FadeText::* )( ::osg::Object const * )const)(&::osgText::FadeText::isSameKindAs)
            , (bool ( FadeText_wrapper::* )( ::osg::Object const * )const)(&FadeText_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgText::FadeText::* )(  )const)(&::osgText::FadeText::libraryName)
            , (char const * ( FadeText_wrapper::* )(  )const)(&FadeText_wrapper::default_libraryName) )    
        .def( 
            "setFadeSpeed"
            , (void ( ::osgText::FadeText::* )( float ))( &::osgText::FadeText::setFadeSpeed )
            , ( bp::arg("fadeSpeed") )
            , " Set the speed that the alpha value changes as the text is occluded or becomes visible." )    
        .def( 
            "accept"
            , (void ( ::osgText::Text::* )( ::osg::Drawable::ConstAttributeFunctor & )const)(&::osgText::Text::accept)
            , (void ( FadeText_wrapper::* )( ::osg::Drawable::ConstAttributeFunctor & )const)(&FadeText_wrapper::default_accept)
            , ( bp::arg("af") ) )    
        .def( 
            "accept"
            , (void ( ::osgText::Text::* )( ::osg::PrimitiveFunctor & )const)(&::osgText::Text::accept)
            , (void ( FadeText_wrapper::* )( ::osg::PrimitiveFunctor & )const)(&FadeText_wrapper::default_accept)
            , ( bp::arg("pf") ) )    
        .def( 
            "computeBound"
            , (::osg::BoundingBox ( ::osgText::TextBase::* )(  )const)(&::osgText::TextBase::computeBound)
            , (::osg::BoundingBox ( FadeText_wrapper::* )(  )const)(&FadeText_wrapper::default_computeBound) )    
        .def( 
            "releaseGLObjects"
            , (void ( ::osgText::Text::* )( ::osg::State * )const)(&::osgText::Text::releaseGLObjects)
            , (void ( FadeText_wrapper::* )( ::osg::State * )const)(&FadeText_wrapper::default_releaseGLObjects)
            , ( bp::arg("state")=bp::object() ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osgText::Text::* )( unsigned int ))(&::osgText::Text::resizeGLObjectBuffers)
            , (void ( FadeText_wrapper::* )( unsigned int ))(&FadeText_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setFont"
            , (void ( ::osgText::Text::* )( ::osgText::Font * ))(&::osgText::Text::setFont)
            , (void ( FadeText_wrapper::* )( ::osgText::Font * ))(&FadeText_wrapper::default_setFont)
            , ( bp::arg("font")=bp::object() ) )    
        .def( 
            "setFont"
            , (void ( ::osgText::Text::* )( ::osg::ref_ptr< osgText::Font > ))(&::osgText::Text::setFont)
            , (void ( FadeText_wrapper::* )( ::osg::ref_ptr< osgText::Font > ))(&FadeText_wrapper::default_setFont)
            , ( bp::arg("font") ) )    
        .def( 
            "setFont"
            , (void ( ::osgText::Text::* )( ::std::string const & ))(&::osgText::Text::setFont)
            , (void ( FadeText_wrapper::* )( ::std::string const & ))(&FadeText_wrapper::default_setFont)
            , ( bp::arg("fontfile") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osgText::Text::* )( bool ))(&::osgText::Text::setThreadSafeRefUnref)
            , (void ( FadeText_wrapper::* )( bool ))(&FadeText_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "supports"
            , (bool ( ::osgText::Text::* )( ::osg::Drawable::AttributeFunctor const & )const)(&::osgText::Text::supports)
            , (bool ( FadeText_wrapper::* )( ::osg::Drawable::AttributeFunctor const & )const)(&FadeText_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "supports"
            , (bool ( ::osgText::Text::* )( ::osg::Drawable::ConstAttributeFunctor const & )const)(&::osgText::Text::supports)
            , (bool ( FadeText_wrapper::* )( ::osg::Drawable::ConstAttributeFunctor const & )const)(&FadeText_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "supports"
            , (bool ( ::osgText::Text::* )( ::osg::PrimitiveFunctor const & )const)(&::osgText::Text::supports)
            , (bool ( FadeText_wrapper::* )( ::osg::PrimitiveFunctor const & )const)(&FadeText_wrapper::default_supports)
            , ( bp::arg("arg0") ) );

}
