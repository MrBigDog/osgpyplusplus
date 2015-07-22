// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "stencil.pypp.hpp"

namespace bp = boost::python;

struct Stencil_wrapper : osg::Stencil, bp::wrapper< osg::Stencil > {

    struct Extensions_wrapper : osg::Stencil::Extensions, bp::wrapper< osg::Stencil::Extensions > {
    
        Extensions_wrapper(unsigned int contextID )
        : osg::Stencil::Extensions( contextID )
          , bp::wrapper< osg::Stencil::Extensions >(){
            // constructor
        
        }
    
        static void lowestCommonDenominator( ::osg::Stencil::Extensions & inst, ::osg::Stencil::Extensions & rhs ){
            inst.lowestCommonDenominator(rhs);
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

    Stencil_wrapper( )
    : osg::Stencil( )
      , bp::wrapper< osg::Stencil >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Stencil::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Stencil::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Stencil::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Stencil::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Stencil::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Stencil::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Stencil::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Stencil::cloneType( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::Stencil::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::Stencil::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Stencil::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Stencil::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Stencil::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Stencil::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Stencil::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Stencil::libraryName( );
    }

    virtual ::osg::Texture * asTexture(  ) {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture * default_asTexture(  ) {
        return osg::StateAttribute::asTexture( );
    }

    virtual ::osg::Texture const * asTexture(  ) const  {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture const * default_asTexture(  ) const  {
        return osg::StateAttribute::asTexture( );
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

    virtual void compileGLObjects( ::osg::State & arg0 ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(arg0) );
        else{
            this->osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & arg0 ) const  {
        osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
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
            return this->osg::StateAttribute::isTextureAttribute(  );
        }
    }
    
    bool default_isTextureAttribute(  ) const  {
        return osg::StateAttribute::isTextureAttribute( );
    }

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::StateAttribute::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::StateAttribute::resizeGLObjectBuffers( arg0 );
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

void register_Stencil_class(){

    { //::osg::Stencil
        typedef bp::class_< Stencil_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< Stencil_wrapper >, boost::noncopyable > Stencil_exposer_t;
        Stencil_exposer_t Stencil_exposer = Stencil_exposer_t( "Stencil", "\n Encapsulate OpenGL glStencilFunc/Op/Mask functions.\n\n   All functionality except INCR_WRAP and DECR_WRAP is supported by OpenGL 1.1.\n   INCR_WRAP an DECR_WRAP are available since OpenGL 1.4 or when\n   GL_EXT_stencil_wrap extension is present.\n\n   If INCR_WRAP or DECR_WRAP values are used while they are detected to be not supported,\n   the INCR or DECR values are sent to OpenGL instead. Note: do not use Stencil::getFunction()\n   to detect whether WRAP operations is used as the objects value is kept intact.\n   Use osg::Stencil::getExtensions() method instead.\n\n   OpenGL 2.0 introduced two side stenciling that is available through\n   osg::StencilTwoSided class.\n", bp::no_init );
        bp::scope Stencil_scope( Stencil_exposer );
        bp::enum_< osg::Stencil::Function>("Function")
            .value("NEVER", osg::Stencil::NEVER)
            .value("LESS", osg::Stencil::LESS)
            .value("EQUAL", osg::Stencil::EQUAL)
            .value("LEQUAL", osg::Stencil::LEQUAL)
            .value("GREATER", osg::Stencil::GREATER)
            .value("NOTEQUAL", osg::Stencil::NOTEQUAL)
            .value("GEQUAL", osg::Stencil::GEQUAL)
            .value("ALWAYS", osg::Stencil::ALWAYS)
            .export_values()
            ;
        bp::enum_< osg::Stencil::Operation>("Operation")
            .value("KEEP", osg::Stencil::KEEP)
            .value("ZERO", osg::Stencil::ZERO)
            .value("REPLACE", osg::Stencil::REPLACE)
            .value("INCR", osg::Stencil::INCR)
            .value("DECR", osg::Stencil::DECR)
            .value("INVERT", osg::Stencil::INVERT)
            .value("INCR_WRAP", osg::Stencil::INCR_WRAP)
            .value("DECR_WRAP", osg::Stencil::DECR_WRAP)
            .export_values()
            ;
        { //::osg::Stencil::Extensions
            typedef bp::class_< Stencil_wrapper::Extensions_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::Stencil::Extensions > > Extensions_exposer_t;
            Extensions_exposer_t Extensions_exposer = Extensions_exposer_t( "Extensions", "\n Extensions class which encapsulates the querying of extensions and\n associated function pointers, and provide convenience wrappers to\n check for the extensions or use the associated functions.\n", bp::no_init );
            bp::scope Extensions_scope( Extensions_exposer );
            Extensions_exposer.def( bp::init< unsigned int >(( bp::arg("contextID") ), "\n Extensions class which encapsulates the querying of extensions and\n associated function pointers, and provide convenience wrappers to\n check for the extensions or use the associated functions.\n") );
            bp::implicitly_convertible< unsigned int, osg::Stencil::Extensions >();
            { //::osg::Stencil::Extensions::isStencilWrapSupported
            
                typedef bool ( ::osg::Stencil::Extensions::*isStencilWrapSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isStencilWrapSupported"
                    , isStencilWrapSupported_function_type( &::osg::Stencil::Extensions::isStencilWrapSupported ) );
            
            }
            { //::osg::Stencil::Extensions::lowestCommonDenominator
            
                typedef void ( *lowestCommonDenominator_function_type )( ::osg::Stencil::Extensions &,::osg::Stencil::Extensions & );
                
                Extensions_exposer.def( 
                    "lowestCommonDenominator"
                    , lowestCommonDenominator_function_type( &Stencil_wrapper::Extensions_wrapper::lowestCommonDenominator )
                    , ( bp::arg("inst"), bp::arg("rhs") ) );
            
            }
            { //::osg::Stencil::Extensions::setStencilWrapSupported
            
                typedef void ( ::osg::Stencil::Extensions::*setStencilWrapSupported_function_type)( bool ) ;
                
                Extensions_exposer.def( 
                    "setStencilWrapSupported"
                    , setStencilWrapSupported_function_type( &::osg::Stencil::Extensions::setStencilWrapSupported )
                    , ( bp::arg("flag") ) );
            
            }
            { //::osg::Stencil::Extensions::setupGLExtensions
            
                typedef void ( ::osg::Stencil::Extensions::*setupGLExtensions_function_type)( unsigned int ) ;
                
                Extensions_exposer.def( 
                    "setupGLExtensions"
                    , setupGLExtensions_function_type( &::osg::Stencil::Extensions::setupGLExtensions )
                    , ( bp::arg("contextID") ) );
            
            }
            { //::osg::Referenced::setThreadSafeRefUnref
            
                typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type)( bool ) ;
                typedef void ( Stencil_wrapper::Extensions_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
                
                Extensions_exposer.def( 
                    "setThreadSafeRefUnref"
                    , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                    , default_setThreadSafeRefUnref_function_type(&Stencil_wrapper::Extensions_wrapper::default_setThreadSafeRefUnref)
                    , ( bp::arg("threadSafe") ) );
            
            }
        }
        Stencil_exposer.def( bp::init< >("\n Encapsulate OpenGL glStencilFunc/Op/Mask functions.\n\n   All functionality except INCR_WRAP and DECR_WRAP is supported by OpenGL 1.1.\n   INCR_WRAP an DECR_WRAP are available since OpenGL 1.4 or when\n   GL_EXT_stencil_wrap extension is present.\n\n   If INCR_WRAP or DECR_WRAP values are used while they are detected to be not supported,\n   the INCR or DECR values are sent to OpenGL instead. Note: do not use Stencil::getFunction()\n   to detect whether WRAP operations is used as the objects value is kept intact.\n   Use osg::Stencil::getExtensions() method instead.\n\n   OpenGL 2.0 introduced two side stenciling that is available through\n   osg::StencilTwoSided class.\n") );
        { //::osg::Stencil::apply
        
            typedef void ( ::osg::Stencil::*apply_function_type)( ::osg::State & ) const;
            typedef void ( Stencil_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            Stencil_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Stencil::apply)
                , default_apply_function_type(&Stencil_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Stencil::className
        
            typedef char const * ( ::osg::Stencil::*className_function_type)(  ) const;
            typedef char const * ( Stencil_wrapper::*default_className_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "className"
                , className_function_type(&::osg::Stencil::className)
                , default_className_function_type(&Stencil_wrapper::default_className) );
        
        }
        { //::osg::Stencil::clone
        
            typedef ::osg::Object * ( ::osg::Stencil::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Stencil_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            Stencil_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Stencil::clone)
                , default_clone_function_type(&Stencil_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Stencil::cloneType
        
            typedef ::osg::Object * ( ::osg::Stencil::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( Stencil_wrapper::*default_cloneType_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Stencil::cloneType)
                , default_cloneType_function_type(&Stencil_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Stencil::getExtensions
        
            typedef ::osg::Stencil::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            Stencil_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::Stencil::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >()
                , " Function to call to get the extension of a specified context.\n If the Extension object for that context has not yet been created\n and the createIfNotInitalized flag been set to false then returns NULL.\n If createIfNotInitalized is true then the Extensions object is\n automatically created. However, in this case the extension object\n will only be created with the graphics context associated with ContextID." );
        
        }
        { //::osg::Stencil::getFunction
        
            typedef ::osg::Stencil::Function ( ::osg::Stencil::*getFunction_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getFunction"
                , getFunction_function_type( &::osg::Stencil::getFunction ) );
        
        }
        { //::osg::Stencil::getFunctionMask
        
            typedef unsigned int ( ::osg::Stencil::*getFunctionMask_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getFunctionMask"
                , getFunctionMask_function_type( &::osg::Stencil::getFunctionMask ) );
        
        }
        { //::osg::Stencil::getFunctionRef
        
            typedef int ( ::osg::Stencil::*getFunctionRef_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getFunctionRef"
                , getFunctionRef_function_type( &::osg::Stencil::getFunctionRef ) );
        
        }
        { //::osg::Stencil::getModeUsage
        
            typedef bool ( ::osg::Stencil::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Stencil_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            Stencil_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::Stencil::getModeUsage)
                , default_getModeUsage_function_type(&Stencil_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::Stencil::getStencilFailOperation
        
            typedef ::osg::Stencil::Operation ( ::osg::Stencil::*getStencilFailOperation_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getStencilFailOperation"
                , getStencilFailOperation_function_type( &::osg::Stencil::getStencilFailOperation )
                , " get the operation when the stencil test fails." );
        
        }
        { //::osg::Stencil::getStencilPassAndDepthFailOperation
        
            typedef ::osg::Stencil::Operation ( ::osg::Stencil::*getStencilPassAndDepthFailOperation_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getStencilPassAndDepthFailOperation"
                , getStencilPassAndDepthFailOperation_function_type( &::osg::Stencil::getStencilPassAndDepthFailOperation )
                , " get the operation when the stencil test passes but the depth test fails." );
        
        }
        { //::osg::Stencil::getStencilPassAndDepthPassOperation
        
            typedef ::osg::Stencil::Operation ( ::osg::Stencil::*getStencilPassAndDepthPassOperation_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getStencilPassAndDepthPassOperation"
                , getStencilPassAndDepthPassOperation_function_type( &::osg::Stencil::getStencilPassAndDepthPassOperation )
                , " get the operation when both the stencil test and the depth test pass." );
        
        }
        { //::osg::Stencil::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Stencil::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( Stencil_wrapper::*default_getType_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Stencil::getType)
                , default_getType_function_type(&Stencil_wrapper::default_getType) );
        
        }
        { //::osg::Stencil::getWriteMask
        
            typedef unsigned int ( ::osg::Stencil::*getWriteMask_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getWriteMask"
                , getWriteMask_function_type( &::osg::Stencil::getWriteMask ) );
        
        }
        { //::osg::Stencil::isSameKindAs
        
            typedef bool ( ::osg::Stencil::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( Stencil_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            Stencil_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Stencil::isSameKindAs)
                , default_isSameKindAs_function_type(&Stencil_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Stencil::libraryName
        
            typedef char const * ( ::osg::Stencil::*libraryName_function_type)(  ) const;
            typedef char const * ( Stencil_wrapper::*default_libraryName_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Stencil::libraryName)
                , default_libraryName_function_type(&Stencil_wrapper::default_libraryName) );
        
        }
        { //::osg::Stencil::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::Stencil::Extensions * );
            
            Stencil_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::Stencil::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") )
                , " The setExtensions method allows users to override the extensions across graphics contexts.\n Typically used when you have different extensions supported across graphics pipes\n but need to ensure that they all use the same low common denominator extensions." );
        
        }
        { //::osg::Stencil::setFunction
        
            typedef void ( ::osg::Stencil::*setFunction_function_type)( ::osg::Stencil::Function,int,unsigned int ) ;
            
            Stencil_exposer.def( 
                "setFunction"
                , setFunction_function_type( &::osg::Stencil::setFunction )
                , ( bp::arg("func"), bp::arg("ref"), bp::arg("mask") ) );
        
        }
        { //::osg::Stencil::setFunction
        
            typedef void ( ::osg::Stencil::*setFunction_function_type)( ::osg::Stencil::Function ) ;
            
            Stencil_exposer.def( 
                "setFunction"
                , setFunction_function_type( &::osg::Stencil::setFunction )
                , ( bp::arg("func") ) );
        
        }
        { //::osg::Stencil::setFunctionMask
        
            typedef void ( ::osg::Stencil::*setFunctionMask_function_type)( unsigned int ) ;
            
            Stencil_exposer.def( 
                "setFunctionMask"
                , setFunctionMask_function_type( &::osg::Stencil::setFunctionMask )
                , ( bp::arg("mask") ) );
        
        }
        { //::osg::Stencil::setFunctionRef
        
            typedef void ( ::osg::Stencil::*setFunctionRef_function_type)( int ) ;
            
            Stencil_exposer.def( 
                "setFunctionRef"
                , setFunctionRef_function_type( &::osg::Stencil::setFunctionRef )
                , ( bp::arg("ref") ) );
        
        }
        { //::osg::Stencil::setOperation
        
            typedef void ( ::osg::Stencil::*setOperation_function_type)( ::osg::Stencil::Operation,::osg::Stencil::Operation,::osg::Stencil::Operation ) ;
            
            Stencil_exposer.def( 
                "setOperation"
                , setOperation_function_type( &::osg::Stencil::setOperation )
                , ( bp::arg("sfail"), bp::arg("zfail"), bp::arg("zpass") )
                , " set the operations to apply when the various stencil and depth\n tests fail or pass.  First parameter is to control the operation\n when the stencil test fails.  The second parameter is to control the\n operation when the stencil test passes, but depth test fails. The\n third parameter controls the operation when both the stencil test\n and depth pass.  Ordering of parameter is the same as if using\n glStencilOp(,,)." );
        
        }
        { //::osg::Stencil::setStencilFailOperation
        
            typedef void ( ::osg::Stencil::*setStencilFailOperation_function_type)( ::osg::Stencil::Operation ) ;
            
            Stencil_exposer.def( 
                "setStencilFailOperation"
                , setStencilFailOperation_function_type( &::osg::Stencil::setStencilFailOperation )
                , ( bp::arg("sfail") )
                , " set the operation when the stencil test fails." );
        
        }
        { //::osg::Stencil::setStencilPassAndDepthFailOperation
        
            typedef void ( ::osg::Stencil::*setStencilPassAndDepthFailOperation_function_type)( ::osg::Stencil::Operation ) ;
            
            Stencil_exposer.def( 
                "setStencilPassAndDepthFailOperation"
                , setStencilPassAndDepthFailOperation_function_type( &::osg::Stencil::setStencilPassAndDepthFailOperation )
                , ( bp::arg("zfail") )
                , " set the operation when the stencil test passes but the depth test fails." );
        
        }
        { //::osg::Stencil::setStencilPassAndDepthPassOperation
        
            typedef void ( ::osg::Stencil::*setStencilPassAndDepthPassOperation_function_type)( ::osg::Stencil::Operation ) ;
            
            Stencil_exposer.def( 
                "setStencilPassAndDepthPassOperation"
                , setStencilPassAndDepthPassOperation_function_type( &::osg::Stencil::setStencilPassAndDepthPassOperation )
                , ( bp::arg("zpass") )
                , " set the operation when both the stencil test and the depth test pass." );
        
        }
        { //::osg::Stencil::setWriteMask
        
            typedef void ( ::osg::Stencil::*setWriteMask_function_type)( unsigned int ) ;
            
            Stencil_exposer.def( 
                "setWriteMask"
                , setWriteMask_function_type( &::osg::Stencil::setWriteMask )
                , ( bp::arg("mask") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( Stencil_wrapper::*default_asTexture_function_type)(  ) ;
            
            Stencil_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Stencil_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( Stencil_wrapper::*default_asTexture_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&Stencil_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( Stencil_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            Stencil_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Stencil_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( Stencil_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            Stencil_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&Stencil_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( Stencil_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            Stencil_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&Stencil_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( Stencil_wrapper::*default_getMember_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&Stencil_wrapper::default_getMember) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( Stencil_wrapper::*default_getUserData_function_type)(  ) ;
            
            Stencil_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Stencil_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( Stencil_wrapper::*default_getUserData_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Stencil_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( Stencil_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            Stencil_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Stencil_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( Stencil_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            Stencil_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Stencil_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( Stencil_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            Stencil_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&Stencil_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            Stencil_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( Stencil_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            Stencil_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&Stencil_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( Stencil_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            Stencil_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&Stencil_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        Stencil_exposer.staticmethod( "getExtensions" );
        Stencil_exposer.staticmethod( "setExtensions" );
    }

}
