// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "lod.pypp.hpp"

namespace bp = boost::python;

struct LOD_wrapper : osg::LOD, bp::wrapper< osg::LOD > {

    LOD_wrapper( )
    : osg::LOD( )
      , bp::wrapper< osg::LOD >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::LOD::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::LOD::accept( boost::ref(nv) );
    }

    virtual bool addChild( ::osg::Node * child ) {
        if( bp::override func_addChild = this->get_override( "addChild" ) )
            return func_addChild( boost::python::ptr(child) );
        else{
            return this->osg::LOD::addChild( boost::python::ptr(child) );
        }
    }
    
    bool default_addChild( ::osg::Node * child ) {
        return osg::LOD::addChild( boost::python::ptr(child) );
    }

    virtual bool addChild( ::osg::Node * child, float min, float max ) {
        if( bp::override func_addChild = this->get_override( "addChild" ) )
            return func_addChild( boost::python::ptr(child), min, max );
        else{
            return this->osg::LOD::addChild( boost::python::ptr(child), min, max );
        }
    }
    
    bool default_addChild( ::osg::Node * child, float min, float max ) {
        return osg::LOD::addChild( boost::python::ptr(child), min, max );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::LOD::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::LOD::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::LOD::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::LOD::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::LOD::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::LOD::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::LOD::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::LOD::computeBound( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::LOD::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::LOD::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::LOD::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::LOD::libraryName( );
    }

    virtual bool removeChildren( unsigned int pos, unsigned int numChildrenToRemove=1 ) {
        if( bp::override func_removeChildren = this->get_override( "removeChildren" ) )
            return func_removeChildren( pos, numChildrenToRemove );
        else{
            return this->osg::LOD::removeChildren( pos, numChildrenToRemove );
        }
    }
    
    bool default_removeChildren( unsigned int pos, unsigned int numChildrenToRemove=1 ) {
        return osg::LOD::removeChildren( pos, numChildrenToRemove );
    }

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osg::LOD::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osg::LOD::traverse( boost::ref(nv) );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Group::asGroup( );
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

    virtual bool insertChild( unsigned int index, ::osg::Node * child ) {
        if( bp::override func_insertChild = this->get_override( "insertChild" ) )
            return func_insertChild( index, boost::python::ptr(child) );
        else{
            return this->osg::Group::insertChild( index, boost::python::ptr(child) );
        }
    }
    
    bool default_insertChild( unsigned int index, ::osg::Node * child ) {
        return osg::Group::insertChild( index, boost::python::ptr(child) );
    }

    virtual bool replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        if( bp::override func_replaceChild = this->get_override( "replaceChild" ) )
            return func_replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        else{
            return this->osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        }
    }
    
    bool default_replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        return osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Group::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Group::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setChild( unsigned int i, ::osg::Node * node ) {
        if( bp::override func_setChild = this->get_override( "setChild" ) )
            return func_setChild( i, boost::python::ptr(node) );
        else{
            return this->osg::Group::setChild( i, boost::python::ptr(node) );
        }
    }
    
    bool default_setChild( unsigned int i, ::osg::Node * node ) {
        return osg::Group::setChild( i, boost::python::ptr(node) );
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
            this->osg::Group::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Group::setThreadSafeRefUnref( threadSafe );
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

void register_LOD_class(){

    { //::osg::LOD
        typedef bp::class_< LOD_wrapper, bp::bases< osg::Group >, osg::ref_ptr< ::osg::LOD >, boost::noncopyable > LOD_exposer_t;
        LOD_exposer_t LOD_exposer = LOD_exposer_t( "LOD", bp::no_init );
        bp::scope LOD_scope( LOD_exposer );
        bp::enum_< osg::LOD::CenterMode>("CenterMode")
            .value("USE_BOUNDING_SPHERE_CENTER", osg::LOD::USE_BOUNDING_SPHERE_CENTER)
            .value("USER_DEFINED_CENTER", osg::LOD::USER_DEFINED_CENTER)
            .value("UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED", osg::LOD::UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED)
            .export_values()
            ;
        bp::enum_< osg::LOD::RangeMode>("RangeMode")
            .value("DISTANCE_FROM_EYE_POINT", osg::LOD::DISTANCE_FROM_EYE_POINT)
            .value("PIXEL_SIZE_ON_SCREEN", osg::LOD::PIXEL_SIZE_ON_SCREEN)
            .export_values()
            ;
        LOD_exposer.def( bp::init< >() );
        { //::osg::LOD::accept
        
            typedef void ( ::osg::LOD::*accept_function_type)( ::osg::NodeVisitor & ) ;
            typedef void ( LOD_wrapper::*default_accept_function_type)( ::osg::NodeVisitor & ) ;
            
            LOD_exposer.def( 
                "accept"
                , accept_function_type(&::osg::LOD::accept)
                , default_accept_function_type(&LOD_wrapper::default_accept)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::LOD::addChild
        
            typedef bool ( ::osg::LOD::*addChild_function_type)( ::osg::Node * ) ;
            typedef bool ( LOD_wrapper::*default_addChild_function_type)( ::osg::Node * ) ;
            
            LOD_exposer.def( 
                "addChild"
                , addChild_function_type(&::osg::LOD::addChild)
                , default_addChild_function_type(&LOD_wrapper::default_addChild)
                , ( bp::arg("child") ) );
        
        }
        { //::osg::LOD::addChild
        
            typedef bool ( ::osg::LOD::*addChild_function_type)( ::osg::Node *,float,float ) ;
            typedef bool ( LOD_wrapper::*default_addChild_function_type)( ::osg::Node *,float,float ) ;
            
            LOD_exposer.def( 
                "addChild"
                , addChild_function_type(&::osg::LOD::addChild)
                , default_addChild_function_type(&LOD_wrapper::default_addChild)
                , ( bp::arg("child"), bp::arg("min"), bp::arg("max") ) );
        
        }
        { //::osg::LOD::className
        
            typedef char const * ( ::osg::LOD::*className_function_type)(  ) const;
            typedef char const * ( LOD_wrapper::*default_className_function_type)(  ) const;
            
            LOD_exposer.def( 
                "className"
                , className_function_type(&::osg::LOD::className)
                , default_className_function_type(&LOD_wrapper::default_className) );
        
        }
        { //::osg::LOD::clone
        
            typedef ::osg::Object * ( ::osg::LOD::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( LOD_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            LOD_exposer.def( 
                "clone"
                , clone_function_type(&::osg::LOD::clone)
                , default_clone_function_type(&LOD_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LOD::cloneType
        
            typedef ::osg::Object * ( ::osg::LOD::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( LOD_wrapper::*default_cloneType_function_type)(  ) const;
            
            LOD_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::LOD::cloneType)
                , default_cloneType_function_type(&LOD_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::LOD::computeBound
        
            typedef ::osg::BoundingSphere ( ::osg::LOD::*computeBound_function_type)(  ) const;
            typedef ::osg::BoundingSphere ( LOD_wrapper::*default_computeBound_function_type)(  ) const;
            
            LOD_exposer.def( 
                "computeBound"
                , computeBound_function_type(&::osg::LOD::computeBound)
                , default_computeBound_function_type(&LOD_wrapper::default_computeBound) );
        
        }
        { //::osg::LOD::getCenter
        
            typedef ::osg::Vec3f const & ( ::osg::LOD::*getCenter_function_type)(  ) const;
            
            LOD_exposer.def( 
                "getCenter"
                , getCenter_function_type( &::osg::LOD::getCenter )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::LOD::getCenterMode
        
            typedef ::osg::LOD::CenterMode ( ::osg::LOD::*getCenterMode_function_type)(  ) const;
            
            LOD_exposer.def( 
                "getCenterMode"
                , getCenterMode_function_type( &::osg::LOD::getCenterMode ) );
        
        }
        { //::osg::LOD::getMaxRange
        
            typedef float ( ::osg::LOD::*getMaxRange_function_type)( unsigned int ) const;
            
            LOD_exposer.def( 
                "getMaxRange"
                , getMaxRange_function_type( &::osg::LOD::getMaxRange )
                , ( bp::arg("childNo") ) );
        
        }
        { //::osg::LOD::getMinRange
        
            typedef float ( ::osg::LOD::*getMinRange_function_type)( unsigned int ) const;
            
            LOD_exposer.def( 
                "getMinRange"
                , getMinRange_function_type( &::osg::LOD::getMinRange )
                , ( bp::arg("childNo") ) );
        
        }
        { //::osg::LOD::getNumRanges
        
            typedef unsigned int ( ::osg::LOD::*getNumRanges_function_type)(  ) const;
            
            LOD_exposer.def( 
                "getNumRanges"
                , getNumRanges_function_type( &::osg::LOD::getNumRanges ) );
        
        }
        { //::osg::LOD::getRadius
        
            typedef float ( ::osg::LOD::*getRadius_function_type)(  ) const;
            
            LOD_exposer.def( 
                "getRadius"
                , getRadius_function_type( &::osg::LOD::getRadius ) );
        
        }
        { //::osg::LOD::getRangeList
        
            typedef ::std::vector< std::pair<float, float> > const & ( ::osg::LOD::*getRangeList_function_type)(  ) const;
            
            LOD_exposer.def( 
                "getRangeList"
                , getRangeList_function_type( &::osg::LOD::getRangeList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::LOD::getRangeMode
        
            typedef ::osg::LOD::RangeMode ( ::osg::LOD::*getRangeMode_function_type)(  ) const;
            
            LOD_exposer.def( 
                "getRangeMode"
                , getRangeMode_function_type( &::osg::LOD::getRangeMode ) );
        
        }
        { //::osg::LOD::isSameKindAs
        
            typedef bool ( ::osg::LOD::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( LOD_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            LOD_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::LOD::isSameKindAs)
                , default_isSameKindAs_function_type(&LOD_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::LOD::libraryName
        
            typedef char const * ( ::osg::LOD::*libraryName_function_type)(  ) const;
            typedef char const * ( LOD_wrapper::*default_libraryName_function_type)(  ) const;
            
            LOD_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::LOD::libraryName)
                , default_libraryName_function_type(&LOD_wrapper::default_libraryName) );
        
        }
        { //::osg::LOD::removeChildren
        
            typedef bool ( ::osg::LOD::*removeChildren_function_type)( unsigned int,unsigned int ) ;
            typedef bool ( LOD_wrapper::*default_removeChildren_function_type)( unsigned int,unsigned int ) ;
            
            LOD_exposer.def( 
                "removeChildren"
                , removeChildren_function_type(&::osg::LOD::removeChildren)
                , default_removeChildren_function_type(&LOD_wrapper::default_removeChildren)
                , ( bp::arg("pos"), bp::arg("numChildrenToRemove")=(unsigned int)(1) ) );
        
        }
        { //::osg::LOD::setCenter
        
            typedef void ( ::osg::LOD::*setCenter_function_type)( ::osg::Vec3f const & ) ;
            
            LOD_exposer.def( 
                "setCenter"
                , setCenter_function_type( &::osg::LOD::setCenter )
                , ( bp::arg("center") ) );
        
        }
        { //::osg::LOD::setCenterMode
        
            typedef void ( ::osg::LOD::*setCenterMode_function_type)( ::osg::LOD::CenterMode ) ;
            
            LOD_exposer.def( 
                "setCenterMode"
                , setCenterMode_function_type( &::osg::LOD::setCenterMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::osg::LOD::setRadius
        
            typedef void ( ::osg::LOD::*setRadius_function_type)( float ) ;
            
            LOD_exposer.def( 
                "setRadius"
                , setRadius_function_type( &::osg::LOD::setRadius )
                , ( bp::arg("radius") ) );
        
        }
        { //::osg::LOD::setRange
        
            typedef void ( ::osg::LOD::*setRange_function_type)( unsigned int,float,float ) ;
            
            LOD_exposer.def( 
                "setRange"
                , setRange_function_type( &::osg::LOD::setRange )
                , ( bp::arg("childNo"), bp::arg("min"), bp::arg("max") ) );
        
        }
        { //::osg::LOD::setRangeList
        
            typedef void ( ::osg::LOD::*setRangeList_function_type)( ::std::vector< std::pair<float, float> > const & ) ;
            
            LOD_exposer.def( 
                "setRangeList"
                , setRangeList_function_type( &::osg::LOD::setRangeList )
                , ( bp::arg("rangeList") ) );
        
        }
        { //::osg::LOD::setRangeMode
        
            typedef void ( ::osg::LOD::*setRangeMode_function_type)( ::osg::LOD::RangeMode ) ;
            
            LOD_exposer.def( 
                "setRangeMode"
                , setRangeMode_function_type( &::osg::LOD::setRangeMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::osg::LOD::traverse
        
            typedef void ( ::osg::LOD::*traverse_function_type)( ::osg::NodeVisitor & ) ;
            typedef void ( LOD_wrapper::*default_traverse_function_type)( ::osg::NodeVisitor & ) ;
            
            LOD_exposer.def( 
                "traverse"
                , traverse_function_type(&::osg::LOD::traverse)
                , default_traverse_function_type(&LOD_wrapper::default_traverse)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group * ( ::osg::Group::*asGroup_function_type)(  ) ;
            typedef ::osg::Group * ( LOD_wrapper::*default_asGroup_function_type)(  ) ;
            
            LOD_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&LOD_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group const * ( ::osg::Group::*asGroup_function_type)(  ) const;
            typedef ::osg::Group const * ( LOD_wrapper::*default_asGroup_function_type)(  ) const;
            
            LOD_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&LOD_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( LOD_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            LOD_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&LOD_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( LOD_wrapper::*default_getUserData_function_type)(  ) ;
            
            LOD_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&LOD_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( LOD_wrapper::*default_getUserData_function_type)(  ) const;
            
            LOD_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&LOD_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::insertChild
        
            typedef bool ( ::osg::Group::*insertChild_function_type)( unsigned int,::osg::Node * ) ;
            typedef bool ( LOD_wrapper::*default_insertChild_function_type)( unsigned int,::osg::Node * ) ;
            
            LOD_exposer.def( 
                "insertChild"
                , insertChild_function_type(&::osg::Group::insertChild)
                , default_insertChild_function_type(&LOD_wrapper::default_insertChild)
                , ( bp::arg("index"), bp::arg("child") ) );
        
        }
        { //::osg::Group::replaceChild
        
            typedef bool ( ::osg::Group::*replaceChild_function_type)( ::osg::Node *,::osg::Node * ) ;
            typedef bool ( LOD_wrapper::*default_replaceChild_function_type)( ::osg::Node *,::osg::Node * ) ;
            
            LOD_exposer.def( 
                "replaceChild"
                , replaceChild_function_type(&::osg::Group::replaceChild)
                , default_replaceChild_function_type(&LOD_wrapper::default_replaceChild)
                , ( bp::arg("origChild"), bp::arg("newChild") ) );
        
        }
        { //::osg::Group::resizeGLObjectBuffers
        
            typedef void ( ::osg::Group::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( LOD_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            LOD_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Group::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&LOD_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Group::setChild
        
            typedef bool ( ::osg::Group::*setChild_function_type)( unsigned int,::osg::Node * ) ;
            typedef bool ( LOD_wrapper::*default_setChild_function_type)( unsigned int,::osg::Node * ) ;
            
            LOD_exposer.def( 
                "setChild"
                , setChild_function_type(&::osg::Group::setChild)
                , default_setChild_function_type(&LOD_wrapper::default_setChild)
                , ( bp::arg("i"), bp::arg("node") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( LOD_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            LOD_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&LOD_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            LOD_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Group::setThreadSafeRefUnref
        
            typedef void ( ::osg::Group::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( LOD_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            LOD_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Group::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&LOD_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( LOD_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            LOD_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&LOD_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}