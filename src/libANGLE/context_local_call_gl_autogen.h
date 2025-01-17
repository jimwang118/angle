// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2023 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// context_local_call_gl_autogen.h:
//   Helpers that set/get state that is entirely locally accessed by the context.

#ifndef LIBANGLE_CONTEXT_LOCAL_CALL_gl_AUTOGEN_H_
#define LIBANGLE_CONTEXT_LOCAL_CALL_gl_AUTOGEN_H_

#include "libANGLE/Context.h"

namespace gl
{
void ContextLocalVertexAttrib1d(Context *context, GLuint index, GLdouble x);
void ContextLocalVertexAttrib1dv(Context *context, GLuint index, const GLdouble *v);
void ContextLocalVertexAttrib1s(Context *context, GLuint index, GLshort x);
void ContextLocalVertexAttrib1sv(Context *context, GLuint index, const GLshort *v);
void ContextLocalVertexAttrib2d(Context *context, GLuint index, GLdouble x, GLdouble y);
void ContextLocalVertexAttrib2dv(Context *context, GLuint index, const GLdouble *v);
void ContextLocalVertexAttrib2s(Context *context, GLuint index, GLshort x, GLshort y);
void ContextLocalVertexAttrib2sv(Context *context, GLuint index, const GLshort *v);
void ContextLocalVertexAttrib3d(Context *context, GLuint index, GLdouble x, GLdouble y, GLdouble z);
void ContextLocalVertexAttrib3dv(Context *context, GLuint index, const GLdouble *v);
void ContextLocalVertexAttrib3s(Context *context, GLuint index, GLshort x, GLshort y, GLshort z);
void ContextLocalVertexAttrib3sv(Context *context, GLuint index, const GLshort *v);
void ContextLocalVertexAttrib4Nbv(Context *context, GLuint index, const GLbyte *v);
void ContextLocalVertexAttrib4Niv(Context *context, GLuint index, const GLint *v);
void ContextLocalVertexAttrib4Nsv(Context *context, GLuint index, const GLshort *v);
void ContextLocalVertexAttrib4Nub(Context *context,
                                  GLuint index,
                                  GLubyte x,
                                  GLubyte y,
                                  GLubyte z,
                                  GLubyte w);
void ContextLocalVertexAttrib4Nubv(Context *context, GLuint index, const GLubyte *v);
void ContextLocalVertexAttrib4Nuiv(Context *context, GLuint index, const GLuint *v);
void ContextLocalVertexAttrib4Nusv(Context *context, GLuint index, const GLushort *v);
void ContextLocalVertexAttrib4bv(Context *context, GLuint index, const GLbyte *v);
void ContextLocalVertexAttrib4d(Context *context,
                                GLuint index,
                                GLdouble x,
                                GLdouble y,
                                GLdouble z,
                                GLdouble w);
void ContextLocalVertexAttrib4dv(Context *context, GLuint index, const GLdouble *v);
void ContextLocalVertexAttrib4iv(Context *context, GLuint index, const GLint *v);
void ContextLocalVertexAttrib4s(Context *context,
                                GLuint index,
                                GLshort x,
                                GLshort y,
                                GLshort z,
                                GLshort w);
void ContextLocalVertexAttrib4sv(Context *context, GLuint index, const GLshort *v);
void ContextLocalVertexAttrib4ubv(Context *context, GLuint index, const GLubyte *v);
void ContextLocalVertexAttrib4uiv(Context *context, GLuint index, const GLuint *v);
void ContextLocalVertexAttrib4usv(Context *context, GLuint index, const GLushort *v);
void ContextLocalVertexAttribI1i(Context *context, GLuint index, GLint x);
void ContextLocalVertexAttribI1iv(Context *context, GLuint index, const GLint *v);
void ContextLocalVertexAttribI1ui(Context *context, GLuint index, GLuint x);
void ContextLocalVertexAttribI1uiv(Context *context, GLuint index, const GLuint *v);
void ContextLocalVertexAttribI2i(Context *context, GLuint index, GLint x, GLint y);
void ContextLocalVertexAttribI2iv(Context *context, GLuint index, const GLint *v);
void ContextLocalVertexAttribI2ui(Context *context, GLuint index, GLuint x, GLuint y);
void ContextLocalVertexAttribI2uiv(Context *context, GLuint index, const GLuint *v);
void ContextLocalVertexAttribI3i(Context *context, GLuint index, GLint x, GLint y, GLint z);
void ContextLocalVertexAttribI3iv(Context *context, GLuint index, const GLint *v);
void ContextLocalVertexAttribI3ui(Context *context, GLuint index, GLuint x, GLuint y, GLuint z);
void ContextLocalVertexAttribI3uiv(Context *context, GLuint index, const GLuint *v);
void ContextLocalVertexAttribI4bv(Context *context, GLuint index, const GLbyte *v);
void ContextLocalVertexAttribI4sv(Context *context, GLuint index, const GLshort *v);
void ContextLocalVertexAttribI4ubv(Context *context, GLuint index, const GLubyte *v);
void ContextLocalVertexAttribI4usv(Context *context, GLuint index, const GLushort *v);
void ContextLocalVertexAttribP1ui(Context *context,
                                  GLuint index,
                                  GLenum type,
                                  GLboolean normalized,
                                  GLuint value);
void ContextLocalVertexAttribP1uiv(Context *context,
                                   GLuint index,
                                   GLenum type,
                                   GLboolean normalized,
                                   const GLuint *value);
void ContextLocalVertexAttribP2ui(Context *context,
                                  GLuint index,
                                  GLenum type,
                                  GLboolean normalized,
                                  GLuint value);
void ContextLocalVertexAttribP2uiv(Context *context,
                                   GLuint index,
                                   GLenum type,
                                   GLboolean normalized,
                                   const GLuint *value);
void ContextLocalVertexAttribP3ui(Context *context,
                                  GLuint index,
                                  GLenum type,
                                  GLboolean normalized,
                                  GLuint value);
void ContextLocalVertexAttribP3uiv(Context *context,
                                   GLuint index,
                                   GLenum type,
                                   GLboolean normalized,
                                   const GLuint *value);
void ContextLocalVertexAttribP4ui(Context *context,
                                  GLuint index,
                                  GLenum type,
                                  GLboolean normalized,
                                  GLuint value);
void ContextLocalVertexAttribP4uiv(Context *context,
                                   GLuint index,
                                   GLenum type,
                                   GLboolean normalized,
                                   const GLuint *value);
void ContextLocalVertexAttribL1d(Context *context, GLuint index, GLdouble x);
void ContextLocalVertexAttribL1dv(Context *context, GLuint index, const GLdouble *v);
void ContextLocalVertexAttribL2d(Context *context, GLuint index, GLdouble x, GLdouble y);
void ContextLocalVertexAttribL2dv(Context *context, GLuint index, const GLdouble *v);
void ContextLocalVertexAttribL3d(Context *context,
                                 GLuint index,
                                 GLdouble x,
                                 GLdouble y,
                                 GLdouble z);
void ContextLocalVertexAttribL3dv(Context *context, GLuint index, const GLdouble *v);
void ContextLocalVertexAttribL4d(Context *context,
                                 GLuint index,
                                 GLdouble x,
                                 GLdouble y,
                                 GLdouble z,
                                 GLdouble w);
void ContextLocalVertexAttribL4dv(Context *context, GLuint index, const GLdouble *v);
}  // namespace gl

#endif  // LIBANGLE_CONTEXT_LOCAL_CALL_gl_AUTOGEN_H_
