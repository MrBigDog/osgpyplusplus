// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "wrap_osgdb.h"
#include "vector_type.pypp.hpp"

namespace bp = boost::python;

void register_vector_type_class(){

    { //::std::vector< int >
        typedef bp::class_< std::vector< int > > vector_type_exposer_t;
        vector_type_exposer_t vector_type_exposer = vector_type_exposer_t( "vector_type" );
        bp::scope vector_type_scope( vector_type_exposer );
        vector_type_exposer.def( bp::vector_indexing_suite< ::std::vector< int >, true >() );
    }

}