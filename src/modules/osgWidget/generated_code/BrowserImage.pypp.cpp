// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "browserimage.pypp.hpp"

namespace bp = boost::python;

struct BrowserImage_wrapper : osgWidget::BrowserImage, bp::wrapper< osgWidget::BrowserImage > {

    virtual void navigateTo( ::std::string const & url ){
        bp::override func_navigateTo = this->get_override( "navigateTo" );
        func_navigateTo( url );
    }

};

void register_BrowserImage_class(){

    bp::class_< BrowserImage_wrapper, osg::ref_ptr< ::osgWidget::BrowserImage >, boost::noncopyable >( "BrowserImage", "\n Pure virtual base class that provides the browser interface for integration with 3rd party implementations.\n Implementations of BrowserImage are provided via the gecko plugin.\n", bp::no_init )    
        .def( 
            "navigateTo"
            , bp::pure_virtual( (void ( ::osgWidget::BrowserImage::* )( ::std::string const & ) )(&::osgWidget::BrowserImage::navigateTo) )
            , ( bp::arg("url") )
            , "\n Pure virtual base class that provides the browser interface for integration with 3rd party implementations.\n Implementations of BrowserImage are provided via the gecko plugin.\n" );

}
