// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "cone.pypp.hpp"

namespace bp = boost::python;

struct Cone_wrapper : osg::Cone, bp::wrapper< osg::Cone > {

    Cone_wrapper( )
    : osg::Cone( )
      , bp::wrapper< osg::Cone >(){
        // null constructor
    
    }

    Cone_wrapper(::osg::Vec3 const & center, float radius, float height )
    : osg::Cone( boost::ref(center), radius, height )
      , bp::wrapper< osg::Cone >(){
        // constructor
    
    }

    virtual void accept( ::osg::ShapeVisitor & sv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(sv) );
        else{
            this->osg::Cone::accept( boost::ref(sv) );
        }
    }
    
    void default_accept( ::osg::ShapeVisitor & sv ) {
        osg::Cone::accept( boost::ref(sv) );
    }

    virtual void accept( ::osg::ConstShapeVisitor & csv ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(csv) );
        else{
            this->osg::Cone::accept( boost::ref(csv) );
        }
    }
    
    void default_accept( ::osg::ConstShapeVisitor & csv ) const  {
        osg::Cone::accept( boost::ref(csv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Cone::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Cone::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Cone::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Cone::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Cone::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Cone::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Cone::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Cone::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Cone::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Cone::libraryName( );
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

void register_Cone_class(){

    bp::class_< Cone_wrapper, bp::bases< osg::Shape >, osg::ref_ptr< ::osg::Cone >, boost::noncopyable >( "Cone", bp::no_init )    
        .def( bp::init< >() )    
        .def( bp::init< osg::Vec3 const &, float, float >(( bp::arg("center"), bp::arg("radius"), bp::arg("height") )) )    
        .def( 
            "accept"
            , (void ( ::osg::Cone::* )( ::osg::ShapeVisitor & ))(&::osg::Cone::accept)
            , (void ( Cone_wrapper::* )( ::osg::ShapeVisitor & ))(&Cone_wrapper::default_accept)
            , ( bp::arg("sv") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Cone::* )( ::osg::ConstShapeVisitor & )const)(&::osg::Cone::accept)
            , (void ( Cone_wrapper::* )( ::osg::ConstShapeVisitor & )const)(&Cone_wrapper::default_accept)
            , ( bp::arg("csv") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Cone::* )(  )const)(&::osg::Cone::className)
            , (char const * ( Cone_wrapper::* )(  )const)(&Cone_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Cone::* )( ::osg::CopyOp const & )const)(&::osg::Cone::clone)
            , (::osg::Object * ( Cone_wrapper::* )( ::osg::CopyOp const & )const)(&Cone_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Cone::* )(  )const)(&::osg::Cone::cloneType)
            , (::osg::Object * ( Cone_wrapper::* )(  )const)(&Cone_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeRotationMatrix"
            , (::osg::Matrix ( ::osg::Cone::* )(  )const)( &::osg::Cone::computeRotationMatrix ) )    
        .def( 
            "getBaseOffset"
            , (float ( ::osg::Cone::* )(  )const)( &::osg::Cone::getBaseOffset ) )    
        .def( 
            "getBaseOffsetFactor"
            , (float ( ::osg::Cone::* )(  )const)( &::osg::Cone::getBaseOffsetFactor ) )    
        .def( 
            "getCenter"
            , (::osg::Vec3 const & ( ::osg::Cone::* )(  )const)( &::osg::Cone::getCenter )
            , bp::return_internal_reference< >() )    
        .def( 
            "getHeight"
            , (float ( ::osg::Cone::* )(  )const)( &::osg::Cone::getHeight ) )    
        .def( 
            "getRadius"
            , (float ( ::osg::Cone::* )(  )const)( &::osg::Cone::getRadius ) )    
        .def( 
            "getRotation"
            , (::osg::Quat const & ( ::osg::Cone::* )(  )const)( &::osg::Cone::getRotation )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Cone::* )( ::osg::Object const * )const)(&::osg::Cone::isSameKindAs)
            , (bool ( Cone_wrapper::* )( ::osg::Object const * )const)(&Cone_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Cone::* )(  )const)(&::osg::Cone::libraryName)
            , (char const * ( Cone_wrapper::* )(  )const)(&Cone_wrapper::default_libraryName) )    
        .def( 
            "set"
            , (void ( ::osg::Cone::* )( ::osg::Vec3 const &,float,float ))( &::osg::Cone::set )
            , ( bp::arg("center"), bp::arg("radius"), bp::arg("height") ) )    
        .def( 
            "setCenter"
            , (void ( ::osg::Cone::* )( ::osg::Vec3 const & ))( &::osg::Cone::setCenter )
            , ( bp::arg("center") ) )    
        .def( 
            "setHeight"
            , (void ( ::osg::Cone::* )( float ))( &::osg::Cone::setHeight )
            , ( bp::arg("height") ) )    
        .def( 
            "setRadius"
            , (void ( ::osg::Cone::* )( float ))( &::osg::Cone::setRadius )
            , ( bp::arg("radius") ) )    
        .def( 
            "setRotation"
            , (void ( ::osg::Cone::* )( ::osg::Quat const & ))( &::osg::Cone::setRotation )
            , ( bp::arg("quat") ) )    
        .def( 
            "valid"
            , (bool ( ::osg::Cone::* )(  )const)( &::osg::Cone::valid ) )    
        .def( 
            "zeroRotation"
            , (bool ( ::osg::Cone::* )(  )const)( &::osg::Cone::zeroRotation ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( Cone_wrapper::* )(  ))(&Cone_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( Cone_wrapper::* )(  ))(&Cone_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( Cone_wrapper::* )(  )const)(&Cone_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Object::* )( unsigned int ))(&::osg::Object::resizeGLObjectBuffers)
            , (void ( Cone_wrapper::* )( unsigned int ))(&Cone_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( Cone_wrapper::* )( ::std::string const & ))(&Cone_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( Cone_wrapper::* )( bool ))(&Cone_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( Cone_wrapper::* )( ::osg::Referenced * ))(&Cone_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}
