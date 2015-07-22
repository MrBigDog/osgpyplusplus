// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "tessellationhints.pypp.hpp"

namespace bp = boost::python;

struct TessellationHints_wrapper : osg::TessellationHints, bp::wrapper< osg::TessellationHints > {

    TessellationHints_wrapper( )
    : osg::TessellationHints( )
      , bp::wrapper< osg::TessellationHints >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::TessellationHints::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::TessellationHints::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::TessellationHints::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::TessellationHints::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::TessellationHints::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::TessellationHints::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::TessellationHints::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::TessellationHints::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::TessellationHints::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::TessellationHints::libraryName( );
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

void register_TessellationHints_class(){

    { //::osg::TessellationHints
        typedef bp::class_< TessellationHints_wrapper, bp::bases< osg::Object >, osg::ref_ptr< TessellationHints_wrapper >, boost::noncopyable > TessellationHints_exposer_t;
        TessellationHints_exposer_t TessellationHints_exposer = TessellationHints_exposer_t( "TessellationHints", "\n Describe several hints that can be passed to a Tessellator (like the one used\n  by  ShapeDrawable) as a mean to try to influence the way it works.\n", bp::no_init );
        bp::scope TessellationHints_scope( TessellationHints_exposer );
        bp::enum_< osg::TessellationHints::TessellationMode>("TessellationMode")
            .value("USE_SHAPE_DEFAULTS", osg::TessellationHints::USE_SHAPE_DEFAULTS)
            .value("USE_TARGET_NUM_FACES", osg::TessellationHints::USE_TARGET_NUM_FACES)
            .export_values()
            ;
        TessellationHints_exposer.def( bp::init< >("\n Describe several hints that can be passed to a Tessellator (like the one used\n  by  ShapeDrawable) as a mean to try to influence the way it works.\n") );
        { //::osg::TessellationHints::className
        
            typedef char const * ( ::osg::TessellationHints::*className_function_type)(  ) const;
            typedef char const * ( TessellationHints_wrapper::*default_className_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "className"
                , className_function_type(&::osg::TessellationHints::className)
                , default_className_function_type(&TessellationHints_wrapper::default_className) );
        
        }
        { //::osg::TessellationHints::clone
        
            typedef ::osg::Object * ( ::osg::TessellationHints::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( TessellationHints_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            TessellationHints_exposer.def( 
                "clone"
                , clone_function_type(&::osg::TessellationHints::clone)
                , default_clone_function_type(&TessellationHints_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TessellationHints::cloneType
        
            typedef ::osg::Object * ( ::osg::TessellationHints::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( TessellationHints_wrapper::*default_cloneType_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::TessellationHints::cloneType)
                , default_cloneType_function_type(&TessellationHints_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TessellationHints::getCreateBackFace
        
            typedef bool ( ::osg::TessellationHints::*getCreateBackFace_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getCreateBackFace"
                , getCreateBackFace_function_type( &::osg::TessellationHints::getCreateBackFace ) );
        
        }
        { //::osg::TessellationHints::getCreateBody
        
            typedef bool ( ::osg::TessellationHints::*getCreateBody_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getCreateBody"
                , getCreateBody_function_type( &::osg::TessellationHints::getCreateBody ) );
        
        }
        { //::osg::TessellationHints::getCreateBottom
        
            typedef bool ( ::osg::TessellationHints::*getCreateBottom_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getCreateBottom"
                , getCreateBottom_function_type( &::osg::TessellationHints::getCreateBottom ) );
        
        }
        { //::osg::TessellationHints::getCreateFrontFace
        
            typedef bool ( ::osg::TessellationHints::*getCreateFrontFace_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getCreateFrontFace"
                , getCreateFrontFace_function_type( &::osg::TessellationHints::getCreateFrontFace ) );
        
        }
        { //::osg::TessellationHints::getCreateNormals
        
            typedef bool ( ::osg::TessellationHints::*getCreateNormals_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getCreateNormals"
                , getCreateNormals_function_type( &::osg::TessellationHints::getCreateNormals ) );
        
        }
        { //::osg::TessellationHints::getCreateTextureCoords
        
            typedef bool ( ::osg::TessellationHints::*getCreateTextureCoords_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getCreateTextureCoords"
                , getCreateTextureCoords_function_type( &::osg::TessellationHints::getCreateTextureCoords ) );
        
        }
        { //::osg::TessellationHints::getCreateTop
        
            typedef bool ( ::osg::TessellationHints::*getCreateTop_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getCreateTop"
                , getCreateTop_function_type( &::osg::TessellationHints::getCreateTop ) );
        
        }
        { //::osg::TessellationHints::getDetailRatio
        
            typedef float ( ::osg::TessellationHints::*getDetailRatio_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getDetailRatio"
                , getDetailRatio_function_type( &::osg::TessellationHints::getDetailRatio ) );
        
        }
        { //::osg::TessellationHints::getTargetNumFaces
        
            typedef unsigned int ( ::osg::TessellationHints::*getTargetNumFaces_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getTargetNumFaces"
                , getTargetNumFaces_function_type( &::osg::TessellationHints::getTargetNumFaces ) );
        
        }
        { //::osg::TessellationHints::getTessellationMode
        
            typedef ::osg::TessellationHints::TessellationMode ( ::osg::TessellationHints::*getTessellationMode_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getTessellationMode"
                , getTessellationMode_function_type( &::osg::TessellationHints::getTessellationMode ) );
        
        }
        { //::osg::TessellationHints::isSameKindAs
        
            typedef bool ( ::osg::TessellationHints::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( TessellationHints_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            TessellationHints_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::TessellationHints::isSameKindAs)
                , default_isSameKindAs_function_type(&TessellationHints_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::TessellationHints::libraryName
        
            typedef char const * ( ::osg::TessellationHints::*libraryName_function_type)(  ) const;
            typedef char const * ( TessellationHints_wrapper::*default_libraryName_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::TessellationHints::libraryName)
                , default_libraryName_function_type(&TessellationHints_wrapper::default_libraryName) );
        
        }
        { //::osg::TessellationHints::setCreateBackFace
        
            typedef void ( ::osg::TessellationHints::*setCreateBackFace_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setCreateBackFace"
                , setCreateBackFace_function_type( &::osg::TessellationHints::setCreateBackFace )
                , ( bp::arg("on") ) );
        
        }
        { //::osg::TessellationHints::setCreateBody
        
            typedef void ( ::osg::TessellationHints::*setCreateBody_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setCreateBody"
                , setCreateBody_function_type( &::osg::TessellationHints::setCreateBody )
                , ( bp::arg("on") ) );
        
        }
        { //::osg::TessellationHints::setCreateBottom
        
            typedef void ( ::osg::TessellationHints::*setCreateBottom_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setCreateBottom"
                , setCreateBottom_function_type( &::osg::TessellationHints::setCreateBottom )
                , ( bp::arg("on") ) );
        
        }
        { //::osg::TessellationHints::setCreateFrontFace
        
            typedef void ( ::osg::TessellationHints::*setCreateFrontFace_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setCreateFrontFace"
                , setCreateFrontFace_function_type( &::osg::TessellationHints::setCreateFrontFace )
                , ( bp::arg("on") ) );
        
        }
        { //::osg::TessellationHints::setCreateNormals
        
            typedef void ( ::osg::TessellationHints::*setCreateNormals_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setCreateNormals"
                , setCreateNormals_function_type( &::osg::TessellationHints::setCreateNormals )
                , ( bp::arg("on") ) );
        
        }
        { //::osg::TessellationHints::setCreateTextureCoords
        
            typedef void ( ::osg::TessellationHints::*setCreateTextureCoords_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setCreateTextureCoords"
                , setCreateTextureCoords_function_type( &::osg::TessellationHints::setCreateTextureCoords )
                , ( bp::arg("on") ) );
        
        }
        { //::osg::TessellationHints::setCreateTop
        
            typedef void ( ::osg::TessellationHints::*setCreateTop_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setCreateTop"
                , setCreateTop_function_type( &::osg::TessellationHints::setCreateTop )
                , ( bp::arg("on") ) );
        
        }
        { //::osg::TessellationHints::setDetailRatio
        
            typedef void ( ::osg::TessellationHints::*setDetailRatio_function_type)( float ) ;
            
            TessellationHints_exposer.def( 
                "setDetailRatio"
                , setDetailRatio_function_type( &::osg::TessellationHints::setDetailRatio )
                , ( bp::arg("ratio") ) );
        
        }
        { //::osg::TessellationHints::setTargetNumFaces
        
            typedef void ( ::osg::TessellationHints::*setTargetNumFaces_function_type)( unsigned int ) ;
            
            TessellationHints_exposer.def( 
                "setTargetNumFaces"
                , setTargetNumFaces_function_type( &::osg::TessellationHints::setTargetNumFaces )
                , ( bp::arg("target") ) );
        
        }
        { //::osg::TessellationHints::setTessellationMode
        
            typedef void ( ::osg::TessellationHints::*setTessellationMode_function_type)( ::osg::TessellationHints::TessellationMode ) ;
            
            TessellationHints_exposer.def( 
                "setTessellationMode"
                , setTessellationMode_function_type( &::osg::TessellationHints::setTessellationMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( TessellationHints_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            TessellationHints_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&TessellationHints_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( TessellationHints_wrapper::*default_getUserData_function_type)(  ) ;
            
            TessellationHints_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TessellationHints_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( TessellationHints_wrapper::*default_getUserData_function_type)(  ) const;
            
            TessellationHints_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TessellationHints_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::resizeGLObjectBuffers
        
            typedef void ( ::osg::Object::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( TessellationHints_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            TessellationHints_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Object::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&TessellationHints_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( TessellationHints_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            TessellationHints_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&TessellationHints_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            TessellationHints_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( TessellationHints_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            TessellationHints_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&TessellationHints_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( TessellationHints_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            TessellationHints_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&TessellationHints_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}
