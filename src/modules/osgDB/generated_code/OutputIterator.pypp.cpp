// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "outputiterator.pypp.hpp"

namespace bp = boost::python;

struct OutputIterator_wrapper : osgDB::OutputIterator, bp::wrapper< osgDB::OutputIterator > {

    virtual void flush(  ) {
        if( bp::override func_flush = this->get_override( "flush" ) )
            func_flush(  );
        else{
            this->osgDB::OutputIterator::flush(  );
        }
    }
    
    void default_flush(  ) {
        osgDB::OutputIterator::flush( );
    }

    virtual bool isBinary(  ) const {
        bp::override func_isBinary = this->get_override( "isBinary" );
        return func_isBinary(  );
    }

    virtual void writeBool( bool b ){
        bp::override func_writeBool = this->get_override( "writeBool" );
        func_writeBool( b );
    }

    virtual void writeChar( char c ){
        bp::override func_writeChar = this->get_override( "writeChar" );
        func_writeChar( c );
    }

    virtual void writeCharArray( char const * s, unsigned int size ){
        bp::override func_writeCharArray = this->get_override( "writeCharArray" );
        func_writeCharArray( s, size );
    }

    virtual void writeDouble( double d ){
        bp::override func_writeDouble = this->get_override( "writeDouble" );
        func_writeDouble( d );
    }

    virtual void writeFloat( float f ){
        bp::override func_writeFloat = this->get_override( "writeFloat" );
        func_writeFloat( f );
    }

    virtual void writeGLenum( ::osgDB::ObjectGLenum const & value ){
        bp::override func_writeGLenum = this->get_override( "writeGLenum" );
        func_writeGLenum( boost::ref(value) );
    }

    virtual void writeInt( int i ){
        bp::override func_writeInt = this->get_override( "writeInt" );
        func_writeInt( i );
    }

    virtual void writeLong( long int l ){
        bp::override func_writeLong = this->get_override( "writeLong" );
        func_writeLong( l );
    }

    virtual void writeMark( ::osgDB::ObjectMark const & mark ){
        bp::override func_writeMark = this->get_override( "writeMark" );
        func_writeMark( boost::ref(mark) );
    }

    virtual void writeProperty( ::osgDB::ObjectProperty const & prop ){
        bp::override func_writeProperty = this->get_override( "writeProperty" );
        func_writeProperty( boost::ref(prop) );
    }

    virtual void writeShort( short int s ){
        bp::override func_writeShort = this->get_override( "writeShort" );
        func_writeShort( s );
    }

    virtual void writeString( ::std::string const & s ){
        bp::override func_writeString = this->get_override( "writeString" );
        func_writeString( s );
    }

    virtual void writeUChar( unsigned char c ){
        bp::override func_writeUChar = this->get_override( "writeUChar" );
        func_writeUChar( c );
    }

    virtual void writeUInt( unsigned int i ){
        bp::override func_writeUInt = this->get_override( "writeUInt" );
        func_writeUInt( i );
    }

    virtual void writeULong( long unsigned int l ){
        bp::override func_writeULong = this->get_override( "writeULong" );
        func_writeULong( l );
    }

    virtual void writeUShort( short unsigned int s ){
        bp::override func_writeUShort = this->get_override( "writeUShort" );
        func_writeUShort( s );
    }

    virtual void writeWrappedString( ::std::string const & str ){
        bp::override func_writeWrappedString = this->get_override( "writeWrappedString" );
        func_writeWrappedString( str );
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

void register_OutputIterator_class(){

    bp::class_< OutputIterator_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< OutputIterator_wrapper >, boost::noncopyable >( "OutputIterator", bp::no_init )    
        .def( 
            "flush"
            , (void ( ::osgDB::OutputIterator::* )(  ))(&::osgDB::OutputIterator::flush)
            , (void ( OutputIterator_wrapper::* )(  ))(&OutputIterator_wrapper::default_flush) )    
        .def( 
            "getStream"
            , (::std::ostream * ( ::osgDB::OutputIterator::* )(  ))( &::osgDB::OutputIterator::getStream )
            , bp::return_internal_reference< >() )    
        .def( 
            "getStream"
            , (::std::ostream const * ( ::osgDB::OutputIterator::* )(  )const)( &::osgDB::OutputIterator::getStream )
            , bp::return_internal_reference< >() )    
        .def( 
            "getSupportBinaryBrackets"
            , (bool ( ::osgDB::OutputIterator::* )(  )const)( &::osgDB::OutputIterator::getSupportBinaryBrackets ) )    
        .def( 
            "isBinary"
            , bp::pure_virtual( (bool ( ::osgDB::OutputIterator::* )(  )const)(&::osgDB::OutputIterator::isBinary) ) )    
        .def( 
            "setStream"
            , (void ( ::osgDB::OutputIterator::* )( ::std::ostream * ))( &::osgDB::OutputIterator::setStream )
            , ( bp::arg("ostream") ) )    
        .def( 
            "setSupportBinaryBrackets"
            , (void ( ::osgDB::OutputIterator::* )( bool ))( &::osgDB::OutputIterator::setSupportBinaryBrackets )
            , ( bp::arg("b") ) )    
        .def( 
            "writeBool"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( bool ))(&::osgDB::OutputIterator::writeBool) )
            , ( bp::arg("b") ) )    
        .def( 
            "writeChar"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( char ))(&::osgDB::OutputIterator::writeChar) )
            , ( bp::arg("c") ) )    
        .def( 
            "writeCharArray"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( char const *,unsigned int ))(&::osgDB::OutputIterator::writeCharArray) )
            , ( bp::arg("s"), bp::arg("size") ) )    
        .def( 
            "writeDouble"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( double ))(&::osgDB::OutputIterator::writeDouble) )
            , ( bp::arg("d") ) )    
        .def( 
            "writeFloat"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( float ))(&::osgDB::OutputIterator::writeFloat) )
            , ( bp::arg("f") ) )    
        .def( 
            "writeGLenum"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( ::osgDB::ObjectGLenum const & ))(&::osgDB::OutputIterator::writeGLenum) )
            , ( bp::arg("value") ) )    
        .def( 
            "writeInt"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( int ))(&::osgDB::OutputIterator::writeInt) )
            , ( bp::arg("i") ) )    
        .def( 
            "writeLong"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( long int ))(&::osgDB::OutputIterator::writeLong) )
            , ( bp::arg("l") ) )    
        .def( 
            "writeMark"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( ::osgDB::ObjectMark const & ))(&::osgDB::OutputIterator::writeMark) )
            , ( bp::arg("mark") ) )    
        .def( 
            "writeProperty"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( ::osgDB::ObjectProperty const & ))(&::osgDB::OutputIterator::writeProperty) )
            , ( bp::arg("prop") ) )    
        .def( 
            "writeShort"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( short int ))(&::osgDB::OutputIterator::writeShort) )
            , ( bp::arg("s") ) )    
        .def( 
            "writeString"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( ::std::string const & ))(&::osgDB::OutputIterator::writeString) )
            , ( bp::arg("s") ) )    
        .def( 
            "writeUChar"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( unsigned char ))(&::osgDB::OutputIterator::writeUChar) )
            , ( bp::arg("c") ) )    
        .def( 
            "writeUInt"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( unsigned int ))(&::osgDB::OutputIterator::writeUInt) )
            , ( bp::arg("i") ) )    
        .def( 
            "writeULong"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( long unsigned int ))(&::osgDB::OutputIterator::writeULong) )
            , ( bp::arg("l") ) )    
        .def( 
            "writeUShort"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( short unsigned int ))(&::osgDB::OutputIterator::writeUShort) )
            , ( bp::arg("s") ) )    
        .def( 
            "writeWrappedString"
            , bp::pure_virtual( (void ( ::osgDB::OutputIterator::* )( ::std::string const & ))(&::osgDB::OutputIterator::writeWrappedString) )
            , ( bp::arg("str") ) );

}
