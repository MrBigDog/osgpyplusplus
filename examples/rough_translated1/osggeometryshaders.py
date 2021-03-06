#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osggeometryshaders"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgViewer


# Translated from file 'osggeometryshaders.cpp'

# OpenSceneGraph example, osgshaders2
#*
#*  Permission is hereby granted, free of charge, to any person obtaining a copy
#*  of this software and associated documentation files (the "Software"), to deal
#*  in the Software without restriction, including without limitation the rights
#*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#*  copies of the Software, and to permit persons to whom the Software is
#*  furnished to do so, subject to the following conditions:
#*
#*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
#*  THE SOFTWARE.
#

# file:        examples/osgshaders2/osgshaders2.cpp
# * author:      Mike Weiblen 2008-01-03
# * copyright:   (C) 2008 Zebra Imaging
# * license:     OpenSceneGraph Public License (OSGPL)
# *
# * A demo of GLSL geometry shaders using OSG
# * Tested on Dell Precision M4300 w/ NVIDIA Quadro FX 360M
#


#include <osg/Notify>
#include <osg/ref_ptr>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/Point>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osg/Program>
#include <osg/Shader>
#include <osg/Uniform>
#include <osgViewer/Viewer>

# play with these #defines to see their effect
#define ENABLE_GLSL
#define ENABLE_GEOMETRY_SHADER

#####################################/

#ifdef ENABLE_GLSL

class SineAnimation (osg.Uniform.Callback) :
    SineAnimation( float rate = 1.0, float scale = 1.0, float offset = 0.0 ) :
            _rate(rate), _scale(scale), _offset(offset)
    

    void operator()( osg.Uniform* uniform, osg.NodeVisitor* nv )
        angle = _rate * nv.getFrameStamp().getSimulationTime()
        value = sinf( angle ) * _scale + _offset
        uniform.set( value )
    _rate =  float()
    _scale =  float()
    _offset =  float()


#####################################/

static  char* vertSource = 
"#version 120\n"
"#extension GL_EXT_geometry_shader4 : enable\n"
"uniform float u_anim1\n"
"varying vec4 v_color\n"
"void main(void)\n"
"\n"
"    v_color = gl_Vertex\n"
"    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex\n"
"\n"


static  char* geomSource = 
"#version 120\n"
"#extension GL_EXT_geometry_shader4 : enable\n"
"uniform float u_anim1\n"
"varying in vec4 v_color[]\n"
"varying out vec4 v_color_out\n"
"void main(void)\n"
"\n"
"    vec4 v = gl_PositionIn[0]\n"
"    v_color_out = v + v_color[0]\n"
"\n"
"    gl_Position = v + vec4(u_anim1,0.,0.,0.)  EmitVertex()\n"
"    gl_Position = v - vec4(u_anim1,0.,0.,0.)  EmitVertex()\n"
"    EndPrimitive()\n"
"\n"
"    gl_Position = v + vec4(0.,1.0-u_anim1,0.,0.)  EmitVertex()\n"
"    gl_Position = v - vec4(0.,1.0-u_anim1,0.,0.)  EmitVertex()\n"
"    EndPrimitive()\n"
"\n"



static  char* fragSource = 
"#version 120\n"
"#extension GL_EXT_geometry_shader4 : enable\n"
"uniform float u_anim1\n"
"varying vec4 v_color_out\n"
"void main(void)\n"
"\n"
"    gl_FragColor = v_color_out\n"
"\n"


def createShader():

    
    pgm = osg.Program()
    pgm.setName( "osgshader2 demo" )

    pgm.addShader( osg.Shader( osg.Shader.VERTEX,   vertSource ) )
    pgm.addShader( osg.Shader( osg.Shader.FRAGMENT, fragSource ) )

#ifdef ENABLE_GEOMETRY_SHADER
    pgm.addShader( osg.Shader( osg.Shader.GEOMETRY, geomSource ) )
    pgm.setParameter( GL_GEOMETRY_VERTICES_OUT_EXT, 4 )
    pgm.setParameter( GL_GEOMETRY_INPUT_TYPE_EXT, GL_POINTS )
    pgm.setParameter( GL_GEOMETRY_OUTPUT_TYPE_EXT, GL_LINE_STRIP )
#endif

    return pgm

#endif

#####################################/

class SomePoints (osg.Geometry) :
    SomePoints()
        cAry = osg.Vec4Array()
        setColorArray( cAry, osg.Array.BIND_OVERALL )
        cAry.push_back( osg.Vec4(1,1,1,1) )

        vAry = osg.Vec3Array()
        setVertexArray( vAry )
        vAry.push_back( osg.Vec3(0,0,0) )
        vAry.push_back( osg.Vec3(0,1,0) )
        vAry.push_back( osg.Vec3(1,0,0) )
        vAry.push_back( osg.Vec3(1,1,0) )
        vAry.push_back( osg.Vec3(0,0,1) )
        vAry.push_back( osg.Vec3(0,1,1) )
        vAry.push_back( osg.Vec3(1,0,1) )
        vAry.push_back( osg.Vec3(1,1,1) )

        addPrimitiveSet( osg.DrawArrays( GL_POINTS, 0, vAry.size() ) )

        sset = getOrCreateStateSet()
        sset.setMode( GL_LIGHTING, osg.StateAttribute.OFF )

        # if things go wrong, fall back to big points
        p = osg.Point()
        p.setSize(6)
        sset.setAttribute( p )

#ifdef ENABLE_GLSL
        sset.setAttribute( createShader() )

        # a generic cyclic animation value
        u_anim1 = osg.Uniform*( osg.Uniform( "u_anim1", 0.0 ) )
        u_anim1.setUpdateCallback( SineAnimation( 4, 0.5, 0.5 ) )
        sset.addUniform( u_anim1 )
#endif


#####################################/

int main( int , char** )
    root = osg.Geode*( osg.Geode )()
    root.addDrawable( SomePoints )()

    viewer = osgViewer.Viewer()
    viewer.setSceneData( root )
    return viewer.run()

# vim: set sw=4 ts=8 et ic ai:


if __name__ == "__main__":
    main(sys.argv)
