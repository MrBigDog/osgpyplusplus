// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "reflectionmapgenerator.pypp.hpp"

namespace bp = boost::python;

struct ReflectionMapGenerator_wrapper : osgUtil::ReflectionMapGenerator, bp::wrapper< osgUtil::ReflectionMapGenerator > {

    ReflectionMapGenerator_wrapper(int texture_size=64 )
    : osgUtil::ReflectionMapGenerator( texture_size )
      , bp::wrapper< osgUtil::ReflectionMapGenerator >(){
        // constructor
    
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

void register_ReflectionMapGenerator_class(){

    { //::osgUtil::ReflectionMapGenerator
        typedef bp::class_< ReflectionMapGenerator_wrapper, bp::bases< osgUtil::CubeMapGenerator >, osg::ref_ptr< ReflectionMapGenerator_wrapper >, boost::noncopyable > ReflectionMapGenerator_exposer_t;
        ReflectionMapGenerator_exposer_t ReflectionMapGenerator_exposer = ReflectionMapGenerator_exposer_t( "ReflectionMapGenerator", bp::no_init );
        bp::scope ReflectionMapGenerator_scope( ReflectionMapGenerator_exposer );
        ReflectionMapGenerator_exposer.def( bp::init< bp::optional< int > >(( bp::arg("texture_size")=(int)(64) )) );
        bp::implicitly_convertible< int, osgUtil::ReflectionMapGenerator >();
    }

}
