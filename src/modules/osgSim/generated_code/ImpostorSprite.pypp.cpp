// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgsim.h"
#include "wrap_referenced.h"
#include "impostorsprite.pypp.hpp"

namespace bp = boost::python;

struct ImpostorSprite_wrapper : osgSim::ImpostorSprite, bp::wrapper< osgSim::ImpostorSprite > {

    ImpostorSprite_wrapper( )
    : osgSim::ImpostorSprite( )
      , bp::wrapper< osgSim::ImpostorSprite >(){
        // null constructor
    
    }

    virtual void accept( ::osg::Drawable::AttributeFunctor & af ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osgSim::ImpostorSprite::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::AttributeFunctor & af ) {
        osgSim::ImpostorSprite::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osgSim::ImpostorSprite::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        osgSim::ImpostorSprite::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::PrimitiveFunctor & pf ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pf) );
        else{
            this->osgSim::ImpostorSprite::accept( boost::ref(pf) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & pf ) const  {
        osgSim::ImpostorSprite::accept( boost::ref(pf) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgSim::ImpostorSprite::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgSim::ImpostorSprite::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(arg0) );
        else{
            return this->osgSim::ImpostorSprite::clone( boost::ref(arg0) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & arg0 ) const  {
        return osgSim::ImpostorSprite::clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgSim::ImpostorSprite::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgSim::ImpostorSprite::cloneType( );
    }

    virtual ::osg::BoundingBox computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osgSim::ImpostorSprite::computeBound(  );
        }
    }
    
    ::osg::BoundingBox default_computeBound(  ) const  {
        return osgSim::ImpostorSprite::computeBound( );
    }

    virtual void drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_drawImplementation = this->get_override( "drawImplementation" ) )
            func_drawImplementation( boost::ref(renderInfo) );
        else{
            this->osgSim::ImpostorSprite::drawImplementation( boost::ref(renderInfo) );
        }
    }
    
    void default_drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        osgSim::ImpostorSprite::drawImplementation( boost::ref(renderInfo) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgSim::ImpostorSprite::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgSim::ImpostorSprite::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgSim::ImpostorSprite::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgSim::ImpostorSprite::libraryName( );
    }

    virtual bool supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osgSim::ImpostorSprite::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        return osgSim::ImpostorSprite::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osgSim::ImpostorSprite::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        return osgSim::ImpostorSprite::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osgSim::ImpostorSprite::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        return osgSim::ImpostorSprite::supports( boost::ref(arg0) );
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

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Drawable::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Drawable::resizeGLObjectBuffers( maxSize );
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
            this->osg::Drawable::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Drawable::setThreadSafeRefUnref( threadSafe );
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

};

void register_ImpostorSprite_class(){

    bp::class_< ImpostorSprite_wrapper, bp::bases< ::osg::Drawable >, osg::ref_ptr< ImpostorSprite_wrapper >, boost::noncopyable >( "ImpostorSprite", "\n An ImposterSprite is a textured quad which is rendered in place of\n 3D geometry. The ImposterSprite is generated by rendering the original\n 3D geometry to a texture as an image cache. The ImpostorSprite is\n automatically generated by the osgUtil::CullVisitor so it not\n necessary to deal with it directly.\n", bp::no_init )    
        .def( bp::init< >("\n An ImposterSprite is a textured quad which is rendered in place of\n 3D geometry. The ImposterSprite is generated by rendering the original\n 3D geometry to a texture as an image cache. The ImpostorSprite is\n automatically generated by the osgUtil::CullVisitor so it not\n necessary to deal with it directly.\n") )    
        .def( 
            "accept"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osg::Drawable::AttributeFunctor & ))(&::osgSim::ImpostorSprite::accept)
            , (void ( ImpostorSprite_wrapper::* )( ::osg::Drawable::AttributeFunctor & ))(&ImpostorSprite_wrapper::default_accept)
            , ( bp::arg("af") ) )    
        .def( 
            "accept"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osg::Drawable::ConstAttributeFunctor & )const)(&::osgSim::ImpostorSprite::accept)
            , (void ( ImpostorSprite_wrapper::* )( ::osg::Drawable::ConstAttributeFunctor & )const)(&ImpostorSprite_wrapper::default_accept)
            , ( bp::arg("af") ) )    
        .def( 
            "accept"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osg::PrimitiveFunctor & )const)(&::osgSim::ImpostorSprite::accept)
            , (void ( ImpostorSprite_wrapper::* )( ::osg::PrimitiveFunctor & )const)(&ImpostorSprite_wrapper::default_accept)
            , ( bp::arg("pf") ) )    
        .def( 
            "calcPixelError"
            , (float ( ::osgSim::ImpostorSprite::* )( ::osg::Matrix const & )const)( &::osgSim::ImpostorSprite::calcPixelError )
            , ( bp::arg("MVPW") )
            , " Calculate the pixel error value for passing in the ModelViewProjectionWindow transform,\n which transform local coords into screen space." )    
        .def( 
            "className"
            , (char const * ( ::osgSim::ImpostorSprite::* )(  )const)(&::osgSim::ImpostorSprite::className)
            , (char const * ( ImpostorSprite_wrapper::* )(  )const)(&ImpostorSprite_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgSim::ImpostorSprite::* )( ::osg::CopyOp const & )const)(&::osgSim::ImpostorSprite::clone)
            , (::osg::Object * ( ImpostorSprite_wrapper::* )( ::osg::CopyOp const & )const)(&ImpostorSprite_wrapper::default_clone)
            , ( bp::arg("arg0") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgSim::ImpostorSprite::* )(  )const)(&::osgSim::ImpostorSprite::cloneType)
            , (::osg::Object * ( ImpostorSprite_wrapper::* )(  )const)(&ImpostorSprite_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeBound"
            , (::osg::BoundingBox ( ::osgSim::ImpostorSprite::* )(  )const)(&::osgSim::ImpostorSprite::computeBound)
            , (::osg::BoundingBox ( ImpostorSprite_wrapper::* )(  )const)(&ImpostorSprite_wrapper::default_computeBound) )    
        .def( 
            "drawImplementation"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osg::RenderInfo & )const)(&::osgSim::ImpostorSprite::drawImplementation)
            , (void ( ImpostorSprite_wrapper::* )( ::osg::RenderInfo & )const)(&ImpostorSprite_wrapper::default_drawImplementation)
            , ( bp::arg("renderInfo") ) )    
        .def( 
            "getCamera"
            , (::osg::Camera * ( ::osgSim::ImpostorSprite::* )(  ))( &::osgSim::ImpostorSprite::getCamera )
            , bp::return_internal_reference< >()
            , " Get the camera node to use for pre rendering the impostor sprites texture." )    
        .def( 
            "getCamera"
            , (::osg::Camera const * ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getCamera )
            , bp::return_internal_reference< >()
            , " Get the const camera node to use for pre rendering the impostor sprites texture." )    
        .def( 
            "getControlCoords"
            , (::osg::Vec3 * ( ::osgSim::ImpostorSprite::* )(  ))( &::osgSim::ImpostorSprite::getControlCoords )
            , bp::return_internal_reference< >()
            , " Get the control coordinates of the corners of the quad.\n The control coordinates are the corners of the quad projected\n out onto the front face of bounding box which enclosed the impostor\n geometry when it was pre-rendered into the impostor sprites texture.\n At the point of creation/or update of the impostor sprite the control\n coords will lie on top of the corners of the quad in screen space - with a pixel error\n of zero. Once the camera moves relative to the impostor sprite the\n control coords will no longer lie on top of the corners of the quad in\n screen space - a pixel error will have accumulated. This pixel error\n can then be used to determine whether the impostor needs to be updated.\n Stored in the order, [0] - top_left, [1] - bottom_left, [2] - bottom_right, [3] - top_left." )    
        .def( 
            "getControlCoords"
            , (::osg::Vec3 const * ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getControlCoords )
            , bp::return_internal_reference< >()
            , " Get the const control coordinates of the corners of the quad." )    
        .def( 
            "getCoords"
            , (::osg::Vec3 * ( ::osgSim::ImpostorSprite::* )(  ))( &::osgSim::ImpostorSprite::getCoords )
            , bp::return_internal_reference< >()
            , " Get the coordinates of the corners of the quad.\n Stored in the order, [0] - top_left, [1] - bottom_left, [2] - bottom_right, [3] - top_left." )    
        .def( 
            "getCoords"
            , (::osg::Vec3 const * ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getCoords )
            , bp::return_internal_reference< >()
            , " Get the const coordinates of the corners of the quad." )    
        .def( 
            "getLastFrameUsed"
            , (unsigned int ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getLastFrameUsed )
            , " Get the frame number for when the ImpostorSprite was last used in rendering." )    
        .def( 
            "getParent"
            , (::osgSim::Impostor * ( ::osgSim::ImpostorSprite::* )(  ))( &::osgSim::ImpostorSprite::getParent )
            , bp::return_internal_reference< >()
            , " Get the parent, which is an Impostor." )    
        .def( 
            "getParent"
            , (::osgSim::Impostor const * ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getParent )
            , bp::return_internal_reference< >()
            , " Get the const parent, which is an Impostor." )    
        .def( 
            "getStoredLocalEyePoint"
            , (::osg::Vec3 const & ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getStoredLocalEyePoint )
            , bp::return_internal_reference< >()
            , " Get the eye point for when the ImpostorSprite was snapped." )    
        .def( 
            "getTexCoords"
            , (::osg::Vec2 * ( ::osgSim::ImpostorSprite::* )(  ))( &::osgSim::ImpostorSprite::getTexCoords )
            , bp::return_internal_reference< >()
            , " Get the texture coordinates of the corners of the quad.\n Stored in the order, [0] - top_left, [1] - bottom_left, [2] - bottom_right, [3] - top_left." )    
        .def( 
            "getTexCoords"
            , (::osg::Vec2 const * ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getTexCoords )
            , bp::return_internal_reference< >()
            , " Get the const texture coordinates of the corners of the quad." )    
        .def( 
            "getTexture"
            , (::osg::Texture2D * ( ::osgSim::ImpostorSprite::* )(  ))( &::osgSim::ImpostorSprite::getTexture )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTexture"
            , (::osg::Texture2D const * ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::getTexture )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgSim::ImpostorSprite::* )( ::osg::Object const * )const)(&::osgSim::ImpostorSprite::isSameKindAs)
            , (bool ( ImpostorSprite_wrapper::* )( ::osg::Object const * )const)(&ImpostorSprite_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgSim::ImpostorSprite::* )(  )const)(&::osgSim::ImpostorSprite::libraryName)
            , (char const * ( ImpostorSprite_wrapper::* )(  )const)(&ImpostorSprite_wrapper::default_libraryName) )    
        .def( 
            "s"
            , (int ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::s ) )    
        .def( 
            "setCamera"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osg::Camera * ))( &::osgSim::ImpostorSprite::setCamera )
            , ( bp::arg("camera") )
            , " Set the camera node to use for pre rendering the impostor sprites texture." )    
        .def( 
            "setLastFrameUsed"
            , (void ( ::osgSim::ImpostorSprite::* )( unsigned int ))( &::osgSim::ImpostorSprite::setLastFrameUsed )
            , ( bp::arg("frameNumber") )
            , " Set the frame number for when the ImpostorSprite was last used in rendering." )    
        .def( 
            "setParent"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osgSim::Impostor * ))( &::osgSim::ImpostorSprite::setParent )
            , ( bp::arg("parent") )
            , " Set the parent, which must be an Impostor.\n Unlike conventional Drawables, ImpostorSprites can only ever have\n one parent." )    
        .def( 
            "setStoredLocalEyePoint"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osg::Vec3 const & ))( &::osgSim::ImpostorSprite::setStoredLocalEyePoint )
            , ( bp::arg("v") )
            , " Set the eye point for when the ImpostorSprite was snapped." )    
        .def( 
            "setTexture"
            , (void ( ::osgSim::ImpostorSprite::* )( ::osg::Texture2D *,int,int ))( &::osgSim::ImpostorSprite::setTexture )
            , ( bp::arg("tex"), bp::arg("s"), bp::arg("t") ) )    
        .def( 
            "supports"
            , (bool ( ::osgSim::ImpostorSprite::* )( ::osg::Drawable::AttributeFunctor const & )const)(&::osgSim::ImpostorSprite::supports)
            , (bool ( ImpostorSprite_wrapper::* )( ::osg::Drawable::AttributeFunctor const & )const)(&ImpostorSprite_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "supports"
            , (bool ( ::osgSim::ImpostorSprite::* )( ::osg::Drawable::ConstAttributeFunctor const & )const)(&::osgSim::ImpostorSprite::supports)
            , (bool ( ImpostorSprite_wrapper::* )( ::osg::Drawable::ConstAttributeFunctor const & )const)(&ImpostorSprite_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "supports"
            , (bool ( ::osgSim::ImpostorSprite::* )( ::osg::PrimitiveFunctor const & )const)(&::osgSim::ImpostorSprite::supports)
            , (bool ( ImpostorSprite_wrapper::* )( ::osg::PrimitiveFunctor const & )const)(&ImpostorSprite_wrapper::default_supports)
            , ( bp::arg("arg0") ) )    
        .def( 
            "t"
            , (int ( ::osgSim::ImpostorSprite::* )(  )const)( &::osgSim::ImpostorSprite::t ) )    
        .def_readwrite( "_color", &osgSim::ImpostorSprite::_color );

}