// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "texturebuffer.pypp.hpp"

namespace bp = boost::python;

struct TextureBuffer_wrapper : osg::TextureBuffer, bp::wrapper< osg::TextureBuffer > {

    TextureBuffer_wrapper( )
    : osg::TextureBuffer( )
      , bp::wrapper< osg::TextureBuffer >(){
        // null constructor
    
    }

    TextureBuffer_wrapper(::osg::Image * image )
    : osg::TextureBuffer( boost::python::ptr(image) )
      , bp::wrapper< osg::TextureBuffer >(){
        // constructor
    
    }

    virtual void allocateMipmap( ::osg::State & arg0 ) const  {
        if( bp::override func_allocateMipmap = this->get_override( "allocateMipmap" ) )
            func_allocateMipmap( boost::ref(arg0) );
        else{
            this->osg::TextureBuffer::allocateMipmap( boost::ref(arg0) );
        }
    }
    
    void default_allocateMipmap( ::osg::State & arg0 ) const  {
        osg::TextureBuffer::allocateMipmap( boost::ref(arg0) );
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::TextureBuffer::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::TextureBuffer::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::TextureBuffer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::TextureBuffer::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::TextureBuffer::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::TextureBuffer::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::TextureBuffer::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::TextureBuffer::cloneType( );
    }

    virtual ::osg::Image * getImage( unsigned int arg0 ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::TextureBuffer::getImage( arg0 );
        }
    }
    
    ::osg::Image * default_getImage( unsigned int arg0 ) {
        return osg::TextureBuffer::getImage( arg0 );
    }

    virtual ::osg::Image const * getImage( unsigned int arg0 ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::TextureBuffer::getImage( arg0 );
        }
    }
    
    ::osg::Image const * default_getImage( unsigned int arg0 ) const  {
        return osg::TextureBuffer::getImage( arg0 );
    }

    virtual unsigned int getNumImages(  ) const  {
        if( bp::override func_getNumImages = this->get_override( "getNumImages" ) )
            return func_getNumImages(  );
        else{
            return this->osg::TextureBuffer::getNumImages(  );
        }
    }
    
    unsigned int default_getNumImages(  ) const  {
        return osg::TextureBuffer::getNumImages( );
    }

    virtual int getTextureDepth(  ) const  {
        if( bp::override func_getTextureDepth = this->get_override( "getTextureDepth" ) )
            return func_getTextureDepth(  );
        else{
            return this->osg::TextureBuffer::getTextureDepth(  );
        }
    }
    
    int default_getTextureDepth(  ) const  {
        return osg::TextureBuffer::getTextureDepth( );
    }

    virtual int getTextureHeight(  ) const  {
        if( bp::override func_getTextureHeight = this->get_override( "getTextureHeight" ) )
            return func_getTextureHeight(  );
        else{
            return this->osg::TextureBuffer::getTextureHeight(  );
        }
    }
    
    int default_getTextureHeight(  ) const  {
        return osg::TextureBuffer::getTextureHeight( );
    }

    virtual ::GLenum getTextureTarget(  ) const  {
        if( bp::override func_getTextureTarget = this->get_override( "getTextureTarget" ) )
            return func_getTextureTarget(  );
        else{
            return this->osg::TextureBuffer::getTextureTarget(  );
        }
    }
    
    ::GLenum default_getTextureTarget(  ) const  {
        return osg::TextureBuffer::getTextureTarget( );
    }

    virtual int getTextureWidth(  ) const  {
        if( bp::override func_getTextureWidth = this->get_override( "getTextureWidth" ) )
            return func_getTextureWidth(  );
        else{
            return this->osg::TextureBuffer::getTextureWidth(  );
        }
    }
    
    int default_getTextureWidth(  ) const  {
        return osg::TextureBuffer::getTextureWidth( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::TextureBuffer::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::TextureBuffer::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::TextureBuffer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::TextureBuffer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::TextureBuffer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::TextureBuffer::libraryName( );
    }

    virtual void setImage( unsigned int arg0, ::osg::Image * image ) {
        if( bp::override func_setImage = this->get_override( "setImage" ) )
            func_setImage( arg0, boost::python::ptr(image) );
        else{
            this->osg::TextureBuffer::setImage( arg0, boost::python::ptr(image) );
        }
    }
    
    void default_setImage( unsigned int arg0, ::osg::Image * image ) {
        osg::TextureBuffer::setImage( arg0, boost::python::ptr(image) );
    }

    virtual ::osg::Texture * asTexture(  ) {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::Texture::asTexture(  );
        }
    }
    
    ::osg::Texture * default_asTexture(  ) {
        return osg::Texture::asTexture( );
    }

    virtual ::osg::Texture const * asTexture(  ) const  {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::Texture::asTexture(  );
        }
    }
    
    ::osg::Texture const * default_asTexture(  ) const  {
        return osg::Texture::asTexture( );
    }

    virtual bool checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        if( bp::override func_checkValidityOfAssociatedModes = this->get_override( "checkValidityOfAssociatedModes" ) )
            return func_checkValidityOfAssociatedModes( boost::ref(arg0) );
        else{
            return this->osg::StateAttribute::checkValidityOfAssociatedModes( boost::ref(arg0) );
        }
    }
    
    bool default_checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        return osg::StateAttribute::checkValidityOfAssociatedModes( boost::ref(arg0) );
    }

    virtual void compileGLObjects( ::osg::State & state ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(state) );
        else{
            this->osg::Texture::compileGLObjects( boost::ref(state) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & state ) const  {
        osg::Texture::compileGLObjects( boost::ref(state) );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual unsigned int getMember(  ) const  {
        if( bp::override func_getMember = this->get_override( "getMember" ) )
            return func_getMember(  );
        else{
            return this->osg::StateAttribute::getMember(  );
        }
    }
    
    unsigned int default_getMember(  ) const  {
        return osg::StateAttribute::getMember( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::Texture::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::Texture::getModeUsage( boost::ref(usage) );
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

    virtual bool isTextureAttribute(  ) const  {
        if( bp::override func_isTextureAttribute = this->get_override( "isTextureAttribute" ) )
            return func_isTextureAttribute(  );
        else{
            return this->osg::Texture::isTextureAttribute(  );
        }
    }
    
    bool default_isTextureAttribute(  ) const  {
        return osg::Texture::isTextureAttribute( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Texture::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Texture::resizeGLObjectBuffers( maxSize );
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
            this->osg::Object::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Object::setThreadSafeRefUnref( threadSafe );
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

};

void register_TextureBuffer_class(){

    { //::osg::TextureBuffer
        typedef bp::class_< TextureBuffer_wrapper, bp::bases< osg::Texture >, osg::ref_ptr< TextureBuffer_wrapper >, boost::noncopyable > TextureBuffer_exposer_t;
        TextureBuffer_exposer_t TextureBuffer_exposer = TextureBuffer_exposer_t( "TextureBuffer", "\n Encapsulates OpenGL texture buffer functionality.\n", bp::no_init );
        bp::scope TextureBuffer_scope( TextureBuffer_exposer );
        TextureBuffer_exposer.def( bp::init< >("\n Encapsulates OpenGL texture buffer functionality.\n") );
        TextureBuffer_exposer.def( bp::init< osg::Image * >(( bp::arg("image") )) );
        bp::implicitly_convertible< osg::Image *, osg::TextureBuffer >();
        { //::osg::TextureBuffer::allocateMipmap
        
            typedef void ( ::osg::TextureBuffer::*allocateMipmap_function_type)( ::osg::State & ) const;
            typedef void ( TextureBuffer_wrapper::*default_allocateMipmap_function_type)( ::osg::State & ) const;
            
            TextureBuffer_exposer.def( 
                "allocateMipmap"
                , allocateMipmap_function_type(&::osg::TextureBuffer::allocateMipmap)
                , default_allocateMipmap_function_type(&TextureBuffer_wrapper::default_allocateMipmap)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::TextureBuffer::apply
        
            typedef void ( ::osg::TextureBuffer::*apply_function_type)( ::osg::State & ) const;
            typedef void ( TextureBuffer_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            TextureBuffer_exposer.def( 
                "apply"
                , apply_function_type(&::osg::TextureBuffer::apply)
                , default_apply_function_type(&TextureBuffer_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::TextureBuffer::bindBufferAs
        
            typedef void ( ::osg::TextureBuffer::*bindBufferAs_function_type)( unsigned int,::GLenum ) ;
            
            TextureBuffer_exposer.def( 
                "bindBufferAs"
                , bindBufferAs_function_type( &::osg::TextureBuffer::bindBufferAs )
                , ( bp::arg("contextID"), bp::arg("target") )
                , " Bind buffer to different target." );
        
        }
        { //::osg::TextureBuffer::className
        
            typedef char const * ( ::osg::TextureBuffer::*className_function_type)(  ) const;
            typedef char const * ( TextureBuffer_wrapper::*default_className_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "className"
                , className_function_type(&::osg::TextureBuffer::className)
                , default_className_function_type(&TextureBuffer_wrapper::default_className) );
        
        }
        { //::osg::TextureBuffer::clone
        
            typedef ::osg::Object * ( ::osg::TextureBuffer::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( TextureBuffer_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            TextureBuffer_exposer.def( 
                "clone"
                , clone_function_type(&::osg::TextureBuffer::clone)
                , default_clone_function_type(&TextureBuffer_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TextureBuffer::cloneType
        
            typedef ::osg::Object * ( ::osg::TextureBuffer::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( TextureBuffer_wrapper::*default_cloneType_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::TextureBuffer::cloneType)
                , default_cloneType_function_type(&TextureBuffer_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TextureBuffer::getImage
        
            typedef ::osg::Image * ( ::osg::TextureBuffer::*getImage_function_type)(  ) ;
            
            TextureBuffer_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::TextureBuffer::getImage )
                , bp::return_internal_reference< >()
                , " Gets the texture image." );
        
        }
        { //::osg::TextureBuffer::getImage
        
            typedef ::osg::Image const * ( ::osg::TextureBuffer::*getImage_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::TextureBuffer::getImage )
                , bp::return_internal_reference< >()
                , " Gets the const texture image." );
        
        }
        { //::osg::TextureBuffer::getImage
        
            typedef ::osg::Image * ( ::osg::TextureBuffer::*getImage_function_type)( unsigned int ) ;
            typedef ::osg::Image * ( TextureBuffer_wrapper::*default_getImage_function_type)( unsigned int ) ;
            
            TextureBuffer_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::TextureBuffer::getImage)
                , default_getImage_function_type(&TextureBuffer_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::TextureBuffer::getImage
        
            typedef ::osg::Image const * ( ::osg::TextureBuffer::*getImage_function_type)( unsigned int ) const;
            typedef ::osg::Image const * ( TextureBuffer_wrapper::*default_getImage_function_type)( unsigned int ) const;
            
            TextureBuffer_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::TextureBuffer::getImage)
                , default_getImage_function_type(&TextureBuffer_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::TextureBuffer::getModifiedCount
        
            typedef unsigned int & ( ::osg::TextureBuffer::*getModifiedCount_function_type)( unsigned int ) const;
            
            TextureBuffer_exposer.def( 
                "getModifiedCount"
                , getModifiedCount_function_type( &::osg::TextureBuffer::getModifiedCount )
                , ( bp::arg("contextID") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::TextureBuffer::getNumImages
        
            typedef unsigned int ( ::osg::TextureBuffer::*getNumImages_function_type)(  ) const;
            typedef unsigned int ( TextureBuffer_wrapper::*default_getNumImages_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getNumImages"
                , getNumImages_function_type(&::osg::TextureBuffer::getNumImages)
                , default_getNumImages_function_type(&TextureBuffer_wrapper::default_getNumImages) );
        
        }
        { //::osg::TextureBuffer::getTextureDepth
        
            typedef int ( ::osg::TextureBuffer::*getTextureDepth_function_type)(  ) const;
            typedef int ( TextureBuffer_wrapper::*default_getTextureDepth_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getTextureDepth"
                , getTextureDepth_function_type(&::osg::TextureBuffer::getTextureDepth)
                , default_getTextureDepth_function_type(&TextureBuffer_wrapper::default_getTextureDepth) );
        
        }
        { //::osg::TextureBuffer::getTextureHeight
        
            typedef int ( ::osg::TextureBuffer::*getTextureHeight_function_type)(  ) const;
            typedef int ( TextureBuffer_wrapper::*default_getTextureHeight_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getTextureHeight"
                , getTextureHeight_function_type(&::osg::TextureBuffer::getTextureHeight)
                , default_getTextureHeight_function_type(&TextureBuffer_wrapper::default_getTextureHeight) );
        
        }
        { //::osg::TextureBuffer::getTextureTarget
        
            typedef ::GLenum ( ::osg::TextureBuffer::*getTextureTarget_function_type)(  ) const;
            typedef ::GLenum ( TextureBuffer_wrapper::*default_getTextureTarget_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getTextureTarget"
                , getTextureTarget_function_type(&::osg::TextureBuffer::getTextureTarget)
                , default_getTextureTarget_function_type(&TextureBuffer_wrapper::default_getTextureTarget) );
        
        }
        { //::osg::TextureBuffer::getTextureWidth
        
            typedef int ( ::osg::TextureBuffer::*getTextureWidth_function_type)(  ) const;
            typedef int ( TextureBuffer_wrapper::*default_getTextureWidth_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getTextureWidth"
                , getTextureWidth_function_type(&::osg::TextureBuffer::getTextureWidth)
                , default_getTextureWidth_function_type(&TextureBuffer_wrapper::default_getTextureWidth) );
        
        }
        { //::osg::TextureBuffer::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::TextureBuffer::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( TextureBuffer_wrapper::*default_getType_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getType"
                , getType_function_type(&::osg::TextureBuffer::getType)
                , default_getType_function_type(&TextureBuffer_wrapper::default_getType) );
        
        }
        { //::osg::TextureBuffer::getUsageHint
        
            typedef ::GLenum ( ::osg::TextureBuffer::*getUsageHint_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getUsageHint"
                , getUsageHint_function_type( &::osg::TextureBuffer::getUsageHint ) );
        
        }
        { //::osg::TextureBuffer::isSameKindAs
        
            typedef bool ( ::osg::TextureBuffer::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( TextureBuffer_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            TextureBuffer_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::TextureBuffer::isSameKindAs)
                , default_isSameKindAs_function_type(&TextureBuffer_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::TextureBuffer::libraryName
        
            typedef char const * ( ::osg::TextureBuffer::*libraryName_function_type)(  ) const;
            typedef char const * ( TextureBuffer_wrapper::*default_libraryName_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::TextureBuffer::libraryName)
                , default_libraryName_function_type(&TextureBuffer_wrapper::default_libraryName) );
        
        }
        { //::osg::TextureBuffer::setImage
        
            typedef void ( ::osg::TextureBuffer::*setImage_function_type)( ::osg::Image * ) ;
            
            TextureBuffer_exposer.def( 
                "setImage"
                , setImage_function_type( &::osg::TextureBuffer::setImage )
                , ( bp::arg("image") )
                , " Sets the texture image." );
        
        }
        { //::osg::TextureBuffer::setImage
        
            typedef void ( ::osg::TextureBuffer::*setImage_function_type)( unsigned int,::osg::Image * ) ;
            typedef void ( TextureBuffer_wrapper::*default_setImage_function_type)( unsigned int,::osg::Image * ) ;
            
            TextureBuffer_exposer.def( 
                "setImage"
                , setImage_function_type(&::osg::TextureBuffer::setImage)
                , default_setImage_function_type(&TextureBuffer_wrapper::default_setImage)
                , ( bp::arg("arg0"), bp::arg("image") ) );
        
        }
        { //::osg::TextureBuffer::setTextureWidth
        
            typedef void ( ::osg::TextureBuffer::*setTextureWidth_function_type)( int ) ;
            
            TextureBuffer_exposer.def( 
                "setTextureWidth"
                , setTextureWidth_function_type( &::osg::TextureBuffer::setTextureWidth )
                , ( bp::arg("width") )
                , " Sets the texture width. If width is zero, calculate the value\n from the source image width." );
        
        }
        { //::osg::TextureBuffer::setUsageHint
        
            typedef void ( ::osg::TextureBuffer::*setUsageHint_function_type)( ::GLenum ) ;
            
            TextureBuffer_exposer.def( 
                "setUsageHint"
                , setUsageHint_function_type( &::osg::TextureBuffer::setUsageHint )
                , ( bp::arg("usageHint") ) );
        
        }
        { //::osg::TextureBuffer::unbindBufferAs
        
            typedef void ( ::osg::TextureBuffer::*unbindBufferAs_function_type)( unsigned int,::GLenum ) ;
            
            TextureBuffer_exposer.def( 
                "unbindBufferAs"
                , unbindBufferAs_function_type( &::osg::TextureBuffer::unbindBufferAs )
                , ( bp::arg("contextID"), bp::arg("target") ) );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture * ( ::osg::Texture::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( TextureBuffer_wrapper::*default_asTexture_function_type)(  ) ;
            
            TextureBuffer_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&TextureBuffer_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture const * ( ::osg::Texture::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( TextureBuffer_wrapper::*default_asTexture_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&TextureBuffer_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( TextureBuffer_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            TextureBuffer_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&TextureBuffer_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Texture::compileGLObjects
        
            typedef void ( ::osg::Texture::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( TextureBuffer_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            TextureBuffer_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::Texture::compileGLObjects)
                , default_compileGLObjects_function_type(&TextureBuffer_wrapper::default_compileGLObjects)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( TextureBuffer_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            TextureBuffer_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&TextureBuffer_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( TextureBuffer_wrapper::*default_getMember_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&TextureBuffer_wrapper::default_getMember) );
        
        }
        { //::osg::Texture::getModeUsage
        
            typedef bool ( ::osg::Texture::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( TextureBuffer_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            TextureBuffer_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::Texture::getModeUsage)
                , default_getModeUsage_function_type(&TextureBuffer_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( TextureBuffer_wrapper::*default_getUserData_function_type)(  ) ;
            
            TextureBuffer_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TextureBuffer_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( TextureBuffer_wrapper::*default_getUserData_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TextureBuffer_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture::isTextureAttribute
        
            typedef bool ( ::osg::Texture::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( TextureBuffer_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            TextureBuffer_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::Texture::isTextureAttribute)
                , default_isTextureAttribute_function_type(&TextureBuffer_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::Texture::resizeGLObjectBuffers
        
            typedef void ( ::osg::Texture::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( TextureBuffer_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            TextureBuffer_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Texture::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&TextureBuffer_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( TextureBuffer_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            TextureBuffer_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&TextureBuffer_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            TextureBuffer_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( TextureBuffer_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            TextureBuffer_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&TextureBuffer_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( TextureBuffer_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            TextureBuffer_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&TextureBuffer_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}
