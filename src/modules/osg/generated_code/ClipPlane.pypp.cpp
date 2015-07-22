// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "clipplane.pypp.hpp"

namespace bp = boost::python;

struct ClipPlane_wrapper : osg::ClipPlane, bp::wrapper< osg::ClipPlane > {

    ClipPlane_wrapper( )
    : osg::ClipPlane( )
      , bp::wrapper< osg::ClipPlane >(){
        // null constructor
    
    }

    ClipPlane_wrapper(unsigned int no )
    : osg::ClipPlane( no )
      , bp::wrapper< osg::ClipPlane >(){
        // constructor
    
    }

    ClipPlane_wrapper(unsigned int no, ::osg::Vec4d const & plane )
    : osg::ClipPlane( no, boost::ref(plane) )
      , bp::wrapper< osg::ClipPlane >(){
        // constructor
    
    }

    ClipPlane_wrapper(unsigned int no, ::osg::Plane const & plane )
    : osg::ClipPlane( no, boost::ref(plane) )
      , bp::wrapper< osg::ClipPlane >(){
        // constructor
    
    }

    ClipPlane_wrapper(unsigned int no, double a, double b, double c, double d )
    : osg::ClipPlane( no, a, b, c, d )
      , bp::wrapper< osg::ClipPlane >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::ClipPlane::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::ClipPlane::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::ClipPlane::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::ClipPlane::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::ClipPlane::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::ClipPlane::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::ClipPlane::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::ClipPlane::cloneType( );
    }

    virtual unsigned int getMember(  ) const  {
        if( bp::override func_getMember = this->get_override( "getMember" ) )
            return func_getMember(  );
        else{
            return this->osg::ClipPlane::getMember(  );
        }
    }
    
    unsigned int default_getMember(  ) const  {
        return osg::ClipPlane::getMember( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::ClipPlane::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::ClipPlane::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::ClipPlane::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::ClipPlane::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::ClipPlane::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::ClipPlane::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::ClipPlane::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::ClipPlane::libraryName( );
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

void register_ClipPlane_class(){

    { //::osg::ClipPlane
        typedef bp::class_< ClipPlane_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ClipPlane_wrapper >, boost::noncopyable > ClipPlane_exposer_t;
        ClipPlane_exposer_t ClipPlane_exposer = ClipPlane_exposer_t( "ClipPlane", "\n Encapsulates OpenGL glClipPlane().\n", bp::no_init );
        bp::scope ClipPlane_scope( ClipPlane_exposer );
        ClipPlane_exposer.def( bp::init< >("\n Encapsulates OpenGL glClipPlane().\n") );
        ClipPlane_exposer.def( bp::init< unsigned int >(( bp::arg("no") )) );
        bp::implicitly_convertible< unsigned int, osg::ClipPlane >();
        ClipPlane_exposer.def( bp::init< unsigned int, osg::Vec4d const & >(( bp::arg("no"), bp::arg("plane") )) );
        ClipPlane_exposer.def( bp::init< unsigned int, osg::Plane const & >(( bp::arg("no"), bp::arg("plane") )) );
        ClipPlane_exposer.def( bp::init< unsigned int, double, double, double, double >(( bp::arg("no"), bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("d") )) );
        { //::osg::ClipPlane::apply
        
            typedef void ( ::osg::ClipPlane::*apply_function_type)( ::osg::State & ) const;
            typedef void ( ClipPlane_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            ClipPlane_exposer.def( 
                "apply"
                , apply_function_type(&::osg::ClipPlane::apply)
                , default_apply_function_type(&ClipPlane_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::ClipPlane::className
        
            typedef char const * ( ::osg::ClipPlane::*className_function_type)(  ) const;
            typedef char const * ( ClipPlane_wrapper::*default_className_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "className"
                , className_function_type(&::osg::ClipPlane::className)
                , default_className_function_type(&ClipPlane_wrapper::default_className) );
        
        }
        { //::osg::ClipPlane::clone
        
            typedef ::osg::Object * ( ::osg::ClipPlane::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( ClipPlane_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            ClipPlane_exposer.def( 
                "clone"
                , clone_function_type(&::osg::ClipPlane::clone)
                , default_clone_function_type(&ClipPlane_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::ClipPlane::cloneType
        
            typedef ::osg::Object * ( ::osg::ClipPlane::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( ClipPlane_wrapper::*default_cloneType_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::ClipPlane::cloneType)
                , default_cloneType_function_type(&ClipPlane_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::ClipPlane::getClipPlane
        
            typedef ::osg::Vec4d const & ( ::osg::ClipPlane::*getClipPlane_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "getClipPlane"
                , getClipPlane_function_type( &::osg::ClipPlane::getClipPlane )
                , bp::return_internal_reference< >()
                , " Gets the clip plane as a Vec4d." );
        
        }
        { //::osg::ClipPlane::getClipPlaneNum
        
            typedef unsigned int ( ::osg::ClipPlane::*getClipPlaneNum_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "getClipPlaneNum"
                , getClipPlaneNum_function_type( &::osg::ClipPlane::getClipPlaneNum )
                , " Gets the clip plane number." );
        
        }
        { //::osg::ClipPlane::getMember
        
            typedef unsigned int ( ::osg::ClipPlane::*getMember_function_type)(  ) const;
            typedef unsigned int ( ClipPlane_wrapper::*default_getMember_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::ClipPlane::getMember)
                , default_getMember_function_type(&ClipPlane_wrapper::default_getMember) );
        
        }
        { //::osg::ClipPlane::getModeUsage
        
            typedef bool ( ::osg::ClipPlane::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( ClipPlane_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            ClipPlane_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::ClipPlane::getModeUsage)
                , default_getModeUsage_function_type(&ClipPlane_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::ClipPlane::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::ClipPlane::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( ClipPlane_wrapper::*default_getType_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "getType"
                , getType_function_type(&::osg::ClipPlane::getType)
                , default_getType_function_type(&ClipPlane_wrapper::default_getType) );
        
        }
        { //::osg::ClipPlane::isSameKindAs
        
            typedef bool ( ::osg::ClipPlane::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( ClipPlane_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            ClipPlane_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::ClipPlane::isSameKindAs)
                , default_isSameKindAs_function_type(&ClipPlane_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::ClipPlane::libraryName
        
            typedef char const * ( ::osg::ClipPlane::*libraryName_function_type)(  ) const;
            typedef char const * ( ClipPlane_wrapper::*default_libraryName_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::ClipPlane::libraryName)
                , default_libraryName_function_type(&ClipPlane_wrapper::default_libraryName) );
        
        }
        { //::osg::ClipPlane::setClipPlane
        
            typedef void ( ::osg::ClipPlane::*setClipPlane_function_type)( ::osg::Plane const & ) ;
            
            ClipPlane_exposer.def( 
                "setClipPlane"
                , setClipPlane_function_type( &::osg::ClipPlane::setClipPlane )
                , ( bp::arg("plane") )
                , " Set the clip plane with the given Plane." );
        
        }
        { //::osg::ClipPlane::setClipPlane
        
            typedef void ( ::osg::ClipPlane::*setClipPlane_function_type)( double,double,double,double ) ;
            
            ClipPlane_exposer.def( 
                "setClipPlane"
                , setClipPlane_function_type( &::osg::ClipPlane::setClipPlane )
                , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("d") )
                , " Defines the plane as [ a b c d ]." );
        
        }
        { //::osg::ClipPlane::setClipPlane
        
            typedef void ( ::osg::ClipPlane::*setClipPlane_function_type)( ::osg::Vec4d const & ) ;
            
            ClipPlane_exposer.def( 
                "setClipPlane"
                , setClipPlane_function_type( &::osg::ClipPlane::setClipPlane )
                , ( bp::arg("plane") )
                , " Set the clip plane with the given Vec4." );
        
        }
        { //::osg::ClipPlane::setClipPlaneNum
        
            typedef void ( ::osg::ClipPlane::*setClipPlaneNum_function_type)( unsigned int ) ;
            
            ClipPlane_exposer.def( 
                "setClipPlaneNum"
                , setClipPlaneNum_function_type( &::osg::ClipPlane::setClipPlaneNum )
                , ( bp::arg("num") )
                , " Sets the clip plane number." );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( ClipPlane_wrapper::*default_asTexture_function_type)(  ) ;
            
            ClipPlane_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&ClipPlane_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( ClipPlane_wrapper::*default_asTexture_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&ClipPlane_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( ClipPlane_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            ClipPlane_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&ClipPlane_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( ClipPlane_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            ClipPlane_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&ClipPlane_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( ClipPlane_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            ClipPlane_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&ClipPlane_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( ClipPlane_wrapper::*default_getUserData_function_type)(  ) ;
            
            ClipPlane_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&ClipPlane_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( ClipPlane_wrapper::*default_getUserData_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&ClipPlane_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( ClipPlane_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            ClipPlane_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&ClipPlane_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( ClipPlane_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            ClipPlane_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&ClipPlane_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( ClipPlane_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            ClipPlane_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&ClipPlane_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            ClipPlane_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( ClipPlane_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            ClipPlane_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&ClipPlane_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( ClipPlane_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            ClipPlane_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&ClipPlane_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}
