// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgtext.h"
#include "wrap_referenced.h"
#include "glyphtexture.pypp.hpp"

namespace bp = boost::python;

struct GlyphTexture_wrapper : osgText::GlyphTexture, bp::wrapper< osgText::GlyphTexture > {

    GlyphTexture_wrapper( )
    : osgText::GlyphTexture( )
      , bp::wrapper< osgText::GlyphTexture >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osgText::GlyphTexture::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osgText::GlyphTexture::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgText::GlyphTexture::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgText::GlyphTexture::className( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osgText::GlyphTexture::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osgText::GlyphTexture::resizeGLObjectBuffers( maxSize );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osgText::GlyphTexture::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osgText::GlyphTexture::setThreadSafeRefUnref( threadSafe );
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

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Texture2D::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Texture2D::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Texture2D::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Texture2D::cloneType( );
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

    virtual ::osg::Image * getImage( unsigned int arg0 ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture2D::getImage( arg0 );
        }
    }
    
    ::osg::Image * default_getImage( unsigned int arg0 ) {
        return osg::Texture2D::getImage( arg0 );
    }

    virtual ::osg::Image const * getImage( unsigned int arg0 ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture2D::getImage( arg0 );
        }
    }
    
    ::osg::Image const * default_getImage( unsigned int arg0 ) const  {
        return osg::Texture2D::getImage( arg0 );
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

    virtual unsigned int getNumImages(  ) const  {
        if( bp::override func_getNumImages = this->get_override( "getNumImages" ) )
            return func_getNumImages(  );
        else{
            return this->osg::Texture2D::getNumImages(  );
        }
    }
    
    unsigned int default_getNumImages(  ) const  {
        return osg::Texture2D::getNumImages( );
    }

    virtual int getTextureDepth(  ) const  {
        if( bp::override func_getTextureDepth = this->get_override( "getTextureDepth" ) )
            return func_getTextureDepth(  );
        else{
            return this->osg::Texture2D::getTextureDepth(  );
        }
    }
    
    int default_getTextureDepth(  ) const  {
        return osg::Texture2D::getTextureDepth( );
    }

    virtual int getTextureHeight(  ) const  {
        if( bp::override func_getTextureHeight = this->get_override( "getTextureHeight" ) )
            return func_getTextureHeight(  );
        else{
            return this->osg::Texture2D::getTextureHeight(  );
        }
    }
    
    int default_getTextureHeight(  ) const  {
        return osg::Texture2D::getTextureHeight( );
    }

    virtual ::GLenum getTextureTarget(  ) const  {
        if( bp::override func_getTextureTarget = this->get_override( "getTextureTarget" ) )
            return func_getTextureTarget(  );
        else{
            return this->osg::Texture2D::getTextureTarget(  );
        }
    }
    
    ::GLenum default_getTextureTarget(  ) const  {
        return osg::Texture2D::getTextureTarget( );
    }

    virtual int getTextureWidth(  ) const  {
        if( bp::override func_getTextureWidth = this->get_override( "getTextureWidth" ) )
            return func_getTextureWidth(  );
        else{
            return this->osg::Texture2D::getTextureWidth(  );
        }
    }
    
    int default_getTextureWidth(  ) const  {
        return osg::Texture2D::getTextureWidth( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Texture2D::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Texture2D::getType( );
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

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Texture2D::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Texture2D::isSameKindAs( boost::python::ptr(obj) );
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

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Texture2D::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Texture2D::libraryName( );
    }

    virtual void setImage( unsigned int arg0, ::osg::Image * image ) {
        if( bp::override func_setImage = this->get_override( "setImage" ) )
            func_setImage( arg0, boost::python::ptr(image) );
        else{
            this->osg::Texture2D::setImage( arg0, boost::python::ptr(image) );
        }
    }
    
    void default_setImage( unsigned int arg0, ::osg::Image * image ) {
        osg::Texture2D::setImage( arg0, boost::python::ptr(image) );
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

void register_GlyphTexture_class(){

    bp::class_< GlyphTexture_wrapper, bp::bases< ::osg::Texture2D >, osg::ref_ptr< ::osgText::GlyphTexture >, boost::noncopyable >( "GlyphTexture", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "addGlyph"
            , (void ( ::osgText::GlyphTexture::* )( ::osgText::Glyph *,int,int ))( &::osgText::GlyphTexture::addGlyph )
            , ( bp::arg("glyph"), bp::arg("posX"), bp::arg("posY") ) )    
        .def( 
            "apply"
            , (void ( ::osgText::GlyphTexture::* )( ::osg::State & )const)(&::osgText::GlyphTexture::apply)
            , (void ( GlyphTexture_wrapper::* )( ::osg::State & )const)(&GlyphTexture_wrapper::default_apply)
            , ( bp::arg("state") ) )    
        .def( 
            "className"
            , (char const * ( ::osgText::GlyphTexture::* )(  )const)(&::osgText::GlyphTexture::className)
            , (char const * ( GlyphTexture_wrapper::* )(  )const)(&GlyphTexture_wrapper::default_className) )    
        .def( 
            "createImage"
            , (::osg::Image * ( ::osgText::GlyphTexture::* )(  ))( &::osgText::GlyphTexture::createImage )
            , bp::return_internal_reference< >()
            , " create an image that maps all the associated Glyphs onto a single image, that is equivilant to what will be downloaded to the texture." )    
        .def( 
            "getGlyphImageMargin"
            , (unsigned int ( ::osgText::GlyphTexture::* )(  )const)( &::osgText::GlyphTexture::getGlyphImageMargin ) )    
        .def( 
            "getGlyphImageMarginRatio"
            , (float ( ::osgText::GlyphTexture::* )(  )const)( &::osgText::GlyphTexture::getGlyphImageMarginRatio ) )    
        .def( 
            "getSpaceForGlyph"
            , (bool ( ::osgText::GlyphTexture::* )( ::osgText::Glyph *,int &,int & ))( &::osgText::GlyphTexture::getSpaceForGlyph )
            , ( bp::arg("glyph"), bp::arg("posX"), bp::arg("posY") ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osgText::GlyphTexture::* )( unsigned int ))(&::osgText::GlyphTexture::resizeGLObjectBuffers)
            , (void ( GlyphTexture_wrapper::* )( unsigned int ))(&GlyphTexture_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setGlyphImageMargin"
            , (void ( ::osgText::GlyphTexture::* )( unsigned int ))( &::osgText::GlyphTexture::setGlyphImageMargin )
            , ( bp::arg("margin") )
            , " Set the margin around each glyph, to ensure that texture filtering doesnt bleed adjacent glyphs into each other." )    
        .def( 
            "setGlyphImageMarginRatio"
            , (void ( ::osgText::GlyphTexture::* )( float ))( &::osgText::GlyphTexture::setGlyphImageMarginRatio )
            , ( bp::arg("margin") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osgText::GlyphTexture::* )( bool ))(&::osgText::GlyphTexture::setThreadSafeRefUnref)
            , (void ( GlyphTexture_wrapper::* )( bool ))(&GlyphTexture_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}