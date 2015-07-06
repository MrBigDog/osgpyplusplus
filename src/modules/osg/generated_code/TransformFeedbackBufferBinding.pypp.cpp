// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "transformfeedbackbufferbinding.pypp.hpp"

namespace bp = boost::python;

struct TransformFeedbackBufferBinding_wrapper : osg::TransformFeedbackBufferBinding, bp::wrapper< osg::TransformFeedbackBufferBinding > {

    TransformFeedbackBufferBinding_wrapper(::GLuint index=0 )
    : osg::TransformFeedbackBufferBinding( index )
      , bp::wrapper< osg::TransformFeedbackBufferBinding >(){
        // constructor
    
    }

    TransformFeedbackBufferBinding_wrapper(::GLuint index, ::osg::BufferObject * bo, ::GLintptr offset, ::GLsizeiptr size )
    : osg::TransformFeedbackBufferBinding( index, boost::python::ptr(bo), offset, size )
      , bp::wrapper< osg::TransformFeedbackBufferBinding >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::TransformFeedbackBufferBinding::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::TransformFeedbackBufferBinding::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::TransformFeedbackBufferBinding::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::TransformFeedbackBufferBinding::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::TransformFeedbackBufferBinding::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::TransformFeedbackBufferBinding::cloneType( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::TransformFeedbackBufferBinding::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::TransformFeedbackBufferBinding::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::TransformFeedbackBufferBinding::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::TransformFeedbackBufferBinding::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::TransformFeedbackBufferBinding::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::TransformFeedbackBufferBinding::libraryName( );
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

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & arg0 ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(arg0) );
        else{
            return this->osg::StateAttribute::getModeUsage( boost::ref(arg0) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & arg0 ) const  {
        return osg::StateAttribute::getModeUsage( boost::ref(arg0) );
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

void register_TransformFeedbackBufferBinding_class(){

    { //::osg::TransformFeedbackBufferBinding
        typedef bp::class_< TransformFeedbackBufferBinding_wrapper, osg::ref_ptr< ::osg::TransformFeedbackBufferBinding >, boost::noncopyable > TransformFeedbackBufferBinding_exposer_t;
        TransformFeedbackBufferBinding_exposer_t TransformFeedbackBufferBinding_exposer = TransformFeedbackBufferBinding_exposer_t( "TransformFeedbackBufferBinding", "\n StateAttribute for binding a transform feedback index target.\n", bp::init< bp::optional< GLuint > >(( bp::arg("index")=(::GLuint)(0) ), "\n StateAttribute for binding a transform feedback index target.\n") );
        bp::scope TransformFeedbackBufferBinding_scope( TransformFeedbackBufferBinding_exposer );
        bp::implicitly_convertible< GLuint, osg::TransformFeedbackBufferBinding >();
        TransformFeedbackBufferBinding_exposer.def( bp::init< GLuint, osg::BufferObject *, GLintptr, GLsizeiptr >(( bp::arg("index"), bp::arg("bo"), bp::arg("offset"), bp::arg("size") )) );
        { //::osg::TransformFeedbackBufferBinding::className
        
            typedef char const * ( ::osg::TransformFeedbackBufferBinding::*className_function_type)(  ) const;
            typedef char const * ( TransformFeedbackBufferBinding_wrapper::*default_className_function_type)(  ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "className"
                , className_function_type(&::osg::TransformFeedbackBufferBinding::className)
                , default_className_function_type(&TransformFeedbackBufferBinding_wrapper::default_className) );
        
        }
        { //::osg::TransformFeedbackBufferBinding::clone
        
            typedef ::osg::Object * ( ::osg::TransformFeedbackBufferBinding::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( TransformFeedbackBufferBinding_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "clone"
                , clone_function_type(&::osg::TransformFeedbackBufferBinding::clone)
                , default_clone_function_type(&TransformFeedbackBufferBinding_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TransformFeedbackBufferBinding::cloneType
        
            typedef ::osg::Object * ( ::osg::TransformFeedbackBufferBinding::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( TransformFeedbackBufferBinding_wrapper::*default_cloneType_function_type)(  ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::TransformFeedbackBufferBinding::cloneType)
                , default_cloneType_function_type(&TransformFeedbackBufferBinding_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TransformFeedbackBufferBinding::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::TransformFeedbackBufferBinding::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( TransformFeedbackBufferBinding_wrapper::*default_getType_function_type)(  ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "getType"
                , getType_function_type(&::osg::TransformFeedbackBufferBinding::getType)
                , default_getType_function_type(&TransformFeedbackBufferBinding_wrapper::default_getType) );
        
        }
        { //::osg::TransformFeedbackBufferBinding::isSameKindAs
        
            typedef bool ( ::osg::TransformFeedbackBufferBinding::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( TransformFeedbackBufferBinding_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::TransformFeedbackBufferBinding::isSameKindAs)
                , default_isSameKindAs_function_type(&TransformFeedbackBufferBinding_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::TransformFeedbackBufferBinding::libraryName
        
            typedef char const * ( ::osg::TransformFeedbackBufferBinding::*libraryName_function_type)(  ) const;
            typedef char const * ( TransformFeedbackBufferBinding_wrapper::*default_libraryName_function_type)(  ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::TransformFeedbackBufferBinding::libraryName)
                , default_libraryName_function_type(&TransformFeedbackBufferBinding_wrapper::default_libraryName) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( TransformFeedbackBufferBinding_wrapper::*default_asTexture_function_type)(  ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&TransformFeedbackBufferBinding_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( TransformFeedbackBufferBinding_wrapper::*default_asTexture_function_type)(  ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&TransformFeedbackBufferBinding_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( TransformFeedbackBufferBinding_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&TransformFeedbackBufferBinding_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( TransformFeedbackBufferBinding_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&TransformFeedbackBufferBinding_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( TransformFeedbackBufferBinding_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&TransformFeedbackBufferBinding_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( TransformFeedbackBufferBinding_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&TransformFeedbackBufferBinding_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( TransformFeedbackBufferBinding_wrapper::*default_getUserData_function_type)(  ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TransformFeedbackBufferBinding_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( TransformFeedbackBufferBinding_wrapper::*default_getUserData_function_type)(  ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TransformFeedbackBufferBinding_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( TransformFeedbackBufferBinding_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&TransformFeedbackBufferBinding_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( TransformFeedbackBufferBinding_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&TransformFeedbackBufferBinding_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( TransformFeedbackBufferBinding_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&TransformFeedbackBufferBinding_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( TransformFeedbackBufferBinding_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&TransformFeedbackBufferBinding_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( TransformFeedbackBufferBinding_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            TransformFeedbackBufferBinding_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&TransformFeedbackBufferBinding_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}