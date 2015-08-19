// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "stackedtranslateelement.pypp.hpp"

namespace bp = boost::python;

struct StackedTranslateElement_wrapper : osgAnimation::StackedTranslateElement, bp::wrapper< osgAnimation::StackedTranslateElement > {

    StackedTranslateElement_wrapper( )
    : osgAnimation::StackedTranslateElement( )
      , bp::wrapper< osgAnimation::StackedTranslateElement >(){
        // null constructor
    
    }

    StackedTranslateElement_wrapper(::std::string const & arg0, ::osg::Vec3 const & translate=osg::Vec3f(0.0f, 0.0f, 0.0f) )
    : osgAnimation::StackedTranslateElement( arg0, boost::ref(translate) )
      , bp::wrapper< osgAnimation::StackedTranslateElement >(){
        // constructor
    
    }

    StackedTranslateElement_wrapper(::osg::Vec3 const & translate )
    : osgAnimation::StackedTranslateElement( boost::ref(translate) )
      , bp::wrapper< osgAnimation::StackedTranslateElement >(){
        // constructor
    
    }

    virtual void applyToMatrix( ::osg::Matrix & matrix ) const  {
        if( bp::override func_applyToMatrix = this->get_override( "applyToMatrix" ) )
            func_applyToMatrix( boost::ref(matrix) );
        else{
            this->osgAnimation::StackedTranslateElement::applyToMatrix( boost::ref(matrix) );
        }
    }
    
    void default_applyToMatrix( ::osg::Matrix & matrix ) const  {
        osgAnimation::StackedTranslateElement::applyToMatrix( boost::ref(matrix) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::StackedTranslateElement::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::StackedTranslateElement::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgAnimation::StackedTranslateElement::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgAnimation::StackedTranslateElement::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgAnimation::StackedTranslateElement::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgAnimation::StackedTranslateElement::cloneType( );
    }

    virtual ::osg::Matrix getAsMatrix(  ) const  {
        if( bp::override func_getAsMatrix = this->get_override( "getAsMatrix" ) )
            return func_getAsMatrix(  );
        else{
            return this->osgAnimation::StackedTranslateElement::getAsMatrix(  );
        }
    }
    
    ::osg::Matrix default_getAsMatrix(  ) const  {
        return osgAnimation::StackedTranslateElement::getAsMatrix( );
    }

    virtual ::osgAnimation::Target * getOrCreateTarget(  ) {
        if( bp::override func_getOrCreateTarget = this->get_override( "getOrCreateTarget" ) )
            return func_getOrCreateTarget(  );
        else{
            return this->osgAnimation::StackedTranslateElement::getOrCreateTarget(  );
        }
    }
    
    ::osgAnimation::Target * default_getOrCreateTarget(  ) {
        return osgAnimation::StackedTranslateElement::getOrCreateTarget( );
    }

    virtual ::osgAnimation::Target * getTarget(  ) {
        if( bp::override func_getTarget = this->get_override( "getTarget" ) )
            return func_getTarget(  );
        else{
            return this->osgAnimation::StackedTranslateElement::getTarget(  );
        }
    }
    
    ::osgAnimation::Target * default_getTarget(  ) {
        return osgAnimation::StackedTranslateElement::getTarget( );
    }

    virtual ::osgAnimation::Target const * getTarget(  ) const  {
        if( bp::override func_getTarget = this->get_override( "getTarget" ) )
            return func_getTarget(  );
        else{
            return this->osgAnimation::StackedTranslateElement::getTarget(  );
        }
    }
    
    ::osgAnimation::Target const * default_getTarget(  ) const  {
        return osgAnimation::StackedTranslateElement::getTarget( );
    }

    virtual bool isIdentity(  ) const  {
        if( bp::override func_isIdentity = this->get_override( "isIdentity" ) )
            return func_isIdentity(  );
        else{
            return this->osgAnimation::StackedTranslateElement::isIdentity(  );
        }
    }
    
    bool default_isIdentity(  ) const  {
        return osgAnimation::StackedTranslateElement::isIdentity( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgAnimation::StackedTranslateElement::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgAnimation::StackedTranslateElement::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::StackedTranslateElement::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::StackedTranslateElement::libraryName( );
    }

    virtual void update( float t=0.0 ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( t );
        else{
            this->osgAnimation::StackedTranslateElement::update( t );
        }
    }
    
    void default_update( float t=0.0 ) {
        osgAnimation::StackedTranslateElement::update( t );
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

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Object::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Object::resizeGLObjectBuffers( arg0 );
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

void register_StackedTranslateElement_class(){

    { //::osgAnimation::StackedTranslateElement
        typedef bp::class_< StackedTranslateElement_wrapper, bp::bases< osgAnimation::StackedTransformElement >, osg::ref_ptr< StackedTranslateElement_wrapper >, boost::noncopyable > StackedTranslateElement_exposer_t;
        StackedTranslateElement_exposer_t StackedTranslateElement_exposer = StackedTranslateElement_exposer_t( "StackedTranslateElement", bp::init< >() );
        bp::scope StackedTranslateElement_scope( StackedTranslateElement_exposer );
        StackedTranslateElement_exposer.def( bp::init< std::string const &, bp::optional< osg::Vec3 const & > >(( bp::arg("arg0"), bp::arg("translate")=osg::Vec3f(0.0f, 0.0f, 0.0f) )) );
        bp::implicitly_convertible< std::string const &, osgAnimation::StackedTranslateElement >();
        StackedTranslateElement_exposer.def( bp::init< osg::Vec3 const & >(( bp::arg("translate") )) );
        bp::implicitly_convertible< osg::Vec3 const &, osgAnimation::StackedTranslateElement >();
        { //::osgAnimation::StackedTranslateElement::applyToMatrix
        
            typedef void ( ::osgAnimation::StackedTranslateElement::*applyToMatrix_function_type)( ::osg::Matrix & ) const;
            typedef void ( StackedTranslateElement_wrapper::*default_applyToMatrix_function_type)( ::osg::Matrix & ) const;
            
            StackedTranslateElement_exposer.def( 
                "applyToMatrix"
                , applyToMatrix_function_type(&::osgAnimation::StackedTranslateElement::applyToMatrix)
                , default_applyToMatrix_function_type(&StackedTranslateElement_wrapper::default_applyToMatrix)
                , ( bp::arg("matrix") ) );
        
        }
        { //::osgAnimation::StackedTranslateElement::className
        
            typedef char const * ( ::osgAnimation::StackedTranslateElement::*className_function_type)(  ) const;
            typedef char const * ( StackedTranslateElement_wrapper::*default_className_function_type)(  ) const;
            
            StackedTranslateElement_exposer.def( 
                "className"
                , className_function_type(&::osgAnimation::StackedTranslateElement::className)
                , default_className_function_type(&StackedTranslateElement_wrapper::default_className) );
        
        }
        { //::osgAnimation::StackedTranslateElement::clone
        
            typedef ::osg::Object * ( ::osgAnimation::StackedTranslateElement::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( StackedTranslateElement_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            StackedTranslateElement_exposer.def( 
                "clone"
                , clone_function_type(&::osgAnimation::StackedTranslateElement::clone)
                , default_clone_function_type(&StackedTranslateElement_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::StackedTranslateElement::cloneType
        
            typedef ::osg::Object * ( ::osgAnimation::StackedTranslateElement::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( StackedTranslateElement_wrapper::*default_cloneType_function_type)(  ) const;
            
            StackedTranslateElement_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgAnimation::StackedTranslateElement::cloneType)
                , default_cloneType_function_type(&StackedTranslateElement_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgAnimation::StackedTranslateElement::getAsMatrix
        
            typedef ::osg::Matrix ( ::osgAnimation::StackedTranslateElement::*getAsMatrix_function_type)(  ) const;
            typedef ::osg::Matrix ( StackedTranslateElement_wrapper::*default_getAsMatrix_function_type)(  ) const;
            
            StackedTranslateElement_exposer.def( 
                "getAsMatrix"
                , getAsMatrix_function_type(&::osgAnimation::StackedTranslateElement::getAsMatrix)
                , default_getAsMatrix_function_type(&StackedTranslateElement_wrapper::default_getAsMatrix) );
        
        }
        { //::osgAnimation::StackedTranslateElement::getOrCreateTarget
        
            typedef ::osgAnimation::Target * ( ::osgAnimation::StackedTranslateElement::*getOrCreateTarget_function_type)(  ) ;
            typedef ::osgAnimation::Target * ( StackedTranslateElement_wrapper::*default_getOrCreateTarget_function_type)(  ) ;
            
            StackedTranslateElement_exposer.def( 
                "getOrCreateTarget"
                , getOrCreateTarget_function_type(&::osgAnimation::StackedTranslateElement::getOrCreateTarget)
                , default_getOrCreateTarget_function_type(&StackedTranslateElement_wrapper::default_getOrCreateTarget)
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::StackedTranslateElement::getTarget
        
            typedef ::osgAnimation::Target * ( ::osgAnimation::StackedTranslateElement::*getTarget_function_type)(  ) ;
            typedef ::osgAnimation::Target * ( StackedTranslateElement_wrapper::*default_getTarget_function_type)(  ) ;
            
            StackedTranslateElement_exposer.def( 
                "getTarget"
                , getTarget_function_type(&::osgAnimation::StackedTranslateElement::getTarget)
                , default_getTarget_function_type(&StackedTranslateElement_wrapper::default_getTarget)
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::StackedTranslateElement::getTarget
        
            typedef ::osgAnimation::Target const * ( ::osgAnimation::StackedTranslateElement::*getTarget_function_type)(  ) const;
            typedef ::osgAnimation::Target const * ( StackedTranslateElement_wrapper::*default_getTarget_function_type)(  ) const;
            
            StackedTranslateElement_exposer.def( 
                "getTarget"
                , getTarget_function_type(&::osgAnimation::StackedTranslateElement::getTarget)
                , default_getTarget_function_type(&StackedTranslateElement_wrapper::default_getTarget)
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::StackedTranslateElement::getTranslate
        
            typedef ::osg::Vec3 const & ( ::osgAnimation::StackedTranslateElement::*getTranslate_function_type)(  ) const;
            
            StackedTranslateElement_exposer.def( 
                "getTranslate"
                , getTranslate_function_type( &::osgAnimation::StackedTranslateElement::getTranslate )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::StackedTranslateElement::isIdentity
        
            typedef bool ( ::osgAnimation::StackedTranslateElement::*isIdentity_function_type)(  ) const;
            typedef bool ( StackedTranslateElement_wrapper::*default_isIdentity_function_type)(  ) const;
            
            StackedTranslateElement_exposer.def( 
                "isIdentity"
                , isIdentity_function_type(&::osgAnimation::StackedTranslateElement::isIdentity)
                , default_isIdentity_function_type(&StackedTranslateElement_wrapper::default_isIdentity) );
        
        }
        { //::osgAnimation::StackedTranslateElement::isSameKindAs
        
            typedef bool ( ::osgAnimation::StackedTranslateElement::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( StackedTranslateElement_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            StackedTranslateElement_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgAnimation::StackedTranslateElement::isSameKindAs)
                , default_isSameKindAs_function_type(&StackedTranslateElement_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgAnimation::StackedTranslateElement::libraryName
        
            typedef char const * ( ::osgAnimation::StackedTranslateElement::*libraryName_function_type)(  ) const;
            typedef char const * ( StackedTranslateElement_wrapper::*default_libraryName_function_type)(  ) const;
            
            StackedTranslateElement_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgAnimation::StackedTranslateElement::libraryName)
                , default_libraryName_function_type(&StackedTranslateElement_wrapper::default_libraryName) );
        
        }
        { //::osgAnimation::StackedTranslateElement::setTranslate
        
            typedef void ( ::osgAnimation::StackedTranslateElement::*setTranslate_function_type)( ::osg::Vec3 const & ) ;
            
            StackedTranslateElement_exposer.def( 
                "setTranslate"
                , setTranslate_function_type( &::osgAnimation::StackedTranslateElement::setTranslate )
                , ( bp::arg("arg0") ) );
        
        }
        { //::osgAnimation::StackedTranslateElement::update
        
            typedef void ( ::osgAnimation::StackedTranslateElement::*update_function_type)( float ) ;
            typedef void ( StackedTranslateElement_wrapper::*default_update_function_type)( float ) ;
            
            StackedTranslateElement_exposer.def( 
                "update"
                , update_function_type(&::osgAnimation::StackedTranslateElement::update)
                , default_update_function_type(&StackedTranslateElement_wrapper::default_update)
                , ( bp::arg("t")=0.0 ) );
        
        }
    }

}