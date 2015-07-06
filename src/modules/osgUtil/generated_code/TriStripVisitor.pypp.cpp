// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "tristripvisitor.pypp.hpp"

namespace bp = boost::python;

struct TriStripVisitor_wrapper : osgUtil::TriStripVisitor, bp::wrapper< osgUtil::TriStripVisitor > {

    TriStripVisitor_wrapper(::osgUtil::Optimizer * optimizer=0 )
    : osgUtil::TriStripVisitor( boost::python::ptr(optimizer) )
      , bp::wrapper< osgUtil::TriStripVisitor >(){
        // constructor
    
    }

    virtual void apply( ::osg::Geode & geode ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(geode) );
        else{
            this->osgUtil::TriStripVisitor::apply( boost::ref(geode) );
        }
    }
    
    void default_apply( ::osg::Geode & geode ) {
        osgUtil::TriStripVisitor::apply( boost::ref(geode) );
    }

    virtual void apply( ::osg::Node & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Node & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Billboard & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Billboard & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Group & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Group & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ProxyNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ProxyNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Projection & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Projection & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CoordinateSystemNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CoordinateSystemNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClipNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClipNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::TexGenNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::TexGenNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LightSource & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LightSource & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Transform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Transform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Camera & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Camera & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CameraView & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CameraView & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::MatrixTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::MatrixTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PositionAttitudeTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PositionAttitudeTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Switch & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Switch & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Sequence & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Sequence & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LOD & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PagedLOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PagedLOD & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClearNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClearNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OccluderNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OccluderNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OcclusionQueryNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OcclusionQueryNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::NodeVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::NodeVisitor::className( );
    }

    virtual float getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceFromEyePoint = this->get_override( "getDistanceFromEyePoint" ) )
            return func_getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToViewPoint = this->get_override( "getDistanceToViewPoint" ) )
            return func_getDistanceToViewPoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
    }

    virtual ::osg::Vec3 getEyePoint(  ) const  {
        if( bp::override func_getEyePoint = this->get_override( "getEyePoint" ) )
            return func_getEyePoint(  );
        else{
            return this->osg::NodeVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osg::NodeVisitor::getEyePoint( );
    }

    virtual ::osg::Vec3 getViewPoint(  ) const  {
        if( bp::override func_getViewPoint = this->get_override( "getViewPoint" ) )
            return func_getViewPoint(  );
        else{
            return this->osg::NodeVisitor::getViewPoint(  );
        }
    }
    
    ::osg::Vec3 default_getViewPoint(  ) const  {
        return osg::NodeVisitor::getViewPoint( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::NodeVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::NodeVisitor::libraryName( );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osg::NodeVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osg::NodeVisitor::reset( );
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

void register_TriStripVisitor_class(){

    { //::osgUtil::TriStripVisitor
        typedef bp::class_< TriStripVisitor_wrapper, bp::bases< osgUtil::BaseOptimizerVisitor >, osg::ref_ptr< ::osgUtil::TriStripVisitor >, boost::noncopyable > TriStripVisitor_exposer_t;
        TriStripVisitor_exposer_t TriStripVisitor_exposer = TriStripVisitor_exposer_t( "TriStripVisitor", bp::init< bp::optional< osgUtil::Optimizer * > >(( bp::arg("optimizer")=bp::object() )) );
        bp::scope TriStripVisitor_scope( TriStripVisitor_exposer );
        bp::implicitly_convertible< osgUtil::Optimizer *, osgUtil::TriStripVisitor >();
        { //::osgUtil::TriStripVisitor::apply
        
            typedef void ( ::osgUtil::TriStripVisitor::*apply_function_type)( ::osg::Geode & ) ;
            typedef void ( TriStripVisitor_wrapper::*default_apply_function_type)( ::osg::Geode & ) ;
            
            TriStripVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgUtil::TriStripVisitor::apply)
                , default_apply_function_type(&TriStripVisitor_wrapper::default_apply)
                , ( bp::arg("geode") ) );
        
        }
        { //::osgUtil::TriStripVisitor::getCacheSize
        
            typedef unsigned int ( ::osgUtil::TriStripVisitor::*getCacheSize_function_type)(  ) const;
            
            TriStripVisitor_exposer.def( 
                "getCacheSize"
                , getCacheSize_function_type( &::osgUtil::TriStripVisitor::getCacheSize ) );
        
        }
        { //::osgUtil::TriStripVisitor::getGenerateFourPointPrimitivesQuads
        
            typedef bool ( ::osgUtil::TriStripVisitor::*getGenerateFourPointPrimitivesQuads_function_type)(  ) const;
            
            TriStripVisitor_exposer.def( 
                "getGenerateFourPointPrimitivesQuads"
                , getGenerateFourPointPrimitivesQuads_function_type( &::osgUtil::TriStripVisitor::getGenerateFourPointPrimitivesQuads ) );
        
        }
        { //::osgUtil::TriStripVisitor::getMinStripSize
        
            typedef unsigned int ( ::osgUtil::TriStripVisitor::*getMinStripSize_function_type)(  ) const;
            
            TriStripVisitor_exposer.def( 
                "getMinStripSize"
                , getMinStripSize_function_type( &::osgUtil::TriStripVisitor::getMinStripSize ) );
        
        }
        { //::osgUtil::TriStripVisitor::setCacheSize
        
            typedef void ( ::osgUtil::TriStripVisitor::*setCacheSize_function_type)( unsigned int ) ;
            
            TriStripVisitor_exposer.def( 
                "setCacheSize"
                , setCacheSize_function_type( &::osgUtil::TriStripVisitor::setCacheSize )
                , ( bp::arg("size") ) );
        
        }
        { //::osgUtil::TriStripVisitor::setGenerateFourPointPrimitivesQuads
        
            typedef void ( ::osgUtil::TriStripVisitor::*setGenerateFourPointPrimitivesQuads_function_type)( bool ) ;
            
            TriStripVisitor_exposer.def( 
                "setGenerateFourPointPrimitivesQuads"
                , setGenerateFourPointPrimitivesQuads_function_type( &::osgUtil::TriStripVisitor::setGenerateFourPointPrimitivesQuads )
                , ( bp::arg("flag") ) );
        
        }
        { //::osgUtil::TriStripVisitor::setMinStripSize
        
            typedef void ( ::osgUtil::TriStripVisitor::*setMinStripSize_function_type)( unsigned int ) ;
            
            TriStripVisitor_exposer.def( 
                "setMinStripSize"
                , setMinStripSize_function_type( &::osgUtil::TriStripVisitor::setMinStripSize )
                , ( bp::arg("size") ) );
        
        }
        { //::osgUtil::TriStripVisitor::stripify
        
            typedef void ( ::osgUtil::TriStripVisitor::*stripify_function_type)( ::osg::Geometry & ) ;
            
            TriStripVisitor_exposer.def( 
                "stripify"
                , stripify_function_type( &::osgUtil::TriStripVisitor::stripify )
                , ( bp::arg("drawable") ) );
        
        }
        { //::osgUtil::TriStripVisitor::stripify
        
            typedef void ( ::osgUtil::TriStripVisitor::*stripify_function_type)(  ) ;
            
            TriStripVisitor_exposer.def( 
                "stripify"
                , stripify_function_type( &::osgUtil::TriStripVisitor::stripify ) );
        
        }
    }

}