// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgvolume.h"
#include "wrap_referenced.h"
#include "sampledensitywhenmovingproperty.pypp.hpp"

namespace bp = boost::python;

struct SampleDensityWhenMovingProperty_wrapper : osgVolume::SampleDensityWhenMovingProperty, bp::wrapper< osgVolume::SampleDensityWhenMovingProperty > {

    SampleDensityWhenMovingProperty_wrapper(float value=1.0e+0f )
    : osgVolume::SampleDensityWhenMovingProperty( value )
      , bp::wrapper< osgVolume::SampleDensityWhenMovingProperty >(){
        // constructor
    
    }

    virtual void accept( ::osgVolume::PropertyVisitor & pv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pv) );
        else{
            this->osgVolume::SampleDensityWhenMovingProperty::accept( boost::ref(pv) );
        }
    }
    
    void default_accept( ::osgVolume::PropertyVisitor & pv ) {
        osgVolume::SampleDensityWhenMovingProperty::accept( boost::ref(pv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgVolume::SampleDensityWhenMovingProperty::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgVolume::SampleDensityWhenMovingProperty::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgVolume::SampleDensityWhenMovingProperty::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgVolume::SampleDensityWhenMovingProperty::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgVolume::SampleDensityWhenMovingProperty::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgVolume::SampleDensityWhenMovingProperty::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgVolume::SampleDensityWhenMovingProperty::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgVolume::SampleDensityWhenMovingProperty::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgVolume::SampleDensityWhenMovingProperty::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgVolume::SampleDensityWhenMovingProperty::libraryName( );
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

    virtual void setValue( float v ) {
        if( bp::override func_setValue = this->get_override( "setValue" ) )
            func_setValue( v );
        else{
            this->osgVolume::ScalarProperty::setValue( v );
        }
    }
    
    void default_setValue( float v ) {
        osgVolume::ScalarProperty::setValue( v );
    }

};

void register_SampleDensityWhenMovingProperty_class(){

    { //::osgVolume::SampleDensityWhenMovingProperty
        typedef bp::class_< SampleDensityWhenMovingProperty_wrapper, bp::bases< osgVolume::ScalarProperty >, osg::ref_ptr< SampleDensityWhenMovingProperty_wrapper >, boost::noncopyable > SampleDensityWhenMovingProperty_exposer_t;
        SampleDensityWhenMovingProperty_exposer_t SampleDensityWhenMovingProperty_exposer = SampleDensityWhenMovingProperty_exposer_t( "SampleDensityWhenMovingProperty", "\n Sample density to use when the volume is moving relative to the eye point.\n", bp::no_init );
        bp::scope SampleDensityWhenMovingProperty_scope( SampleDensityWhenMovingProperty_exposer );
        SampleDensityWhenMovingProperty_exposer.def( bp::init< bp::optional< float > >(( bp::arg("value")=1.0e+0f ), "\n Sample density to use when the volume is moving relative to the eye point.\n") );
        bp::implicitly_convertible< float, osgVolume::SampleDensityWhenMovingProperty >();
        { //::osgVolume::SampleDensityWhenMovingProperty::accept
        
            typedef void ( ::osgVolume::SampleDensityWhenMovingProperty::*accept_function_type)( ::osgVolume::PropertyVisitor & ) ;
            typedef void ( SampleDensityWhenMovingProperty_wrapper::*default_accept_function_type)( ::osgVolume::PropertyVisitor & ) ;
            
            SampleDensityWhenMovingProperty_exposer.def( 
                "accept"
                , accept_function_type(&::osgVolume::SampleDensityWhenMovingProperty::accept)
                , default_accept_function_type(&SampleDensityWhenMovingProperty_wrapper::default_accept)
                , ( bp::arg("pv") ) );
        
        }
        { //::osgVolume::SampleDensityWhenMovingProperty::className
        
            typedef char const * ( ::osgVolume::SampleDensityWhenMovingProperty::*className_function_type)(  ) const;
            typedef char const * ( SampleDensityWhenMovingProperty_wrapper::*default_className_function_type)(  ) const;
            
            SampleDensityWhenMovingProperty_exposer.def( 
                "className"
                , className_function_type(&::osgVolume::SampleDensityWhenMovingProperty::className)
                , default_className_function_type(&SampleDensityWhenMovingProperty_wrapper::default_className) );
        
        }
        { //::osgVolume::SampleDensityWhenMovingProperty::clone
        
            typedef ::osg::Object * ( ::osgVolume::SampleDensityWhenMovingProperty::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( SampleDensityWhenMovingProperty_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            SampleDensityWhenMovingProperty_exposer.def( 
                "clone"
                , clone_function_type(&::osgVolume::SampleDensityWhenMovingProperty::clone)
                , default_clone_function_type(&SampleDensityWhenMovingProperty_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgVolume::SampleDensityWhenMovingProperty::cloneType
        
            typedef ::osg::Object * ( ::osgVolume::SampleDensityWhenMovingProperty::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( SampleDensityWhenMovingProperty_wrapper::*default_cloneType_function_type)(  ) const;
            
            SampleDensityWhenMovingProperty_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osgVolume::SampleDensityWhenMovingProperty::cloneType)
                , default_cloneType_function_type(&SampleDensityWhenMovingProperty_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osgVolume::SampleDensityWhenMovingProperty::isSameKindAs
        
            typedef bool ( ::osgVolume::SampleDensityWhenMovingProperty::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( SampleDensityWhenMovingProperty_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            SampleDensityWhenMovingProperty_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osgVolume::SampleDensityWhenMovingProperty::isSameKindAs)
                , default_isSameKindAs_function_type(&SampleDensityWhenMovingProperty_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osgVolume::SampleDensityWhenMovingProperty::libraryName
        
            typedef char const * ( ::osgVolume::SampleDensityWhenMovingProperty::*libraryName_function_type)(  ) const;
            typedef char const * ( SampleDensityWhenMovingProperty_wrapper::*default_libraryName_function_type)(  ) const;
            
            SampleDensityWhenMovingProperty_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgVolume::SampleDensityWhenMovingProperty::libraryName)
                , default_libraryName_function_type(&SampleDensityWhenMovingProperty_wrapper::default_libraryName) );
        
        }
        { //::osgVolume::ScalarProperty::setValue
        
            typedef void ( ::osgVolume::ScalarProperty::*setValue_function_type)( float ) ;
            typedef void ( SampleDensityWhenMovingProperty_wrapper::*default_setValue_function_type)( float ) ;
            
            SampleDensityWhenMovingProperty_exposer.def( 
                "setValue"
                , setValue_function_type(&::osgVolume::ScalarProperty::setValue)
                , default_setValue_function_type(&SampleDensityWhenMovingProperty_wrapper::default_setValue)
                , ( bp::arg("v") ) );
        
        }
    }

}