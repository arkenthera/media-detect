//----------------------------------------------------------------------------
//Chiika
//
//This program is free software; you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation; either version 2 of the License, or
//(at your option) any later version.
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along
//with this program; if not, write to the Free Software Foundation, Inc.,
//51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.*/
//
//	Date:
//	authors: arkenthera
//	Description:
//----------------------------------------------------------------------------
#ifndef __Common_h__
#define __Common_h__
//----------------------------------------------------------------------------
#include <nan.h>
//----------------------------------------------------------------------------
#define V8Value v8::Local<v8::Value>
#define DEFINE_PROPERTY(name,value) v8::String::NewFromUtf8(v8::Isolate::GetCurrent(),name),value
#define PersistentValue Nan::Persistent<v8::Value, v8::CopyablePersistentTraits<v8::Value>>
#define PersistentObject Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>
#define PersistentFunction Nan::Persistent<v8::Function, v8::CopyablePersistentTraits<v8::Function>>
//----------------------------------------------------------------------------

#if defined(__WINSCW__) || defined(_MSC_VER)
#define CHIIKA_WIN32
#elif defined(__linux__)
#define CHIIKA_LINUX
#elif defined(__APPLE__)
#define CHIIKA_MACOSX
#endif

#endif
