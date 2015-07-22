// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "indexing_helpers.h"
#include "uintarray.pypp.hpp"

namespace bp = boost::python;

struct TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper : osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >, bp::wrapper< osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > > {

    TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper(::osg::Array::Binding binding=osg::Array::BIND_UNDEFINED )
    : osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>( binding )
      , bp::wrapper< osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > >(){
        // constructor
    
    }

    TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper(unsigned int no )
    : osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>( no )
      , bp::wrapper< osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > >(){
        // constructor
    
    }

    TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper(unsigned int no, unsigned int const * ptr )
    : osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>( no, ptr )
      , bp::wrapper< osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > >(){
        // constructor
    
    }

    TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper(::osg::Array::Binding binding, unsigned int no )
    : osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>( binding, no )
      , bp::wrapper< osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > >(){
        // constructor
    
    }

    TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper(::osg::Array::Binding binding, unsigned int no, unsigned int const * ptr )
    : osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>( binding, no, ptr )
      , bp::wrapper< osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > >(){
        // constructor
    
    }

    virtual void accept( ::osg::ArrayVisitor & av ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(av) );
        else{
            this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( boost::ref(av) );
        }
    }
    
    void default_accept( ::osg::ArrayVisitor & av ) {
        osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( boost::ref(av) );
    }

    virtual void accept( ::osg::ConstArrayVisitor & av ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(av) );
        else{
            this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( boost::ref(av) );
        }
    }
    
    void default_accept( ::osg::ConstArrayVisitor & av ) const  {
        osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( boost::ref(av) );
    }

    virtual void accept( unsigned int index, ::osg::ValueVisitor & vv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( index, boost::ref(vv) );
        else{
            this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( index, boost::ref(vv) );
        }
    }
    
    void default_accept( unsigned int index, ::osg::ValueVisitor & vv ) {
        osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( index, boost::ref(vv) );
    }

    virtual void accept( unsigned int index, ::osg::ConstValueVisitor & vv ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( index, boost::ref(vv) );
        else{
            this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( index, boost::ref(vv) );
        }
    }
    
    void default_accept( unsigned int index, ::osg::ConstValueVisitor & vv ) const  {
        osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept( index, boost::ref(vv) );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::cloneType( );
    }

    virtual int compare( unsigned int lhs, unsigned int rhs ) const  {
        if( bp::override func_compare = this->get_override( "compare" ) )
            return func_compare( lhs, rhs );
        else{
            return this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::compare( lhs, rhs );
        }
    }
    
    int default_compare( unsigned int lhs, unsigned int rhs ) const  {
        return osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::compare( lhs, rhs );
    }

    virtual ::GLvoid const * getDataPointer(  ) const  {
        if( bp::override func_getDataPointer = this->get_override( "getDataPointer" ) )
            return func_getDataPointer(  );
        else{
            return this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getDataPointer(  );
        }
    }
    
    ::GLvoid const * default_getDataPointer(  ) const  {
        return osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getDataPointer( );
    }

    virtual unsigned int getElementSize(  ) const  {
        if( bp::override func_getElementSize = this->get_override( "getElementSize" ) )
            return func_getElementSize(  );
        else{
            return this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getElementSize(  );
        }
    }
    
    unsigned int default_getElementSize(  ) const  {
        return osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getElementSize( );
    }

    virtual unsigned int getNumElements(  ) const  {
        if( bp::override func_getNumElements = this->get_override( "getNumElements" ) )
            return func_getNumElements(  );
        else{
            return this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getNumElements(  );
        }
    }
    
    unsigned int default_getNumElements(  ) const  {
        return osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getNumElements( );
    }

    virtual unsigned int getTotalDataSize(  ) const  {
        if( bp::override func_getTotalDataSize = this->get_override( "getTotalDataSize" ) )
            return func_getTotalDataSize(  );
        else{
            return this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getTotalDataSize(  );
        }
    }
    
    unsigned int default_getTotalDataSize(  ) const  {
        return osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getTotalDataSize( );
    }

    virtual void reserveArray( unsigned int num ) {
        if( bp::override func_reserveArray = this->get_override( "reserveArray" ) )
            func_reserveArray( num );
        else{
            this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::reserveArray( num );
        }
    }
    
    void default_reserveArray( unsigned int num ) {
        osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::reserveArray( num );
    }

    virtual void resizeArray( unsigned int num ) {
        if( bp::override func_resizeArray = this->get_override( "resizeArray" ) )
            func_resizeArray( num );
        else{
            this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::resizeArray( num );
        }
    }
    
    void default_resizeArray( unsigned int num ) {
        osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::resizeArray( num );
    }

    virtual void trim(  ) {
        if( bp::override func_trim = this->get_override( "trim" ) )
            func_trim(  );
        else{
            this->osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::trim(  );
        }
    }
    
    void default_trim(  ) {
        osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::trim( );
    }

    virtual ::osg::Array * asArray(  ) {
        if( bp::override func_asArray = this->get_override( "asArray" ) )
            return func_asArray(  );
        else{
            return this->osg::Array::asArray(  );
        }
    }
    
    ::osg::Array * default_asArray(  ) {
        return osg::Array::asArray( );
    }

    virtual ::osg::Array const * asArray(  ) const  {
        if( bp::override func_asArray = this->get_override( "asArray" ) )
            return func_asArray(  );
        else{
            return this->osg::Array::asArray(  );
        }
    }
    
    ::osg::Array const * default_asArray(  ) const  {
        return osg::Array::asArray( );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Array::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Array::className( );
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

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Array::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Array::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Array::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Array::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::BufferData::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::BufferData::resizeGLObjectBuffers( maxSize );
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

void register_UIntArray_class(){

    { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >
        typedef bp::class_< TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper, bp::bases< osg::Array >, osg::ref_ptr< TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper >, boost::noncopyable > UIntArray_exposer_t;
        UIntArray_exposer_t UIntArray_exposer = UIntArray_exposer_t( "UIntArray", bp::no_init );
        bp::scope UIntArray_scope( UIntArray_exposer );
        UIntArray_exposer.def( bp::init< bp::optional< osg::Array::Binding > >(( bp::arg("binding")=osg::Array::BIND_UNDEFINED )) );
        bp::implicitly_convertible< osg::Array::Binding, osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > >();
        UIntArray_exposer.def( bp::init< unsigned int >(( bp::arg("no") )) );
        bp::implicitly_convertible< unsigned int, osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > >();
        UIntArray_exposer.def( bp::init< unsigned int, unsigned int const * >(( bp::arg("no"), bp::arg("ptr") )) );
        UIntArray_exposer.def( bp::init< osg::Array::Binding, unsigned int >(( bp::arg("binding"), bp::arg("no") )) );
        UIntArray_exposer.def( bp::init< osg::Array::Binding, unsigned int, unsigned int const * >(( bp::arg("binding"), bp::arg("no"), bp::arg("ptr") )) );
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef void ( exported_class_t::*accept_function_type)( ::osg::ArrayVisitor & ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_accept_function_type)( ::osg::ArrayVisitor & ) ;
            
            UIntArray_exposer.def( 
                "accept"
                , accept_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept)
                , default_accept_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_accept)
                , ( bp::arg("av") ) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef void ( exported_class_t::*accept_function_type)( ::osg::ConstArrayVisitor & ) const;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_accept_function_type)( ::osg::ConstArrayVisitor & ) const;
            
            UIntArray_exposer.def( 
                "accept"
                , accept_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept)
                , default_accept_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_accept)
                , ( bp::arg("av") ) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef void ( exported_class_t::*accept_function_type)( unsigned int,::osg::ValueVisitor & ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_accept_function_type)( unsigned int,::osg::ValueVisitor & ) ;
            
            UIntArray_exposer.def( 
                "accept"
                , accept_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept)
                , default_accept_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_accept)
                , ( bp::arg("index"), bp::arg("vv") ) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef void ( exported_class_t::*accept_function_type)( unsigned int,::osg::ConstValueVisitor & ) const;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_accept_function_type)( unsigned int,::osg::ConstValueVisitor & ) const;
            
            UIntArray_exposer.def( 
                "accept"
                , accept_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::accept)
                , default_accept_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_accept)
                , ( bp::arg("index"), bp::arg("vv") ) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::clone
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef ::osg::Object * ( exported_class_t::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            UIntArray_exposer.def( 
                "clone"
                , clone_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::clone)
                , default_clone_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::cloneType
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef ::osg::Object * ( exported_class_t::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_cloneType_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::cloneType)
                , default_cloneType_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::compare
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef int ( exported_class_t::*compare_function_type)( unsigned int,unsigned int ) const;
            typedef int ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_compare_function_type)( unsigned int,unsigned int ) const;
            
            UIntArray_exposer.def( 
                "compare"
                , compare_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::compare)
                , default_compare_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_compare)
                , ( bp::arg("lhs"), bp::arg("rhs") ) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getDataPointer
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef ::GLvoid const * ( exported_class_t::*getDataPointer_function_type)(  ) const;
            typedef ::GLvoid const * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_getDataPointer_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "getDataPointer"
                , getDataPointer_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getDataPointer)
                , default_getDataPointer_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_getDataPointer)
                , bp::return_value_policy< bp::return_opaque_pointer >() );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getElementSize
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef unsigned int ( exported_class_t::*getElementSize_function_type)(  ) const;
            typedef unsigned int ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_getElementSize_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "getElementSize"
                , getElementSize_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getElementSize)
                , default_getElementSize_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_getElementSize) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getNumElements
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef unsigned int ( exported_class_t::*getNumElements_function_type)(  ) const;
            typedef unsigned int ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_getNumElements_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "getNumElements"
                , getNumElements_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getNumElements)
                , default_getNumElements_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_getNumElements) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getTotalDataSize
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef unsigned int ( exported_class_t::*getTotalDataSize_function_type)(  ) const;
            typedef unsigned int ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_getTotalDataSize_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "getTotalDataSize"
                , getTotalDataSize_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::getTotalDataSize)
                , default_getTotalDataSize_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_getTotalDataSize) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::reserveArray
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef void ( exported_class_t::*reserveArray_function_type)( unsigned int ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_reserveArray_function_type)( unsigned int ) ;
            
            UIntArray_exposer.def( 
                "reserveArray"
                , reserveArray_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::reserveArray)
                , default_reserveArray_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_reserveArray)
                , ( bp::arg("num") ) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::resizeArray
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef void ( exported_class_t::*resizeArray_function_type)( unsigned int ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_resizeArray_function_type)( unsigned int ) ;
            
            UIntArray_exposer.def( 
                "resizeArray"
                , resizeArray_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::resizeArray)
                , default_resizeArray_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_resizeArray)
                , ( bp::arg("num") ) );
        
        }
        { //::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::trim
        
            typedef osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 > exported_class_t;
            typedef void ( exported_class_t::*trim_function_type)(  ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_trim_function_type)(  ) ;
            
            UIntArray_exposer.def( 
                "trim"
                , trim_function_type(&::osg::TemplateArray< unsigned int, (osg::Array::Type)6, 4, 4 >::trim)
                , default_trim_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_trim) );
        
        }
        { //::osg::Array::asArray
        
            typedef ::osg::Array * ( ::osg::Array::*asArray_function_type)(  ) ;
            typedef ::osg::Array * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_asArray_function_type)(  ) ;
            
            UIntArray_exposer.def( 
                "asArray"
                , asArray_function_type(&::osg::Array::asArray)
                , default_asArray_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_asArray)
                , bp::return_self< >() );
        
        }
        { //::osg::Array::asArray
        
            typedef ::osg::Array const * ( ::osg::Array::*asArray_function_type)(  ) const;
            typedef ::osg::Array const * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_asArray_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "asArray"
                , asArray_function_type(&::osg::Array::asArray)
                , default_asArray_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_asArray)
                , bp::return_self< >() );
        
        }
        { //::osg::Array::className
        
            typedef char const * ( ::osg::Array::*className_function_type)(  ) const;
            typedef char const * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_className_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "className"
                , className_function_type(&::osg::Array::className)
                , default_className_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_className) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            UIntArray_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_getUserData_function_type)(  ) ;
            
            UIntArray_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_getUserData_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Array::isSameKindAs
        
            typedef bool ( ::osg::Array::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            UIntArray_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Array::isSameKindAs)
                , default_isSameKindAs_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Array::libraryName
        
            typedef char const * ( ::osg::Array::*libraryName_function_type)(  ) const;
            typedef char const * ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_libraryName_function_type)(  ) const;
            
            UIntArray_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Array::libraryName)
                , default_libraryName_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_libraryName) );
        
        }
        { //::osg::BufferData::resizeGLObjectBuffers
        
            typedef void ( ::osg::BufferData::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            UIntArray_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::BufferData::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            UIntArray_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            UIntArray_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            UIntArray_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            UIntArray_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&TemplateArray_less__unsigned_int_comma___obrace_osg_scope_Array_scope_Type_cbrace_6_comma__4_comma__4__greater__wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        UIntArray_exposer.def(bp::indexing::container_suite<
                        osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>, 
                        bp::indexing::all_methods, 
                        list_algorithms<OsgArray_container_traits<osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>, osg::TemplateArray<unsigned int, (osg::Array::Type)6, 4, 4>::ElementDataType> > >());
    }

}
